#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
auto_push.py
================================================================================
Automates the curation of a Codeforces solutions archive on GitHub.

This script operates on TWO separate, independent folders:

    * ``source_path``   - your original Competitive Programming folder
                           (e.g. hundreds of hashed .cpp files + a .cph
                           metadata directory). This folder is READ-ONLY
                           as far as this script is concerned: files here
                           are never modified, renamed, moved, or deleted.
    * ``repository_path`` - the local clone of your GitHub archive repo
                           (e.g. codeforces_mine). Clean, renamed copies
                           are written here, and this is the only folder
                           where git commands, progress.json,
                           upload_log.txt, and README.md are touched.

Every time this script runs it will:
    1. Self-heal any uncommitted work left over from a previously failed run
       (inside ``repository_path`` only).
    2. Scan ``source_path`` for loose ``*.cpp`` files produced by
       Competitive Companion / CPH (Competitive Programming Helper).
    3. Identify the Codeforces problem behind each file using local CPH
       metadata (``source_path/.cph/*.prob`` JSON files) and the Codeforces
       ``problemset.problems`` API (with local caching + retries).
    4. Pick a fixed number of *never-before-uploaded* problems
       (default: 2 per day), and COPY (never move) them into
       ``repository_path``, renamed to ``{contestId}{index} - {name}.cpp``
       inside a folder named after their rating (e.g. ``800/``).
    5. Update ``progress.json`` (automation state), ``upload_log.txt``
       (append-only audit trail) and ``README.md`` (auto-generated stats
       table) inside ``repository_path``, then commit and push everything
       to ``main``.

Author: Generated for UP-Aditya/codeforces_mine
Python: 3.12.8
================================================================================
"""

from __future__ import annotations

import argparse
import json
import logging
import re
import shutil
import subprocess
import sys
import time
import traceback
from dataclasses import dataclass, field
from datetime import datetime, timedelta
from pathlib import Path
from typing import Any, Optional

# --------------------------------------------------------------------------- #
# Third-party imports (declared in requirements.txt)
# --------------------------------------------------------------------------- #
try:
    import requests
except ImportError:  # pragma: no cover - handled at runtime with a clear message
    print("ERROR: The 'requests' package is required. Run: pip install -r requirements.txt")
    sys.exit(1)

try:
    from colorama import Fore, Style, init as colorama_init
    _COLORAMA_AVAILABLE = True
except ImportError:  # pragma: no cover - colors are a nice-to-have, not critical
    _COLORAMA_AVAILABLE = False

try:
    from tqdm import tqdm
    _TQDM_AVAILABLE = True
except ImportError:  # pragma: no cover - progress bar is a nice-to-have
    _TQDM_AVAILABLE = False


SCRIPT_DIR = Path(__file__).resolve().parent
DEFAULT_CONFIG_PATH = SCRIPT_DIR / "config.json"


# =============================================================================
# Custom Exceptions
# =============================================================================
class AutomationError(Exception):
    """Base class for all deliberate, recoverable errors raised by this script."""


class ConfigError(AutomationError):
    """Raised when config.json is missing, malformed, or missing required keys."""


class GitCommandError(AutomationError):
    """Raised when a git subprocess command fails unexpectedly."""


class CodeforcesAPIError(AutomationError):
    """Raised when the Codeforces API cannot be reached or returns bad data."""


# =============================================================================
# Logging setup (console with color, file plain)
# =============================================================================
class _ColorConsoleFormatter(logging.Formatter):
    """Adds ANSI colors to console log records when colorama is available."""

    LEVEL_COLORS = {}
    if _COLORAMA_AVAILABLE:
        LEVEL_COLORS = {
            logging.DEBUG: Fore.CYAN,
            logging.INFO: Fore.GREEN,
            logging.WARNING: Fore.YELLOW,
            logging.ERROR: Fore.RED,
            logging.CRITICAL: Fore.MAGENTA + Style.BRIGHT,
        }

    def format(self, record: logging.LogRecord) -> str:
        base = super().format(record)
        if _COLORAMA_AVAILABLE:
            color = self.LEVEL_COLORS.get(record.levelno, "")
            return f"{color}{base}{Style.RESET_ALL}"
        return base


def setup_logging(log_file: Path, level: str = "INFO", use_colors: bool = True) -> logging.Logger:
    """Configures and returns the root logger for the application."""
    log_file.parent.mkdir(parents=True, exist_ok=True)

    if use_colors and _COLORAMA_AVAILABLE:
        colorama_init(autoreset=True)

    logger = logging.getLogger("auto_push")
    logger.setLevel(getattr(logging, level.upper(), logging.INFO))
    logger.handlers.clear()  # avoid duplicate handlers on re-invocation

    fmt = "%(asctime)s | %(levelname)-8s | %(message)s"
    datefmt = "%Y-%m-%d %H:%M:%S"

    console_handler = logging.StreamHandler(sys.stdout)
    console_handler.setFormatter(
        _ColorConsoleFormatter(fmt, datefmt) if use_colors else logging.Formatter(fmt, datefmt)
    )
    logger.addHandler(console_handler)

    file_handler = logging.FileHandler(log_file, encoding="utf-8")
    file_handler.setFormatter(logging.Formatter(fmt, datefmt))
    logger.addHandler(file_handler)

    return logger


# =============================================================================
# Configuration
# =============================================================================
@dataclass
class Config:
    """Typed, validated wrapper around config.json.

    Two distinct locations are involved:
      - ``source_path``: your original Competitive Programming folder.
        This is scanned READ-ONLY for loose ``.cpp`` files and ``.cph``
        metadata. Nothing here is ever modified, renamed, moved, or deleted.
      - ``repository_path``: the local clone of the GitHub archive repo.
        This is where clean, renamed, rating-organized copies are written,
        and where progress.json / upload_log.txt / README.md / git
        commits and pushes all happen.
    """

    repository_path: Path
    source_path: Path
    git_remote_name: str
    git_remote_url: str
    git_branch: str
    daily_upload_count: int
    ignore_dirs: set
    codeforces_api_base: str
    cf_cache_file: str
    cf_cache_ttl_hours: int
    progress_file: str
    upload_log_file: str
    readme_file: str
    log_file: str
    max_api_retries: int
    api_retry_backoff_seconds: float
    request_timeout_seconds: int
    git_pull_before_run: bool
    git_push_retries: int
    git_push_retry_backoff_seconds: float
    dry_run: bool
    unrated_folder_name: str
    date_format: str
    log_level: str
    console_colors: bool

    REQUIRED_KEYS = (
        "repository_path", "source_path", "git_remote_name", "git_remote_url", "git_branch",
        "daily_upload_count", "ignore_dirs", "codeforces_api_base",
        "cf_cache_file", "cf_cache_ttl_hours", "progress_file",
        "upload_log_file", "readme_file", "log_file", "max_api_retries",
        "api_retry_backoff_seconds", "request_timeout_seconds",
        "git_pull_before_run", "git_push_retries",
        "git_push_retry_backoff_seconds", "dry_run", "unrated_folder_name",
        "date_format", "log_level", "console_colors",
    )

    @classmethod
    def load(cls, path: Path) -> "Config":
        if not path.exists():
            raise ConfigError(
                f"Configuration file not found at '{path}'. "
                "Copy the provided config.json template and edit it first."
            )
        try:
            raw = json.loads(path.read_text(encoding="utf-8"))
        except json.JSONDecodeError as exc:
            raise ConfigError(f"config.json is not valid JSON: {exc}") from exc

        missing = [k for k in cls.REQUIRED_KEYS if k not in raw]
        if missing:
            raise ConfigError(f"config.json is missing required keys: {missing}")

        return cls(
            repository_path=Path(raw["repository_path"]),
            source_path=Path(raw["source_path"]),
            git_remote_name=raw["git_remote_name"],
            git_remote_url=raw["git_remote_url"],
            git_branch=raw["git_branch"],
            daily_upload_count=int(raw["daily_upload_count"]),
            ignore_dirs=set(raw["ignore_dirs"]),
            codeforces_api_base=raw["codeforces_api_base"],
            cf_cache_file=raw["cf_cache_file"],
            cf_cache_ttl_hours=int(raw["cf_cache_ttl_hours"]),
            progress_file=raw["progress_file"],
            upload_log_file=raw["upload_log_file"],
            readme_file=raw["readme_file"],
            log_file=raw["log_file"],
            max_api_retries=int(raw["max_api_retries"]),
            api_retry_backoff_seconds=float(raw["api_retry_backoff_seconds"]),
            request_timeout_seconds=int(raw["request_timeout_seconds"]),
            git_pull_before_run=bool(raw["git_pull_before_run"]),
            git_push_retries=int(raw["git_push_retries"]),
            git_push_retry_backoff_seconds=float(raw["git_push_retry_backoff_seconds"]),
            dry_run=bool(raw["dry_run"]),
            unrated_folder_name=raw["unrated_folder_name"],
            date_format=raw["date_format"],
            log_level=raw["log_level"],
            console_colors=bool(raw["console_colors"]),
        )


# =============================================================================
# Codeforces API client (with retries + local caching)
# =============================================================================
class CodeforcesAPIClient:
    """Fetches and caches the full Codeforces problem set.

    Rather than calling the API once per problem, this client fetches the
    entire ``problemset.problems`` endpoint (a single request) and caches it
    to disk. Subsequent lookups are done in-memory against that cache, which
    is refreshed only after ``cf_cache_ttl_hours`` have elapsed.
    """

    def __init__(self, config: Config, logger: logging.Logger):
        self.config = config
        self.logger = logger
        self.cache_path = config.repository_path / config.cf_cache_file
        self._lookup: dict[str, dict[str, Any]] = {}

    def _load_cache_from_disk(self) -> Optional[dict[str, Any]]:
        if not self.cache_path.exists():
            return None
        try:
            data = json.loads(self.cache_path.read_text(encoding="utf-8"))
            fetched_at = datetime.fromisoformat(data["fetched_at"])
            age = datetime.now() - fetched_at
            data["_age_hours"] = age.total_seconds() / 3600.0
            return data
        except (json.JSONDecodeError, KeyError, ValueError) as exc:
            self.logger.warning(f"Corrupt Codeforces API cache, ignoring it: {exc}")
            return None

    def _save_cache_to_disk(self, problems: list[dict[str, Any]]) -> None:
        payload = {"fetched_at": datetime.now().isoformat(), "problems": problems}
        try:
            self.cache_path.write_text(json.dumps(payload, indent=2), encoding="utf-8")
        except OSError as exc:
            self.logger.warning(f"Could not write API cache to disk: {exc}")

    def _fetch_from_network(self) -> list[dict[str, Any]]:
        url = f"{self.config.codeforces_api_base}/problemset.problems"
        last_exc: Optional[Exception] = None

        for attempt in range(1, self.config.max_api_retries + 1):
            try:
                self.logger.debug(f"Fetching Codeforces problemset (attempt {attempt})...")
                resp = requests.get(url, timeout=self.config.request_timeout_seconds)
                resp.raise_for_status()
                body = resp.json()
                if body.get("status") != "OK":
                    raise CodeforcesAPIError(f"Codeforces API returned status: {body.get('status')}")
                return body["result"]["problems"]
            except (requests.RequestException, ValueError, KeyError) as exc:
                last_exc = exc
                wait = self.config.api_retry_backoff_seconds * attempt
                self.logger.warning(
                    f"Codeforces API attempt {attempt}/{self.config.max_api_retries} failed: {exc}. "
                    f"Retrying in {wait:.1f}s..."
                )
                time.sleep(wait)

        raise CodeforcesAPIError(
            f"Failed to reach Codeforces API after {self.config.max_api_retries} attempts: {last_exc}"
        )

    def load(self) -> None:
        """Populates the in-memory lookup table, preferring a fresh cache."""
        cached = self._load_cache_from_disk()
        ttl = self.config.cf_cache_ttl_hours

        if cached and cached["_age_hours"] < ttl:
            self.logger.info(
                f"Using cached Codeforces problem set ({cached['_age_hours']:.1f}h old, "
                f"TTL {ttl}h)."
            )
            problems = cached["problems"]
        else:
            try:
                problems = self._fetch_from_network()
                self._save_cache_to_disk(problems)
                self.logger.info(f"Fetched {len(problems)} problems from the Codeforces API.")
            except CodeforcesAPIError as exc:
                if cached:
                    self.logger.warning(
                        f"{exc}. Falling back to stale cache "
                        f"({cached['_age_hours']:.1f}h old)."
                    )
                    problems = cached["problems"]
                else:
                    raise

        self._lookup = {f"{p['contestId']}{p['index']}": p for p in problems}

    def get_problem(self, contest_id: int, index: str) -> Optional[dict[str, Any]]:
        """Returns the raw problem dict for a given contest ID + index, or None."""
        return self._lookup.get(f"{contest_id}{index}")


# =============================================================================
# Data model for a resolved problem
# =============================================================================
@dataclass
class ResolvedProblem:
    """A fully-identified Codeforces problem ready to be filed into the repo."""

    contest_id: int
    index: str
    name: str
    rating: Optional[int]
    url: str
    original_path: Path  # location of the file inside source_path (never modified)

    @property
    def key(self) -> str:
        return f"{self.contest_id}{self.index}"

    @property
    def clean_filename(self) -> str:
        return f"{sanitize_filename(f'{self.key} - {self.name}')}.cpp"

    def rating_folder(self, unrated_name: str) -> str:
        return str(self.rating) if self.rating is not None else unrated_name


def sanitize_filename(name: str) -> str:
    """Strips characters that are invalid in Windows/Unix filenames."""
    cleaned = re.sub(r'[<>:"/\\|?*]', "", name)
    cleaned = re.sub(r"\s+", " ", cleaned).strip()
    return cleaned


# =============================================================================
# CPH metadata extraction
# =============================================================================
class MetadataExtractor:
    """Extracts Codeforces problem metadata for loose .cpp files.

    Reads exclusively from ``source_path`` (the original Competitive
    Programming folder) and never writes to it. Primary source: the CPH
    (Competitive Programming Helper) ``.cph`` folder inside ``source_path``,
    which contains ``*.prob`` JSON files with a ``url`` field pointing at the
    original Codeforces problem. If no metadata can be found, the file is
    marked unresolved rather than guessed at.
    """

    URL_PATTERNS = (
        re.compile(r"codeforces\.com/contest/(\d+)/problem/(\w+)", re.IGNORECASE),
        re.compile(r"codeforces\.com/problemset/problem/(\d+)/(\w+)", re.IGNORECASE),
    )

    def __init__(self, source_path: Path, logger: logging.Logger):
        self.source_path = source_path
        self.cph_dir = source_path / ".cph"
        self.logger = logger
        self._cph_cache: Optional[list[dict[str, Any]]] = None

    def _load_cph_files(self) -> list[dict[str, Any]]:
        """Lazily loads and parses every JSON file inside the .cph directory."""
        if self._cph_cache is not None:
            return self._cph_cache

        parsed: list[dict[str, Any]] = []
        if not self.cph_dir.is_dir():
            self.logger.debug(".cph directory not found; CPH metadata lookup disabled.")
            self._cph_cache = parsed
            return parsed

        for f in self.cph_dir.iterdir():
            if not f.is_file():
                continue
            try:
                data = json.loads(f.read_text(encoding="utf-8"))
                data["_cph_file"] = str(f)
                parsed.append(data)
            except (json.JSONDecodeError, UnicodeDecodeError, OSError):
                continue  # not every file in .cph is necessarily a .prob JSON

        self._cph_cache = parsed
        return parsed

    def extract_url(self, cpp_path: Path) -> Optional[str]:
        """Finds the Codeforces problem URL associated with a given .cpp file."""
        for entry in self._load_cph_files():
            src_path = entry.get("srcPath")
            if src_path and Path(src_path).name == cpp_path.name:
                return entry.get("url")

        # Fallback: some CPH versions name the .prob file after the source file
        stem = cpp_path.name
        for entry in self._load_cph_files():
            cph_filename = Path(entry["_cph_file"]).name
            if stem in cph_filename:
                return entry.get("url")

        return None

    def parse_contest_and_index(self, url: str) -> Optional[tuple[int, str]]:
        for pattern in self.URL_PATTERNS:
            match = pattern.search(url)
            if match:
                return int(match.group(1)), match.group(2).upper()
        return None


# =============================================================================
# Git operations wrapper
# =============================================================================
class GitRepo:
    """Thin, defensive wrapper around the git CLI via subprocess."""

    def __init__(self, path: Path, config: Config, logger: logging.Logger):
        self.path = path
        self.config = config
        self.logger = logger

    def _run(self, args: list[str], check: bool = True) -> subprocess.CompletedProcess:
        cmd = ["git"] + args
        self.logger.debug(f"Running: {' '.join(cmd)}")
        try:
            result = subprocess.run(
                cmd, cwd=self.path, capture_output=True, text=True, timeout=120
            )
        except FileNotFoundError as exc:
            raise GitCommandError(
                "Git executable not found. Ensure Git is installed and on PATH."
            ) from exc
        except subprocess.TimeoutExpired as exc:
            raise GitCommandError(f"Git command timed out: {' '.join(cmd)}") from exc

        if check and result.returncode != 0:
            raise GitCommandError(
                f"Command failed: {' '.join(cmd)}\nSTDOUT: {result.stdout}\nSTDERR: {result.stderr}"
            )
        return result

    def is_repo(self) -> bool:
        result = self._run(["rev-parse", "--is-inside-work-tree"], check=False)
        return result.returncode == 0 and result.stdout.strip() == "true"

    def ensure_remote(self) -> None:
        result = self._run(["remote"], check=False)
        remotes = result.stdout.split()
        if self.config.git_remote_name not in remotes:
            self.logger.info(
                f"Remote '{self.config.git_remote_name}' not found; adding {self.config.git_remote_url}"
            )
            self._run(["remote", "add", self.config.git_remote_name, self.config.git_remote_url])

    def has_uncommitted_changes(self) -> bool:
        result = self._run(["status", "--porcelain"])
        return bool(result.stdout.strip())

    def current_branch(self) -> str:
        result = self._run(["rev-parse", "--abbrev-ref", "HEAD"], check=False)
        return result.stdout.strip()

    def ensure_branch(self) -> None:
        """Ensures the working tree is on the configured branch (e.g. 'main').

        Handles the common real-world mismatch where a fresh 'git init' (or an
        older Git version) defaults to 'master' while the remote repository
        uses 'main', without losing any existing commits.
        """
        target = self.config.git_branch
        current = self.current_branch()
        if current == target:
            return

        self.logger.info(f"Current branch is '{current}', switching to '{target}'.")
        result = self._run(["checkout", target], check=False)
        if result.returncode != 0:
            # Branch doesn't exist locally yet - create it from the current HEAD.
            self._run(["checkout", "-b", target])

    def pull(self) -> None:
        try:
            self._run(["pull", self.config.git_remote_name, self.config.git_branch, "--rebase"])
        except GitCommandError as exc:
            self.logger.warning(f"git pull failed (continuing anyway): {exc}")

    def add_all(self) -> None:
        self._run(["add", "-A"])

    def commit(self, message: str) -> Optional[str]:
        """Commits staged changes. Returns the new commit hash, or None if nothing to commit."""
        result = self._run(["commit", "-m", message], check=False)
        if result.returncode != 0:
            if "nothing to commit" in (result.stdout + result.stderr).lower():
                self.logger.info("Nothing to commit.")
                return None
            raise GitCommandError(f"git commit failed:\n{result.stdout}\n{result.stderr}")
        return self.rev_parse_head()

    def rev_parse_head(self) -> str:
        result = self._run(["rev-parse", "HEAD"])
        return result.stdout.strip()

    def push(self) -> None:
        last_exc: Optional[Exception] = None
        refspec = f"HEAD:{self.config.git_branch}"
        for attempt in range(1, self.config.git_push_retries + 1):
            try:
                self._run(["push", self.config.git_remote_name, refspec])
                self.logger.info("Push succeeded.")
                return
            except GitCommandError as exc:
                last_exc = exc
                wait = self.config.git_push_retry_backoff_seconds * attempt
                self.logger.warning(
                    f"git push attempt {attempt}/{self.config.git_push_retries} failed. "
                    f"Retrying in {wait:.1f}s... ({exc})"
                )
                time.sleep(wait)
        raise GitCommandError(f"git push failed after {self.config.git_push_retries} attempts: {last_exc}")


# =============================================================================
# Progress tracking (progress.json)
# =============================================================================
class ProgressStore:
    """Loads, validates, and persists progress.json."""

    DEFAULT_STATE = {
        "day_counter": 0,
        "total_uploaded": 0,
        "last_run": None,
        "last_commit_hash": None,
        "uploaded_problems": {},
        "pending_unresolved": {},
    }

    def __init__(self, path: Path, logger: logging.Logger):
        self.path = path
        self.logger = logger
        self.state: dict[str, Any] = {}
        self.load()

    def load(self) -> None:
        if not self.path.exists():
            self.logger.warning(f"{self.path.name} not found; creating a fresh one.")
            self.state = json.loads(json.dumps(self.DEFAULT_STATE))  # deep copy
            return
        try:
            self.state = json.loads(self.path.read_text(encoding="utf-8"))
            for key, default in self.DEFAULT_STATE.items():
                self.state.setdefault(key, default)
        except (json.JSONDecodeError, OSError) as exc:
            self.logger.error(
                f"progress.json is corrupt ({exc}). Backing it up and starting fresh "
                "to avoid data loss."
            )
            backup = self.path.with_suffix(".json.corrupt.bak")
            try:
                shutil.copy2(self.path, backup)
                self.logger.info(f"Corrupt progress.json backed up to {backup}")
            except OSError:
                pass
            self.state = json.loads(json.dumps(self.DEFAULT_STATE))

    def save(self) -> None:
        self.path.write_text(json.dumps(self.state, indent=2, ensure_ascii=False), encoding="utf-8")

    def is_uploaded(self, key: str) -> bool:
        return key in self.state["uploaded_problems"]

    def mark_uploaded(self, problem: ResolvedProblem, day: int, upload_date: str, filename: str, folder: str) -> None:
        self.state["uploaded_problems"][problem.key] = {
            "name": problem.name,
            "contest_id": problem.contest_id,
            "index": problem.index,
            "rating": problem.rating,
            "url": problem.url,
            "filename": filename,
            "folder": folder,
            "upload_date": upload_date,
            "day": day,
        }
        self.state["total_uploaded"] += 1

    def mark_unresolved(self, source_path: Path, reason: str) -> None:
        self.state["pending_unresolved"][str(source_path)] = {
            "reason": reason,
            "last_seen": datetime.now().isoformat(),
        }

    def bump_day(self) -> int:
        self.state["day_counter"] += 1
        return self.state["day_counter"]

    def set_last_run(self, commit_hash: Optional[str]) -> None:
        self.state["last_run"] = datetime.now().isoformat()
        if commit_hash:
            self.state["last_commit_hash"] = commit_hash


# =============================================================================
# README generation (marker-based, preserves manual content outside markers)
# =============================================================================
class ReadmeBuilder:
    START_MARKER = "<!-- AUTO-GENERATED:START -->"
    END_MARKER = "<!-- AUTO-GENERATED:END -->"

    def __init__(self, path: Path, config: Config, logger: logging.Logger):
        self.path = path
        self.config = config
        self.logger = logger

    def _render_dynamic_section(self, progress: ProgressStore) -> str:
        problems = progress.state["uploaded_problems"]
        total = progress.state["total_uploaded"]
        last_run = progress.state["last_run"] or "_never_"
        day = progress.state["day_counter"]

        lines = [
            self.START_MARKER,
            "## \U0001F4CA Statistics",
            "",
            f"**Total solutions uploaded:** {total}",
            f"**Last updated:** {last_run}",
            f"**Current day counter:** {day}",
            "",
        ]

        if not problems:
            lines += [
                "_No solutions have been uploaded yet. Run `auto_push.py` to get started._",
                "",
                "| # | Problem | Contest | Rating | Link |",
                "|---|---------|---------|--------|------|",
            ]
        else:
            # Rating breakdown
            rating_counts: dict[str, int] = {}
            for p in problems.values():
                r = str(p["rating"]) if p["rating"] is not None else self.config.unrated_folder_name
                rating_counts[r] = rating_counts.get(r, 0) + 1

            lines.append("**By rating:** " + ", ".join(
                f"{k} ({v})" for k, v in sorted(
                    rating_counts.items(),
                    key=lambda kv: (kv[0] == self.config.unrated_folder_name, int(kv[0]) if kv[0].isdigit() else 0)
                )
            ))
            lines.append("")
            lines.append("| # | Problem | Contest | Rating | Link |")
            lines.append("|---|---------|---------|--------|------|")

            sorted_problems = sorted(
                problems.values(),
                key=lambda p: (p["contest_id"], p["index"]),
                reverse=True,
            )
            for i, p in enumerate(sorted_problems, start=1):
                rating_display = p["rating"] if p["rating"] is not None else "Unrated"
                contest_display = f"{p['contest_id']}{p['index']}"
                lines.append(
                    f"| {i} | {p['name']} | {contest_display} | {rating_display} | [Link]({p['url']}) |"
                )

        lines.append(self.END_MARKER)
        return "\n".join(lines)

    def regenerate(self, progress: ProgressStore) -> None:
        dynamic_section = self._render_dynamic_section(progress)

        if self.path.exists():
            content = self.path.read_text(encoding="utf-8")
            if self.START_MARKER in content and self.END_MARKER in content:
                pattern = re.compile(
                    re.escape(self.START_MARKER) + r".*?" + re.escape(self.END_MARKER),
                    re.DOTALL,
                )
                new_content = pattern.sub(dynamic_section, content)
            else:
                new_content = content.rstrip() + "\n\n" + dynamic_section + "\n"
        else:
            new_content = (
                "# Codeforces Solutions Archive\n\n" + dynamic_section + "\n"
            )

        self.path.write_text(new_content, encoding="utf-8")
        self.logger.info("README.md regenerated.")

# =============================================================================
# Stats badge generator (animated SVG showing live total problems pushed)
# =============================================================================
class StatsBadgeGenerator:
    """Regenerates assets/stats-badge.svg from assets/stats-badge.template.svg,
    substituting the current total_uploaded count on every run."""

    def __init__(self, repo_path: Path, logger: logging.Logger,
                 template_name: str = "stats-badge.template.svg",
                 output_name: str = "stats-badge.svg"):
        self.template_path = repo_path / "assets" / template_name
        self.output_path = repo_path / "assets" / output_name
        self.logger = logger

    def regenerate(self, progress: "ProgressStore") -> None:
        if not self.template_path.exists():
            self.logger.warning(
                f"Badge template not found at {self.template_path}; skipping badge regeneration."
            )
            return
        total = progress.state["total_uploaded"]
        template = self.template_path.read_text(encoding="utf-8")
        svg = template.replace("{{TOTAL}}", str(total))
        self.output_path.parent.mkdir(parents=True, exist_ok=True)
        self.output_path.write_text(svg, encoding="utf-8")
        self.logger.info(f"stats-badge.svg regenerated -> {total}+ problems")
# =============================================================================
# Upload log writer (append-only audit trail)
# =============================================================================
class UploadLogWriter:
    def __init__(self, path: Path):
        self.path = path

    def append(self, day: int, filenames: list[str], commit_hash: Optional[str], status: str) -> None:
        timestamp = datetime.now().strftime("%Y-%m-%d %H:%M:%S")
        commit_display = commit_hash if commit_hash else "N/A"
        files_display = ", ".join(filenames) if filenames else "(none)"
        line = f"[{timestamp}] | DAY {day} | {status} | COMMIT {commit_display} | FILES: {files_display}\n"
        with self.path.open("a", encoding="utf-8") as fh:
            fh.write(line)


# =============================================================================
# Main orchestrator
# =============================================================================
class AutoPushOrchestrator:
    """Coordinates the full daily run: scan -> resolve -> select -> file -> commit -> push."""

    def __init__(self, config: Config, logger: logging.Logger, dry_run: bool = False):
        self.config = config
        self.logger = logger
        self.dry_run = dry_run or config.dry_run

        self.repo_path = config.repository_path      # GitHub archive repo (written to)
        self.source_path = config.source_path        # Original CP folder (read-only)
        self.git = GitRepo(self.repo_path, config, logger)
        self.extractor = MetadataExtractor(self.source_path, logger)
        self.cf_client = CodeforcesAPIClient(config, logger)
        self.progress = ProgressStore(self.repo_path / config.progress_file, logger)
        self.upload_log = UploadLogWriter(self.repo_path / config.upload_log_file)
        self.readme = ReadmeBuilder(self.repo_path / config.readme_file, config, logger)
        self.solved_button = StatsBadgeGenerator(
            self.repo_path, logger,
            template_name="solved-button.template.svg",
            output_name="solved-button.svg",
        )

        self.summary: dict[str, Any] = {
            "started_at": datetime.now(),
            "resolved": 0,
            "unresolved": 0,
            "uploaded": [],
            "errors": [],
            "commit_hash": None,
            "status": "NOT_RUN",
        }

    # ------------------------------------------------------------------ #
    # Setup / preflight
    # ------------------------------------------------------------------ #
    def _preflight(self) -> None:
        if not self.source_path.exists():
            raise AutomationError(
                f"Source path does not exist: {self.source_path}. "
                "This should point at your original Competitive Programming folder."
            )
        if not self.source_path.is_dir():
            raise AutomationError(f"Source path is not a directory: {self.source_path}")

        if not self.repo_path.exists():
            raise AutomationError(
                f"Repository path does not exist: {self.repo_path}. "
                "Create it / clone the repo there first."
            )
        if not self.git.is_repo():
            raise AutomationError(
                f"'{self.repo_path}' is not a git repository. "
                f"Run 'git clone {self.config.git_remote_url}' there first, or 'git init' + set remote."
            )
        self.git.ensure_remote()
        self.git.ensure_branch()

        # Self-healing: if a previous run moved files but crashed before pushing,
        # there will be uncommitted changes sitting in the working tree. Commit
        # and push them now before doing anything else, so we never lose work
        # or silently duplicate it.
        if self.git.has_uncommitted_changes():
            self.logger.warning(
                "Uncommitted changes detected from a previous run. Attempting to "
                "recover by committing and pushing them first."
            )
            if not self.dry_run:
                self.git.add_all()
                day = self.progress.state["day_counter"] or 1
                commit_hash = self.git.commit(f"Recover pending Codeforces solutions (Day {day})")
                if commit_hash:
                    self.git.push()
                    self.logger.info(f"Recovered previous run's changes in commit {commit_hash}.")
            else:
                self.logger.info("[DRY RUN] Would commit and push recovered changes.")

        if self.config.git_pull_before_run and not self.dry_run:
            self.git.pull()

    # ------------------------------------------------------------------ #
    # Scanning + resolution
    # ------------------------------------------------------------------ #
    def _find_candidate_files(self) -> list[Path]:
        """Top-level *.cpp files in source_path only (read-only scan).

        Note: this scans source_path, NOT repository_path. Files here are
        never modified as a result of scanning - only read, and later
        copied (never moved) elsewhere by _file_problem().
        """
        candidates = [
            f for f in self.source_path.glob("*.cpp")
            if f.is_file() and f.parent.name not in self.config.ignore_dirs
        ]
        self.logger.info(f"Found {len(candidates)} .cpp file(s) in source_path.")
        return candidates

    def _resolve_candidates(self, files: list[Path]) -> list[ResolvedProblem]:
        resolved: list[ResolvedProblem] = []
        iterator = tqdm(files, desc="Resolving metadata", unit="file") if _TQDM_AVAILABLE else files

        for cpp_path in iterator:
            try:
                url = self.extractor.extract_url(cpp_path)
                if not url:
                    self.logger.warning(f"No CPH metadata found for '{cpp_path.name}'; skipping.")
                    self.progress.mark_unresolved(cpp_path, "no CPH metadata found")
                    self.summary["unresolved"] += 1
                    continue

                parsed = self.extractor.parse_contest_and_index(url)
                if not parsed:
                    self.logger.warning(f"Could not parse contest/index from URL '{url}' for '{cpp_path.name}'.")
                    self.progress.mark_unresolved(cpp_path, f"unparseable URL: {url}")
                    self.summary["unresolved"] += 1
                    continue

                contest_id, index = parsed
                key = f"{contest_id}{index}"
                if self.progress.is_uploaded(key):
                    self.logger.info(f"'{cpp_path.name}' -> {key} already uploaded previously; skipping duplicate.")
                    continue

                cf_problem = self.cf_client.get_problem(contest_id, index)
                if not cf_problem:
                    self.logger.warning(f"Codeforces API has no record of problem {key}; skipping for now.")
                    self.progress.mark_unresolved(cpp_path, f"problem {key} not found in Codeforces API")
                    self.summary["unresolved"] += 1
                    continue

                resolved.append(ResolvedProblem(
                    contest_id=contest_id,
                    index=index,
                    name=cf_problem.get("name", f"Problem {index}"),
                    rating=cf_problem.get("rating"),
                    url=url,
                    original_path=cpp_path,
                ))
                self.summary["resolved"] += 1

            except Exception as exc:  # noqa: BLE001 - one bad file must not kill the whole run
                self.logger.error(f"Error resolving '{cpp_path.name}': {exc}")
                self.progress.mark_unresolved(cpp_path, f"unexpected error: {exc}")
                self.summary["errors"].append(str(exc))

        return resolved

    # ------------------------------------------------------------------ #
    # Filing (copy + rename) selected problems into the repo structure.
    # IMPORTANT: this only ever COPIES from source_path into repository_path.
    # The original file inside source_path is never modified, renamed,
    # moved, or deleted.
    # ------------------------------------------------------------------ #
    def _file_problem(self, problem: ResolvedProblem) -> tuple[str, str]:
        """Copies the raw .cpp file from source_path into repository_path,
        renamed and organized into its rating folder.

        The original file at ``problem.original_path`` (inside source_path)
        is left completely untouched - only a renamed copy is created inside
        repository_path.

        Returns (relative_target_path, folder_name).
        """
        folder_name = problem.rating_folder(self.config.unrated_folder_name)
        target_dir = self.repo_path / folder_name
        target_path = target_dir / problem.clean_filename

        if self.dry_run:
            self.logger.info(
                f"[DRY RUN] Would copy '{problem.original_path}' -> '{target_path}' "
                "(source file would remain untouched)"
            )
            return str(target_path.relative_to(self.repo_path)), folder_name

        target_dir.mkdir(parents=True, exist_ok=True)

        if target_path.exists():
            self.logger.warning(f"Target already exists, overwriting: {target_path}")

        # shutil.copy2 preserves metadata (timestamps) and, crucially, never
        # touches the original file in source_path.
        shutil.copy2(str(problem.original_path), str(target_path))
        self.logger.info(
            f"Copied '{problem.original_path}' -> '{target_path.relative_to(self.repo_path)}' "
            "(original left untouched in source_path)"
        )
        return str(target_path.relative_to(self.repo_path)), folder_name

    # ------------------------------------------------------------------ #
    # Main run
    # ------------------------------------------------------------------ #
    def run(self) -> dict[str, Any]:
        try:
            self._preflight()
            self.cf_client.load()

            candidates = self._find_candidate_files()
            if not candidates:
                print("No files remaining.")
                self.summary["status"] = "NO_FILES"
                return self.summary

            resolved = self._resolve_candidates(candidates)
            if not resolved:
                print("No files remaining.")
                self.summary["status"] = "NO_FILES"
                self.progress.save()
                return self.summary

            selected = resolved[: self.config.daily_upload_count]
            self.logger.info(f"Selected {len(selected)} problem(s) for today's upload.")

            day = self.progress.state["day_counter"] + 1
            today_str = datetime.now().strftime(self.config.date_format)
            filed_filenames: list[str] = []

            for problem in selected:
                rel_path, folder_name = self._file_problem(problem)
                if not self.dry_run:
                    self.progress.mark_uploaded(problem, day, today_str, rel_path, folder_name)
                filed_filenames.append(rel_path)
                self.summary["uploaded"].append({
                    "key": problem.key,
                    "name": problem.name,
                    "rating": problem.rating,
                    "path": rel_path,
                })

            if self.dry_run:
                self.logger.info("[DRY RUN] Skipping progress.json save, README regen, git commit/push.")
                self.summary["status"] = "DRY_RUN_OK"
                return self.summary

            self.progress.bump_day()
            self.readme.regenerate(self.progress)
            self.solved_button.regenerate(self.progress)

            self.git.add_all()
            commit_message = f"Add Codeforces solutions (Day {day})"
            commit_hash = self.git.commit(commit_message)

            if commit_hash:
                self.git.push()
                self.progress.set_last_run(commit_hash)
                self.upload_log.append(day, filed_filenames, commit_hash, "SUCCESS")
                self.summary["commit_hash"] = commit_hash
                self.summary["status"] = "SUCCESS"
            else:
                self.progress.set_last_run(None)
                self.upload_log.append(day, filed_filenames, None, "NOTHING_TO_COMMIT")
                self.summary["status"] = "NOTHING_TO_COMMIT"

            self.progress.save()
            return self.summary

        except AutomationError as exc:
            self.logger.error(f"Run aborted: {exc}")
            self.summary["status"] = "FAILED"
            self.summary["errors"].append(str(exc))
            try:
                self.upload_log.append(
                    self.progress.state.get("day_counter", 0) + 1, [], None, f"FAILED: {exc}"
                )
            except Exception:  # noqa: BLE001 - logging the failure must never itself crash
                pass
            return self.summary
        except Exception as exc:  # noqa: BLE001 - top-level safety net
            self.logger.critical(f"Unexpected error: {exc}\n{traceback.format_exc()}")
            self.summary["status"] = "CRASHED"
            self.summary["errors"].append(str(exc))
            return self.summary


# =============================================================================
# Execution summary printer
# =============================================================================
def print_summary(summary: dict[str, Any], logger: logging.Logger) -> None:
    duration = (datetime.now() - summary["started_at"]).total_seconds()
    color = Fore.GREEN if _COLORAMA_AVAILABLE else ""
    reset = Style.RESET_ALL if _COLORAMA_AVAILABLE else ""

    lines = [
        "",
        "=" * 60,
        f"{color}EXECUTION SUMMARY{reset}",
        "=" * 60,
        f"Status:              {summary['status']}",
        f"Duration:             {duration:.2f}s",
        f"Files resolved:       {summary['resolved']}",
        f"Files unresolved:     {summary['unresolved']}",
        f"Files uploaded today: {len(summary['uploaded'])}",
    ]
    for item in summary["uploaded"]:
        lines.append(f"  - {item['key']}: {item['name']} (rating: {item['rating']}) -> {item['path']}")
    if summary["commit_hash"]:
        lines.append(f"Commit hash:          {summary['commit_hash']}")
    if summary["errors"]:
        lines.append(f"Errors encountered:   {len(summary['errors'])}")
        for err in summary["errors"]:
            lines.append(f"  - {err}")
    lines.append("=" * 60)

    text = "\n".join(lines)
    print(text)
    logger.info("Execution summary printed above.")


# =============================================================================
# CLI entry point
# =============================================================================
def parse_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(
        description="Automatically curate a Codeforces solutions archive on GitHub."
    )
    parser.add_argument(
        "--config", type=Path, default=DEFAULT_CONFIG_PATH,
        help="Path to config.json (default: ./config.json next to this script)."
    )
    parser.add_argument(
        "--dry-run", action="store_true",
        help="Preview actions without modifying files, progress.json, or git."
    )
    parser.add_argument(
        "--daily-count", type=int, default=None,
        help="Override the number of solutions to upload today (default: from config.json)."
    )
    return parser.parse_args()


def main() -> int:
    args = parse_args()

    try:
        config = Config.load(args.config)
    except ConfigError as exc:
        print(f"CONFIGURATION ERROR: {exc}", file=sys.stderr)
        return 1

    if args.daily_count is not None:
        config.daily_upload_count = args.daily_count

    log_file_path = config.repository_path / config.log_file
    logger = setup_logging(log_file_path, config.log_level, config.console_colors)

    logger.info("=" * 60)
    logger.info("Starting Codeforces auto-push run")
    logger.info(f"Source path (read-only):  {config.source_path}")
    logger.info(f"Repository path (writable): {config.repository_path}")
    logger.info(f"Dry run: {args.dry_run or config.dry_run}")
    logger.info("=" * 60)

    orchestrator = AutoPushOrchestrator(config, logger, dry_run=args.dry_run)

    try:
        summary = orchestrator.run()
    except KeyboardInterrupt:
        logger.warning("Interrupted by user (Ctrl+C). Exiting gracefully without corrupting state.")
        print("\nInterrupted. No partial state was corrupted; re-run the script to resume.")
        return 130

    print_summary(summary, logger)
    return 0 if summary["status"] in ("SUCCESS", "NO_FILES", "NOTHING_TO_COMMIT", "DRY_RUN_OK") else 1


if __name__ == "__main__":
    sys.exit(main())
