# Codeforces Solutions Archive

An automatically curated, self-organizing archive of my Codeforces solutions.
[![Solved](assets/solved-button.svg)](https://codeforces.com/profile/chahat)

Every day, `auto_push.py` scans my local competitive-programming folder, identifies
newly solved problems (via CPH metadata + the Codeforces API), renames and files
them into rating-based folders, and pushes exactly a fixed number of new solutions
to this repository — fully unattended.

> ⚠️ Everything between the `AUTO-GENERATED` markers below is rewritten by the
> script on every run. Do not edit that section by hand — edits will be
> overwritten on the next push. Everything above/outside those markers is safe
> to edit freely.

---

## How this repo is organized

```
codeforces_mine/
├── 800/
│   ├── 1857A - Array Coloring.cpp
│   └── ...
├── 900/
│   └── ...
├── 1000/
│   └── ...
├── Unrated/
│   └── ...
├── progress.json        # automation state (never edit manually)
├── upload_log.txt        # append-only history of every push
├── auto_push.py          # the automation script
├── config.json           # configuration for the automation
└── README.md             # this file
```

Files are named `{contestId}{index} - {Problem Name}.cpp`, e.g.
`1857A - Array Coloring.cpp`, and sorted into a folder named after the
problem's Codeforces rating (or `Unrated/` if the problem has no rating).

---

<!-- AUTO-GENERATED:START -->

## 📊 Statistics

**Total solutions uploaded:** 32
**Last updated:** 2026-07-12T22:43:14.810156
**Current day counter:** 7

**By rating:** 800 (14), 900 (3), 1000 (6), 1100 (2), 1200 (1), 1300 (1), 1400 (2), 1500 (1), 1600 (1), 1700 (1)

| #   | Problem                         | Contest | Rating | Link                                                     |
| --- | ------------------------------- | ------- | ------ | -------------------------------------------------------- |
| 1   | Bigrams                         | 2242A   | 800    | [Link](https://codeforces.com/contest/2242/problem/A)    |
| 2   | Another Popcount Problem        | 2240A   | 800    | [Link](https://codeforces.com/contest/2240/problem/A)    |
| 3   | Another Puzzle from Papyrus     | 2238A   | 800    | [Link](https://codeforces.com/contest/2238/problem/A)    |
| 4   | A Number Between Two Others     | 2225A   | 800    | [Link](https://codeforces.com/contest/2225/problem/A)    |
| 5   | A Wonderful Contest             | 2222A   | 800    | [Link](https://codeforces.com/contest/2222/problem/A)    |
| 6   | Blocked                         | 2220A   | 800    | [Link](https://codeforces.com/contest/2220/problem/A)    |
| 7   | A Simple Sequence               | 2210A   | 800    | [Link](https://codeforces.com/contest/2210/problem/A)    |
| 8   | 1-1                             | 2207A   | 800    | [Link](https://codeforces.com/problemset/problem/2207/A) |
| 9   | Array Coloring                  | 2191A   | 800    | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 10  | Beautiful Average               | 2162A   | 800    | [Link](https://codeforces.com/contest/2162/problem/A)    |
| 11  | Be Positive                     | 2149A   | 800    | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 12  | All Lengths Subtraction         | 2143A   | 800    | [Link](https://codeforces.com/contest/2143/problem/A)    |
| 13  | Adjacent Digit Sums             | 2067A   | 800    | [Link](https://codeforces.com/contest/2067/problem/A)    |
| 14  | Bonus Project                   | 2038A   | 1400   | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 15  | Alice's Adventures in ''Chess'' | 2028A   | 900    | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 16  | 2023                            | 1916A   | 800    | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 17  | Bestie                          | 1732A   | 1000   | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 18  | AB Balance                      | 1606A   | 900    | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 19  | Add and Divide                  | 1485A   | 1000   | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 20  | Buying Torches                  | 1418A   | 1000   | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 21  | Anastasia and pebbles           | 789A    | 1100   | [Link](https://codeforces.com/problemset/problem/789/A)  |
| 22  | Bear and Poker                  | 573A    | 1300   | [Link](https://codeforces.com/contest/573/problem/A)     |
| 23  | Amr and Music                   | 507A    | 1000   | [Link](https://codeforces.com/contest/507/problem/A)     |
| 24  | Bits                            | 484A    | 1700   | [Link](https://codeforces.com/problemset/problem/484/A)  |
| 25  | Boredom                         | 455A    | 1500   | [Link](https://codeforces.com/problemset/problem/455/a)  |
| 26  | Alice and Bob                   | 346A    | 1600   | [Link](https://codeforces.com/problemset/problem/346/A)  |
| 27  | Candy Bags                      | 334A    | 1000   | [Link](https://codeforces.com/problemset/problem/334/A)  |
| 28  | Adding Digits                   | 260A    | 1400   | [Link](https://codeforces.com/problemset/problem/260/A)  |
| 29  | Cards with Numbers              | 254A    | 1200   | [Link](https://codeforces.com/problemset/problem/254/A)  |
| 30  | Boys and Girls                  | 253A    | 1100   | [Link](https://codeforces.com/contest/253/problem/A)     |
| 31  | Bar                             | 56A     | 1000   | [Link](https://codeforces.com/problemset/problem/56/A)   |
| 32  | Almost Prime                    | 26A     | 900    | [Link](https://codeforces.com/contest/26/problem/A)      |

<!-- AUTO-GENERATED:END -->

---

## Setup & Automation

See [`SETUP_INSTRUCTIONS.md`](SETUP_INSTRUCTIONS.md) for:

- Installing dependencies
- Configuring `config.json`
- Running the script manually / in dry-run mode
- Scheduling it to run automatically every day at **10:00 PM** via
  **Windows Task Scheduler** (recommended) or the Python `schedule` library
  (optional alternative)

---

## Disclaimer

Solutions in this repository were written by me for personal practice on
[Codeforces](https://codeforces.com). They are organized here purely as a
personal reference archive.
