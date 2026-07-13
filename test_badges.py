"""
test_badges.py
================================================================================
Standalone helper to test/regenerate ONLY the solved-count button SVG, without
running the full auto_push.py pipeline. It does NOT scan for new problems,
does NOT touch git, and does NOT push anything. It just reads your existing
progress.json and rewrites assets/solved-button.svg from it.

Usage:
    python test_badges.py

Run this from the same folder as auto_push.py (it imports classes from it).
"""

import logging
import sys

from auto_push import ProgressStore, StatsBadgeGenerator, Config, DEFAULT_CONFIG_PATH


def main() -> int:
    logger = logging.getLogger("test_badges")
    logger.setLevel(logging.INFO)
    handler = logging.StreamHandler(sys.stdout)
    handler.setFormatter(logging.Formatter("%(levelname)-8s | %(message)s"))
    logger.addHandler(handler)

    config = Config.load(DEFAULT_CONFIG_PATH)
    progress = ProgressStore(config.repository_path / config.progress_file, logger)

    logger.info(f"Current total_uploaded in progress.json: {progress.state['total_uploaded']}")

    solved_button = StatsBadgeGenerator(
        config.repository_path, logger,
        template_name="solved-button.template.svg",
        output_name="solved-button.svg",
    )
    solved_button.regenerate(progress)

    logger.info("Done. Check assets/solved-button.svg")
    logger.info("Nothing was committed or pushed — this script only touched that one file.")
    return 0


if __name__ == "__main__":
    sys.exit(main())
