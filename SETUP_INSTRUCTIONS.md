# Setup Instructions

## 1. Prerequisites

This automation uses **two separate folders** — keep them distinct:

| Folder | Path (example) | Role |
|---|---|---|
| `source_path` | `C:\Users\chaha\Desktop\Codeforces_problem_mine` | Your original Competitive Programming folder (hundreds of hashed `.cpp` files + `.cph` metadata). **Read-only** to the script — never modified, renamed, moved, or deleted. |
| `repository_path` | `C:\Users\chaha\Desktop\codeforces_mine` | A separate local clone of your GitHub archive repo. The script writes clean, renamed copies here, and this is the only folder where git commits/pushes happen. |

- **Python 3.12.8** installed on Windows (confirm with `python --version`).
- **Git** installed and on `PATH` (confirm with `git --version`).
- `source_path` already exists as-is — no changes needed to it. Keep using it
  exactly as Competitive Companion / CPH already do.
- Clone your GitHub archive repo into a **separate** folder for
  `repository_path`:

  ```powershell
  cd C:\Users\chaha\Desktop
  git clone https://github.com/UP-Aditya/codeforces_mine.git codeforces_mine
  cd codeforces_mine
  git checkout main
  ```

  > If the repo is brand new and empty, `git init`, `git remote add origin
  > <url>`, then commit/push once manually so `main` exists on GitHub
  > before the automation runs.

- Competitive Companion / CPH configured in VS Code so every parsed problem
  writes its metadata into the `.cph` folder inside `source_path` (this is
  the default behavior — no change needed there either).

## 2. Install the automation

1. Copy these files into the root of **`repository_path`**
   (`C:\Users\chaha\Desktop\codeforces_mine`) — **not** into `source_path`:
   `auto_push.py`, `config.json`, `progress.json`, `requirements.txt`,
   `README.md`, `.gitignore`, `upload_log.txt`, `run_scheduler.py` (optional),
   `SETUP_INSTRUCTIONS.md`.

   The script itself, its config, and all its state files (`progress.json`,
   `upload_log.txt`, `README.md`, logs) live and get committed inside the
   GitHub repo folder. Your original `source_path` folder never receives any
   new files from this project.

2. Install dependencies:

   ```powershell
   cd C:\Users\chaha\Desktop\codeforces_mine
   pip install -r requirements.txt
   ```

3. Open `config.json` and confirm both paths match your machine:
   - `source_path` → `C:\Users\chaha\Desktop\Codeforces_problem_mine`
     (your original CP folder, read-only)
   - `repository_path` → `C:\Users\chaha\Desktop\codeforces_mine`
     (the git repo, written to)

   Adjust `daily_upload_count`, `cf_cache_ttl_hours`, etc. if desired.

## 3. Test it safely first (dry run)

Dry-run mode previews everything — which files would be identified, renamed,
and moved — **without** touching git, `progress.json`, or `README.md`:

```powershell
python auto_push.py --dry-run
```

Review the console output. Once you're happy, run it for real:

```powershell
python auto_push.py
```

Check that:
- Exactly `daily_upload_count` new files were moved into rating folders.
- `progress.json`, `upload_log.txt`, and `README.md` were updated.
- The commit `Add Codeforces solutions (Day 1)` appears on GitHub.

## 4. Automate it: Windows Task Scheduler (recommended)

This runs the script every day at **10:00 PM**, even if you're logged out,
survives reboots, and needs no terminal window open.

### Option A — GUI

1. Press `Win + R`, type `taskschd.msc`, press Enter.
2. In the right-hand panel, click **Create Task...** (not "Basic Task", so we
   get full control).
3. **General tab:**
   - Name: `Codeforces Auto Push`
   - Select **"Run whether user is logged on or not"**.
   - Check **"Run with highest privileges"** (optional, not usually required).
4. **Triggers tab → New:**
   - Begin the task: **On a schedule**
   - Settings: **Daily**, Start: **10:00:00 PM**, Recur every **1 day**.
   - Click OK.
5. **Actions tab → New:**
   - Action: **Start a program**
   - Program/script:
     ```
     C:\Path\To\python.exe
     ```
     (find yours with `where python` in PowerShell)
   - Add arguments:
     ```
     auto_push.py
     ```
   - Start in (**this is critical** — sets the working directory; use the
     **repository** folder, not the source folder):
     ```
     C:\Users\chaha\Desktop\codeforces_mine
     ```
   - Click OK.
6. **Conditions tab:** uncheck "Start the task only if the computer is on AC
   power" if you're on a laptop and want it to run on battery too.
7. **Settings tab:** check **"Run task as soon as possible after a scheduled
   start is missed"** so a missed day (PC was off at 10 PM) still catches up
   when you next log in.
8. Click **OK**, enter your Windows password if prompted.

### Option B — Command line (PowerShell, run as Administrator)

```powershell
$pythonPath = (Get-Command python).Source
$workDir    = "C:\Users\chaha\Desktop\codeforces_mine"   # repository_path, not source_path

schtasks /Create /TN "Codeforces Auto Push" `
  /TR "`"$pythonPath`" `"$workDir\auto_push.py`"" `
  /SC DAILY /ST 22:00 `
  /RL HIGHEST `
  /IT /RU "$env:USERNAME"
```

> `/IT` runs interactively; drop it and use `/RU "SYSTEM"` if you want it to
> run silently in the background without needing you logged in at all
> (requires `/RP` for a password, or configure via the GUI instead, which is
> simpler for per-user scheduled tasks that need Git credentials).

### Verifying it worked

- Open Task Scheduler → find "Codeforces Auto Push" → right-click → **Run**
  to trigger it manually and confirm it works before waiting for 10 PM.
- Check `logs\auto_push.log` inside the repo folder afterward.
- Check `upload_log.txt` for a new entry.

### Git credentials note

Scheduled tasks run in a non-interactive session, so make sure Git can push
without a password prompt:
- Use a **Personal Access Token** stored via `git credential-manager`
  (Windows' built-in Git Credential Manager handles this automatically after
  one manual `git push` where you log in once), **or**
- Switch the remote to SSH with a passphrase-less key added to `ssh-agent`.

## 5. Alternative: the Python `schedule` library (optional)

If you'd rather not use Task Scheduler (e.g. you're testing on WSL/Linux/macOS,
or want a portable solution), run:

```bash
pip install schedule
python run_scheduler.py
```

This keeps a foreground/background Python process alive and triggers
`auto_push.py` every day at 22:00. You are responsible for keeping this
process running (e.g. via `tmux`, `screen`, `nohup`, or a system service) —
unlike Task Scheduler, it does **not** survive a reboot or logout on its own.

## 6. What happens on each run, in short

1. Recovers any uncommitted work from a previous failed run in
   `repository_path` (self-healing).
2. Pulls the latest `main` from GitHub, into `repository_path`.
3. Scans `source_path` (read-only) for loose `.cpp` files.
4. Identifies each one's Codeforces problem via `source_path/.cph` metadata +
   the Codeforces API (cached, retried automatically on failure).
5. Picks up to `daily_upload_count` never-before-uploaded problems.
6. **Copies** them (originals in `source_path` are left untouched) into
   `repository_path/{rating}/`, renamed to the clean format.
7. Updates `progress.json`, `upload_log.txt`, and `README.md` inside
   `repository_path`.
8. Commits as `Add Codeforces solutions (Day N)` and pushes `repository_path`
   to `main`.
9. Prints a full execution summary.

If there is nothing new to upload, it prints `No files remaining.` and exits
cleanly — safe to run as often as you like.
