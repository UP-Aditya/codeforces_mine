#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
run_scheduler.py
================================================================================
OPTIONAL alternative to Windows Task Scheduler.

This keeps a Python process alive in the background and invokes
``auto_push.py`` every day at 22:00 (10:00 PM) using the ``schedule``
library. Windows Task Scheduler (see SETUP_INSTRUCTIONS.md) is the
recommended approach for a "set it and forget it" experience, because it
survives reboots and does not require you to keep a terminal window open.

Use this script instead if you prefer a lightweight, cross-platform,
always-on process (e.g. running inside a persistent VM, WSL session, or
a `tmux`/`screen` session).

Usage:
    python run_scheduler.py

Requires: pip install schedule  (see requirements.txt)
"""

from __future__ import annotations

import subprocess
import sys
import time
from datetime import datetime
from pathlib import Path

try:
    import schedule
except ImportError:
    print("ERROR: The 'schedule' package is required. Run: pip install schedule")
    sys.exit(1)

SCRIPT_DIR = Path(__file__).resolve().parent
AUTO_PUSH_SCRIPT = SCRIPT_DIR / "auto_push.py"
RUN_TIME = "22:00"  # 10:00 PM, 24-hour format, local machine time


def job() -> None:
    """Invokes auto_push.py as a subprocess and streams its output live."""
    print(f"\n[{datetime.now().isoformat()}] Triggering scheduled run of auto_push.py ...")
    try:
        result = subprocess.run(
            [sys.executable, str(AUTO_PUSH_SCRIPT)],
            cwd=SCRIPT_DIR,
        )
        if result.returncode != 0:
            print(f"[{datetime.now().isoformat()}] auto_push.py exited with code {result.returncode}.")
    except Exception as exc:  # noqa: BLE001 - the scheduler loop must never die
        print(f"[{datetime.now().isoformat()}] Failed to launch auto_push.py: {exc}")


def main() -> None:
    schedule.every().day.at(RUN_TIME).do(job)
    print(f"Scheduler started. auto_push.py will run daily at {RUN_TIME}.")
    print("Leave this process running (e.g. inside tmux/screen, or as a service). Press Ctrl+C to stop.")

    try:
        while True:
            schedule.run_pending()
            time.sleep(30)
    except KeyboardInterrupt:
        print("\nScheduler stopped by user.")


if __name__ == "__main__":
    main()
