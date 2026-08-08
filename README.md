<h1>
  Codeforces Solutions Archive
  <a href="https://codeforces.com/profile/chahat">
    <img src="assets/solved-button.svg" align="right" height="56"/>
  </a>
</h1>

An automatically curated, self-organizing archive of my Codeforces solutions.

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

**Total solutions uploaded:** 162
**Last updated:** 2026-08-07T22:00:34.067035
**Current day counter:** 33

**By rating:** 800 (90), 900 (16), 1000 (21), 1100 (6), 1200 (7), 1300 (7), 1400 (6), 1500 (2), 1600 (4), 1700 (2), Unrated (1)

| # | Problem | Contest | Rating | Link |
|---|---------|---------|--------|------|
| 1 | Bigrams | 2242A | 800 | [Link](https://codeforces.com/contest/2242/problem/A) |
| 2 | Divide and Conquer | 2241A | 800 | [Link](https://codeforces.com/contest/2241/problem/A) |
| 3 | Another Popcount Problem | 2240A | 800 | [Link](https://codeforces.com/contest/2240/problem/A) |
| 4 | Another Puzzle from Papyrus | 2238A | 800 | [Link](https://codeforces.com/contest/2238/problem/A) |
| 5 | Destroying Towers | 2237A | 800 | [Link](https://codeforces.com/contest/2237/problem/A) |
| 6 | Games on the Train | 2236A | 800 | [Link](https://codeforces.com/contest/2236/problem/A) |
| 7 | Euclid, Sequence and Two Numbers | 2234A | 800 | [Link](https://codeforces.com/contest/2234/problem/A) |
| 8 | Convergence | 2232A | 800 | [Link](https://codeforces.com/contest/2232/problem/A) |
| 9 | Construct an Array | 2231A | 800 | [Link](https://codeforces.com/contest/2231/problem/A) |
| 10 | Koshary | 2227A | 800 | [Link](https://codeforces.com/contest/2227/problem/A) |
| 11 | Disturbing Distribution | 2226A | 800 | [Link](https://codeforces.com/contest/2226/problem/A) |
| 12 | A Number Between Two Others | 2225A | 800 | [Link](https://codeforces.com/contest/2225/problem/A) |
| 13 | A Wonderful Contest | 2222A | 800 | [Link](https://codeforces.com/contest/2222/problem/A) |
| 14 | Blocked | 2220A | 800 | [Link](https://codeforces.com/contest/2220/problem/A) |
| 15 | Course Wishes | 2216A | 900 | [Link](https://codeforces.com/contest/2216/problem/A) |
| 16 | Odd One Out | 2214A | Unrated | [Link](https://codeforces.com/contest/2214/problem/A) |
| 17 | A Simple Sequence | 2210A | 800 | [Link](https://codeforces.com/contest/2210/problem/A) |
| 18 | 1-1 | 2207A | 800 | [Link](https://codeforces.com/problemset/problem/2207/A) |
| 19 | Passing the Ball | 2204A | 800 | [Link](https://codeforces.com/contest/2204/problem/A) |
| 20 | Parkour Design | 2202A | 800 | [Link](https://codeforces.com/contest/2202/problem/A) |
| 21 | Eating Game | 2200A | 800 | [Link](https://codeforces.com/contest/2200/problem/A) |
| 22 | Friendly Numbers | 2197A | 800 | [Link](https://codeforces.com/contest/2197/problem/A) |
| 23 | Sieve of Erato67henes | 2195A | 800 | [Link](https://codeforces.com/contest/2195/problem/A) |
| 24 | Lawn Mower | 2194A | 800 | [Link](https://codeforces.com/contest/2194/problem/A) |
| 25 | DBMB and the Array | 2193A | 800 | [Link](https://codeforces.com/contest/2193/problem/A) |
| 26 | Array Coloring | 2191A | 800 | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 27 | Sorting Game | 2190A | 1200 | [Link](https://codeforces.com/problemset/problem/2190/A) |
| 28 | Perfect Root | 2185A | 800 | [Link](https://codeforces.com/contest/2185/problem/A) |
| 29 | Social Experiment | 2184A | 800 | [Link](https://codeforces.com/contest/2184/problem/A) |
| 30 | New Year String | 2182A | 800 | [Link](https://codeforces.com/contest/2182/problem/A) |
| 31 | Carnival Wheel | 2180A | 800 | [Link](https://codeforces.com/problemset/problem/2180/A) |
| 32 | Needle in a Haystack | 2174A | 1200 | [Link](https://codeforces.com/problemset/problem/2174/A) |
| 33 | Shizuku Hoshikawa and Farm Legs | 2171A | 800 | [Link](https://codeforces.com/problemset/problem/2171/A) |
| 34 | Maximum Neighborhood | 2170A | 800 | [Link](https://codeforces.com/contest/2170/problem/A) |
| 35 | Sequence Game | 2164A | 800 | [Link](https://codeforces.com/contest/2164/problem/A) |
| 36 | Beautiful Average | 2162A | 800 | [Link](https://codeforces.com/contest/2162/problem/A) |
| 37 | Dungeon Equilibrium | 2157A | 800 | [Link](https://codeforces.com/contest/2157/problem/A) |
| 38 | Pizza Time | 2156A | 800 | [Link](https://codeforces.com/contest/2156/problem/A) |
| 39 | El fucho | 2155A | 800 | [Link](https://codeforces.com/contest/2155/problem/A) |
| 40 | Notelock | 2154A | 800 | [Link](https://codeforces.com/contest/2154/problem/A) |
| 41 | Circle of Apple Trees | 2153A | 800 | [Link](https://codeforces.com/contest/2153/problem/A) |
| 42 | Increase or Smash | 2152A | 800 | [Link](https://codeforces.com/contest/2152/problem/A) |
| 43 | Be Positive | 2149A | 800 | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 44 | Shortest Increasing Path | 2147A | 800 | [Link](https://codeforces.com/contest/2147/problem/A) |
| 45 | Equal Occurrences | 2146A | 800 | [Link](https://codeforces.com/contest/2146/problem/A) |
| 46 | All Lengths Subtraction | 2143A | 800 | [Link](https://codeforces.com/contest/2143/problem/A) |
| 47 | Furniture Store | 2141A | 800 | [Link](https://codeforces.com/problemset/problem/2141/A) |
| 48 | Shift Sort | 2140A | 800 | [Link](https://codeforces.com/contest/2140/problem/A) |
| 49 | Maple and Multiplication | 2139A | 800 | [Link](https://codeforces.com/contest/2139/problem/A) |
| 50 | Collatz Conjecture | 2137A | 800 | [Link](https://codeforces.com/contest/2137/problem/A) |
| 51 | In the Dream | 2136A | 800 | [Link](https://codeforces.com/problemset/problem/2136/A) |
| 52 | Mix Mex Max | 2127A | 800 | [Link](https://codeforces.com/problemset/problem/2127/A) |
| 53 | Difficult Contest | 2125A | 800 | [Link](https://codeforces.com/contest/2125/problem/A) |
| 54 | Energy Crystals | 2111A | 800 | [Link](https://codeforces.com/problemset/problem/2111/A) |
| 55 | LRC and VIP | 2107A | 800 | [Link](https://codeforces.com/problemset/problem/2107/A) |
| 56 | Dr. TC | 2106A | 800 | [Link](https://codeforces.com/contest/2106/problem/A) |
| 57 | Dinner Time | 2102A | 900 | [Link](https://codeforces.com/problemset/problem/2102/A) |
| 58 | Kamilka and the Sheep | 2092A | 800 | [Link](https://codeforces.com/problemset/problem/2092/A) |
| 59 | Adjacent Digit Sums | 2067A | 800 | [Link](https://codeforces.com/contest/2067/problem/A) |
| 60 | Kevin and Arithmetic | 2061A | 800 | [Link](https://codeforces.com/contest/2061/problem/A) |
| 61 | Preparing for the Olympiad | 2051A | 800 | [Link](https://codeforces.com/problemset/problem/2051/A) |
| 62 | Easy Problem | 2044A | 800 | [Link](https://codeforces.com/problemset/problem/2044/A) |
| 63 | Bonus Project | 2038A | 1400 | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 64 | King Keykhosrow's Mystery | 2034A | 800 | [Link](https://codeforces.com/contest/2034/problem/A) |
| 65 | Penchick and Modern Monument | 2031A | 800 | [Link](https://codeforces.com/problemset/problem/2031/A) |
| 66 | Alice's Adventures in ''Chess'' | 2028A | 900 | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 67 | Sakurako's Exam | 2008A | 800 | [Link](https://codeforces.com/contest/2008/problem/A) |
| 68 | Simple Palindrome | 2005A | 900 | [Link](https://codeforces.com/problemset/problem/2005/A) |
| 69 | Only Pluses | 1992A | 800 | [Link](https://codeforces.com/contest/1992/problem/A) |
| 70 | Contest Proposal | 1972A | 800 | [Link](https://codeforces.com/problemset/problem/1972/A) |
| 71 | Painting the Ribbon | 1954A | 900 | [Link](https://codeforces.com/contest/1954/problem/A) |
| 72 | Dual Trigger | 1951A | 900 | [Link](https://codeforces.com/problemset/problem/1951/A) |
| 73 | Median of an Array | 1946A | 800 | [Link](https://codeforces.com/contest/1946/problem/A) |
| 74 | MEX Game 1 | 1943A | 1300 | [Link](https://codeforces.com/problemset/problem/1943/A) |
| 75 | Recovering a Small String | 1931A | 800 | [Link](https://codeforces.com/problemset/problem/1931/A) |
| 76 | Maximise The Score | 1930A | 800 | [Link](https://codeforces.com/contest/1930/problem/A) |
| 77 | 2023 | 1916A | 800 | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 78 | Problemsolving Log | 1914A | 800 | [Link](https://codeforces.com/contest/1914/problem/A) |
| 79 | Rook | 1907A | 800 | [Link](https://codeforces.com/problemset/problem/1907/A) |
| 80 | Forked! | 1904A | 900 | [Link](https://codeforces.com/problemset/problem/1904/A) |
| 81 | Game with Integers | 1899A | 800 | [Link](https://codeforces.com/contest/1899/problem/A) |
| 82 | Don't Try to Count | 1881A | 800 | [Link](https://codeforces.com/problemset/problem/1881/A) |
| 83 | How Much Does Daytona Cost? | 1878A | 800 | [Link](https://codeforces.com/problemset/problem/1878/A) |
| 84 | Goals of Victory | 1877A | 800 | [Link](https://codeforces.com/problemset/problem/1877/A) |
| 85 | Helmets in Night Light | 1876A | 1000 | [Link](https://codeforces.com/problemset/problem/1876/A) |
| 86 | Jellyfish and Undertale | 1875A | 900 | [Link](https://codeforces.com/problemset/problem/1875/A) |
| 87 | Jellyfish and Game | 1874A | 1200 | [Link](https://codeforces.com/problemset/problem/1874/A) |
| 88 | Make It Zero | 1869A | 900 | [Link](https://codeforces.com/problemset/problem/1869/A) |
| 89 | green_gold_dog, array and permutation | 1867A | 800 | [Link](https://codeforces.com/contest/1867/problem/A) |
| 90 | Prime Deletion | 1861A | 800 | [Link](https://codeforces.com/problemset/problem/1861/A) |
| 91 | Desorting | 1853A | 800 | [Link](https://codeforces.com/contest/1853/problem/A) |
| 92 | Morning Sandwich | 1849A | 800 | [Link](https://codeforces.com/problemset/problem/1849/A) |
| 93 | Forbidden Integer | 1845A | 800 | [Link](https://codeforces.com/problemset/problem/1845/A) |
| 94 | Game with Board | 1841A | 800 | [Link](https://codeforces.com/contest/1841/problem/A) |
| 95 | Grasshopper on a Line | 1837A | 800 | [Link](https://codeforces.com/contest/1837/problem/A) |
| 96 | Divisible Array | 1828A | 800 | [Link](https://codeforces.com/problemset/problem/1828/A) |
| 97 | Counting Orders | 1827A | 1100 | [Link](https://codeforces.com/problemset/problem/1827/A) |
| 98 | Coins | 1814A | 800 | [Link](https://codeforces.com/problemset/problem/1814/A) |
| 99 | Serval and Mocha's Array | 1789A | 800 | [Link](https://codeforces.com/problemset/problem/1789/A) |
| 100 | Koxia and Whiteboards | 1770A | 1000 | [Link](https://codeforces.com/problemset/problem/1770/A) |
| 101 | Extremely Round | 1766A | 800 | [Link](https://codeforces.com/problemset/problem/1766/A) |
| 102 | Indirect Sort | 1750A | 800 | [Link](https://codeforces.com/contest/1750/problem/A) |
| 103 | Number Replacement | 1744A | 800 | [Link](https://codeforces.com/problemset/problem/1744/A) |
| 104 | Bestie | 1732A | 1000 | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 105 | Mainak and Array | 1726A | 900 | [Link](https://codeforces.com/problemset/problem/1726/A) |
| 106 | AB Balance | 1606A | 900 | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 107 | Mocha and Math | 1559A | 900 | [Link](https://codeforces.com/problemset/problem/1559/A) |
| 108 | Exciting Bets | 1543A | 900 | [Link](https://codeforces.com/problemset/problem/1543/A) |
| 109 | Add and Divide | 1485A | 1000 | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 110 | Searching Local Minimum | 1479A | 1700 | [Link](https://codeforces.com/contest/1479/problem/A) |
| 111 | Row GCD | 1458A | 1600 | [Link](https://codeforces.com/problemset/problem/1458/A) |
| 112 | Buying Torches | 1418A | 1000 | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 113 | Johnny and Ancient Computer | 1362A | 1000 | [Link](https://codeforces.com/problemset/problem/1362/A) |
| 114 | Orac and LCM | 1349A | 1600 | [Link](https://codeforces.com/problemset/problem/1349/A) |
| 115 | Heating | 1260A | 1000 | [Link](https://codeforces.com/problemset/problem/1260/A) |
| 116 | Ehab Fails to Be Thanos | 1174A | 1000 | [Link](https://codeforces.com/problemset/problem/1174/A) |
| 117 | Reverse a Substring | 1155A | 1000 | [Link](https://codeforces.com/problemset/problem/1155/A) |
| 118 | Digits Sequence Dividing | 1107A | 900 | [Link](https://codeforces.com/problemset/problem/1107/A) |
| 119 | Palindrome Dance | 1040A | 1000 | [Link](https://codeforces.com/problemset/problem/1040/A) |
| 120 | Packets | 1037A | 1300 | [Link](https://codeforces.com/contest/1037/problem/A) |
| 121 | New Building for SIS | 1020A | 1000 | [Link](https://codeforces.com/problemset/problem/1020/A) |
| 122 | Row | 982A | 1200 | [Link](https://codeforces.com/problemset/problem/982/A) |
| 123 | Fafa and his Company | 935A | 800 | [Link](https://codeforces.com/problemset/problem/935/A) |
| 124 | Cloning Toys | 922A | 1300 | [Link](https://codeforces.com/problemset/problem/922/A) |
| 125 | Diversity | 844A | 1000 | [Link](https://codeforces.com/problemset/problem/844/A) |
| 126 | k-Factorization | 797A | 1100 | [Link](https://codeforces.com/problemset/problem/797/A) |
| 127 | Anastasia and pebbles | 789A | 1100 | [Link](https://codeforces.com/problemset/problem/789/A) |
| 128 | k-th divisor | 762A | 1400 | [Link](https://codeforces.com/problemset/problem/762/A) |
| 129 | Jumping Ball | 725A | 1000 | [Link](https://codeforces.com/problemset/problem/725/A) |
| 130 | Elephant | 617A | 800 | [Link](https://codeforces.com/contest/617/problem/A) |
| 131 | Saitama Destroys Hotel | 608A | 1000 | [Link](https://codeforces.com/problemset/problem/608/A) |
| 132 | Olesya and Rodion | 584A | 1000 | [Link](https://codeforces.com/contest/584/problem/A) |
| 133 | Bear and Poker | 573A | 1300 | [Link](https://codeforces.com/contest/573/problem/A) |
| 134 | Chewbaсca and Number | 514A | 1200 | [Link](https://codeforces.com/contest/514/problem/A) |
| 135 | Amr and Music | 507A | 1000 | [Link](https://codeforces.com/contest/507/problem/A) |
| 136 | Bits | 484A | 1700 | [Link](https://codeforces.com/problemset/problem/484/A) |
| 137 | Dreamoon and Stairs | 476A | 1000 | [Link](https://codeforces.com/problemset/problem/476/A) |
| 138 | I Wanna Be the Guy | 469A | 800 | [Link](https://codeforces.com/problemset/problem/469/A) |
| 139 | Pashmak and Garden | 459A | 1200 | [Link](https://codeforces.com/problemset/problem/459/A) |
| 140 | Boredom | 455A | 1500 | [Link](https://codeforces.com/problemset/problem/455/a) |
| 141 | Kitahara Haruki's Gift | 433A | 1100 | [Link](https://codeforces.com/problemset/problem/433/A) |
| 142 | Mashmokh and Numbers | 414A | 1500 | [Link](https://codeforces.com/problemset/problem/414/A) |
| 143 | Fox and Box Accumulation | 388A | 1400 | [Link](https://codeforces.com/contest/388/problem/A) |
| 144 | New Year Candles | 379A | 1000 | [Link](https://codeforces.com/contest/379/problem/A) |
| 145 | Alice and Bob | 346A | 1600 | [Link](https://codeforces.com/problemset/problem/346/A) |
| 146 | Rational Resistance | 343A | 1600 | [Link](https://codeforces.com/problemset/problem/343/A) |
| 147 | Candy Bags | 334A | 1000 | [Link](https://codeforces.com/problemset/problem/334/A) |
| 148 | Sereja and Bottles | 315A | 1400 | [Link](https://codeforces.com/problemset/problem/315/A) |
| 149 | Greg and Array | 295A | 1400 | [Link](https://codeforces.com/problemset/problem/295/A) |
| 150 | Lights Out | 275A | 900 | [Link](https://codeforces.com/problemset/problem/275/A) |
| 151 | Fancy Fence | 270A | 1100 | [Link](https://codeforces.com/problemset/problem/270/A) |
| 152 | Adding Digits | 260A | 1400 | [Link](https://codeforces.com/problemset/problem/260/A) |
| 153 | Cards with Numbers | 254A | 1200 | [Link](https://codeforces.com/problemset/problem/254/A) |
| 154 | Boys and Girls | 253A | 1100 | [Link](https://codeforces.com/contest/253/problem/A) |
| 155 | Little Elephant and Problem | 220A | 1300 | [Link](https://codeforces.com/contest/220/problem/A) |
| 156 | Cut Ribbon | 189A | 1300 | [Link](https://codeforces.com/problemset/problem/189/A) |
| 157 | Phone Code | 172A | 800 | [Link](https://codeforces.com/problemset/problem/172/A) |
| 158 | Cifera | 114A | 1000 | [Link](https://codeforces.com/contest/114/problem/A) |
| 159 | Magical Array | 83A | 1300 | [Link](https://codeforces.com/problemset/problem/83/A) |
| 160 | Bar | 56A | 1000 | [Link](https://codeforces.com/problemset/problem/56/A) |
| 161 | Reconnaissance | 32A | 800 | [Link](https://codeforces.com/problemset/problem/32/A) |
| 162 | Almost Prime | 26A | 900 | [Link](https://codeforces.com/contest/26/problem/A) |
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
