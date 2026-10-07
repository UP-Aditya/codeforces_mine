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

**Total solutions uploaded:** 397
**Last updated:** 2026-10-05T22:00:23.965365
**Current day counter:** 80

**By rating:** 800 (130), 900 (55), 1000 (64), 1100 (49), 1200 (42), 1300 (29), 1400 (12), 1500 (5), 1600 (6), 1700 (2), 1800 (1), Unrated (2)

| # | Problem | Contest | Rating | Link |
|---|---------|---------|--------|------|
| 1 | Predominant Frequency Division | 2242B | 1000 | [Link](https://codeforces.com/contest/2242/problem/B) |
| 2 | Bigrams | 2242A | 800 | [Link](https://codeforces.com/contest/2242/problem/A) |
| 3 | Good times Good times | 2241B | 1100 | [Link](https://codeforces.com/contest/2241/problem/B) |
| 4 | Divide and Conquer | 2241A | 800 | [Link](https://codeforces.com/contest/2241/problem/A) |
| 5 | Another Popcount Problem | 2240A | 800 | [Link](https://codeforces.com/contest/2240/problem/A) |
| 6 | Crimson Triples | 2238B | 900 | [Link](https://codeforces.com/contest/2238/problem/B) |
| 7 | Another Puzzle from Papyrus | 2238A | 800 | [Link](https://codeforces.com/contest/2238/problem/A) |
| 8 | Annoying the Ghost | 2237B | 1000 | [Link](https://codeforces.com/contest/2237/problem/B) |
| 9 | Destroying Towers | 2237A | 800 | [Link](https://codeforces.com/contest/2237/problem/A) |
| 10 | Games on the Train | 2236A | 800 | [Link](https://codeforces.com/contest/2236/problem/A) |
| 11 | Palindrome, Twelve and Two Terms | 2234B | 800 | [Link](https://codeforces.com/contest/2234/problem/B) |
| 12 | Euclid, Sequence and Two Numbers | 2234A | 800 | [Link](https://codeforces.com/contest/2234/problem/A) |
| 13 | Cake Leveling | 2232B | 900 | [Link](https://codeforces.com/contest/2232/problem/B) |
| 14 | Convergence | 2232A | 800 | [Link](https://codeforces.com/contest/2232/problem/A) |
| 15 | Another Sorting Problem | 2231B | 1100 | [Link](https://codeforces.com/contest/2231/problem/B) |
| 16 | Construct an Array | 2231A | 800 | [Link](https://codeforces.com/contest/2231/problem/A) |
| 17 | Party Monster | 2227B | 800 | [Link](https://codeforces.com/contest/2227/problem/B) |
| 18 | Koshary | 2227A | 800 | [Link](https://codeforces.com/contest/2227/problem/A) |
| 19 | Disturbing Distribution | 2226A | 800 | [Link](https://codeforces.com/contest/2226/problem/A) |
| 20 | Alternating String | 2225B | 900 | [Link](https://codeforces.com/contest/2225/problem/B) |
| 21 | A Number Between Two Others | 2225A | 800 | [Link](https://codeforces.com/contest/2225/problem/A) |
| 22 | Zhily and Array Operating | 2224A | 800 | [Link](https://codeforces.com/contest/2224/problem/A) |
| 23 | A Wonderful Contest | 2222A | 800 | [Link](https://codeforces.com/contest/2222/problem/A) |
| 24 | OIE Excursion | 2220B | 1200 | [Link](https://codeforces.com/contest/2220/problem/B) |
| 25 | Blocked | 2220A | 800 | [Link](https://codeforces.com/contest/2220/problem/A) |
| 26 | The 67th Integer Problem | 2218A | 800 | [Link](https://codeforces.com/contest/2218/problem/A) |
| 27 | Flip the Bit (Easy Version) | 2217B | 1000 | [Link](https://codeforces.com/contest/2217/problem/B) |
| 28 | The Equalizer | 2217A | 800 | [Link](https://codeforces.com/contest/2217/problem/A) |
| 29 | Course Wishes | 2216A | 900 | [Link](https://codeforces.com/contest/2216/problem/A) |
| 30 | Are You Smiling? | 2214B | Unrated | [Link](https://codeforces.com/contest/2214/problem/B) |
| 31 | Odd One Out | 2214A | Unrated | [Link](https://codeforces.com/contest/2214/problem/A) |
| 32 | Mickey Mouse Constructive | 2211B | 1100 | [Link](https://codeforces.com/problemset/problem/2211/B) |
| 33 | A Simple Sequence | 2210A | 800 | [Link](https://codeforces.com/contest/2210/problem/A) |
| 34 | 1-1 | 2207A | 800 | [Link](https://codeforces.com/problemset/problem/2207/A) |
| 35 | Passing the Ball | 2204A | 800 | [Link](https://codeforces.com/contest/2204/problem/A) |
| 36 | Beautiful Numbers | 2203B | 1000 | [Link](https://codeforces.com/contest/2203/problem/B) |
| 37 | Towers of Boxes | 2203A | 800 | [Link](https://codeforces.com/contest/2203/problem/A) |
| 38 | Parkour Design | 2202A | 800 | [Link](https://codeforces.com/contest/2202/problem/A) |
| 39 | Deletion Sort | 2200B | 800 | [Link](https://codeforces.com/contest/2200/problem/B) |
| 40 | Eating Game | 2200A | 800 | [Link](https://codeforces.com/contest/2200/problem/A) |
| 41 | Array and Permutation | 2197B | 1100 | [Link](https://codeforces.com/contest/2197/problem/B) |
| 42 | Friendly Numbers | 2197A | 800 | [Link](https://codeforces.com/contest/2197/problem/A) |
| 43 | Heapify 1 | 2195B | 900 | [Link](https://codeforces.com/contest/2195/problem/B) |
| 44 | Sieve of Erato67henes | 2195A | 800 | [Link](https://codeforces.com/contest/2195/problem/A) |
| 45 | Offshores | 2194B | 1000 | [Link](https://codeforces.com/contest/2194/problem/B) |
| 46 | Lawn Mower | 2194A | 800 | [Link](https://codeforces.com/contest/2194/problem/A) |
| 47 | Reverse a Permutation | 2193B | 800 | [Link](https://codeforces.com/contest/2193/problem/B) |
| 48 | DBMB and the Array | 2193A | 800 | [Link](https://codeforces.com/contest/2193/problem/A) |
| 49 | Flipping Binary String | 2192B | 1000 | [Link](https://codeforces.com/contest/2192/problem/B) |
| 50 | MEX Reordering | 2191B | 1000 | [Link](https://codeforces.com/contest/2191/problem/B) |
| 51 | Array Coloring | 2191A | 800 | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 52 | Sorting Game | 2190A | 1200 | [Link](https://codeforces.com/problemset/problem/2190/A) |
| 53 | Prefix Max | 2185B | 800 | [Link](https://codeforces.com/contest/2185/problem/B) |
| 54 | Perfect Root | 2185A | 800 | [Link](https://codeforces.com/contest/2185/problem/A) |
| 55 | Hourglass | 2184B | 1100 | [Link](https://codeforces.com/contest/2184/problem/B) |
| 56 | Social Experiment | 2184A | 800 | [Link](https://codeforces.com/contest/2184/problem/A) |
| 57 | New Year Cake | 2182B | 800 | [Link](https://codeforces.com/contest/2182/problem/B) |
| 58 | New Year String | 2182A | 800 | [Link](https://codeforces.com/contest/2182/problem/A) |
| 59 | Ashmal | 2180B | 800 | [Link](https://codeforces.com/problemset/problem/2180/B) |
| 60 | Carnival Wheel | 2180A | 800 | [Link](https://codeforces.com/problemset/problem/2180/A) |
| 61 | Impost or Sus | 2178B | 900 | [Link](https://codeforces.com/problemset/problem/2178/B) |
| 62 | Optimal Shifts | 2176B | 1000 | [Link](https://codeforces.com/contest/2176/problem/B) |
| 63 | Needle in a Haystack | 2174A | 1200 | [Link](https://codeforces.com/problemset/problem/2174/A) |
| 64 | Niko's Tactical Cards | 2173B | 1100 | [Link](https://codeforces.com/contest/2173/problem/B) |
| 65 | Shizuku Hoshikawa and Farm Legs | 2171A | 800 | [Link](https://codeforces.com/problemset/problem/2171/A) |
| 66 | Maximum Neighborhood | 2170A | 800 | [Link](https://codeforces.com/contest/2170/problem/A) |
| 67 | Drifting Away | 2169B | 1100 | [Link](https://codeforces.com/contest/2169/problem/B) |
| 68 | Square? | 2167A | 800 | [Link](https://codeforces.com/contest/2167/problem/A) |
| 69 | Even Modulo Pair | 2164B | 1000 | [Link](https://codeforces.com/contest/2164/problem/B) |
| 70 | Sequence Game | 2164A | 800 | [Link](https://codeforces.com/contest/2164/problem/A) |
| 71 | Souvlaki VS. Kalamaki | 2163A | 800 | [Link](https://codeforces.com/contest/2163/problem/A) |
| 72 | Beautiful String | 2162B | 1000 | [Link](https://codeforces.com/contest/2162/problem/B) |
| 73 | Beautiful Average | 2162A | 800 | [Link](https://codeforces.com/contest/2162/problem/A) |
| 74 | Distinct Elements | 2160B | 1100 | [Link](https://codeforces.com/problemset/problem/2160/B) |
| 75 | Suspension | 2158A | 800 | [Link](https://codeforces.com/contest/2158/problem/A) |
| 76 | Expansion Plan 2 | 2157B | 900 | [Link](https://codeforces.com/contest/2157/problem/B) |
| 77 | Dungeon Equilibrium | 2157A | 800 | [Link](https://codeforces.com/contest/2157/problem/A) |
| 78 | Pizza Time | 2156A | 800 | [Link](https://codeforces.com/contest/2156/problem/A) |
| 79 | Abraham's Great Escape | 2155B | 1100 | [Link](https://codeforces.com/contest/2155/problem/B) |
| 80 | El fucho | 2155A | 800 | [Link](https://codeforces.com/contest/2155/problem/A) |
| 81 | Make it Zigzag | 2154B | 1000 | [Link](https://codeforces.com/contest/2154/problem/B) |
| 82 | Notelock | 2154A | 800 | [Link](https://codeforces.com/contest/2154/problem/A) |
| 83 | Bitwise Reversion | 2153B | 800 | [Link](https://codeforces.com/contest/2153/problem/B) |
| 84 | Circle of Apple Trees | 2153A | 800 | [Link](https://codeforces.com/contest/2153/problem/A) |
| 85 | Catching the Krug | 2152B | 1300 | [Link](https://codeforces.com/contest/2152/problem/B) |
| 86 | Increase or Smash | 2152A | 800 | [Link](https://codeforces.com/contest/2152/problem/A) |
| 87 | Be Positive | 2149A | 800 | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 88 | Lasers | 2148B | 800 | [Link](https://codeforces.com/contest/2148/problem/B) |
| 89 | Sublime Sequence | 2148A | 800 | [Link](https://codeforces.com/contest/2148/problem/A) |
| 90 | Multiple Construction | 2147B | 1000 | [Link](https://codeforces.com/contest/2147/problem/B) |
| 91 | Shortest Increasing Path | 2147A | 800 | [Link](https://codeforces.com/contest/2147/problem/A) |
| 92 | Merging the Sets | 2146B | 1100 | [Link](https://codeforces.com/contest/2146/problem/B) |
| 93 | Equal Occurrences | 2146A | 800 | [Link](https://codeforces.com/contest/2146/problem/A) |
| 94 | Deck of Cards | 2145B | 1000 | [Link](https://codeforces.com/contest/2145/problem/B) |
| 95 | Discounts | 2143B | 1000 | [Link](https://codeforces.com/contest/2143/problem/B) |
| 96 | All Lengths Subtraction | 2143A | 800 | [Link](https://codeforces.com/contest/2143/problem/A) |
| 97 | Games | 2141B | 1200 | [Link](https://codeforces.com/problemset/problem/2141/B) |
| 98 | Furniture Store | 2141A | 800 | [Link](https://codeforces.com/problemset/problem/2141/A) |
| 99 | Another Divisibility Problem | 2140B | 900 | [Link](https://codeforces.com/problemset/problem/2140/B) |
| 100 | Shift Sort | 2140A | 800 | [Link](https://codeforces.com/contest/2140/problem/A) |
| 101 | Cake Collection | 2139B | 800 | [Link](https://codeforces.com/contest/2139/problem/B) |
| 102 | Maple and Multiplication | 2139A | 800 | [Link](https://codeforces.com/contest/2139/problem/A) |
| 103 | Fun Permutation | 2137B | 900 | [Link](https://codeforces.com/contest/2137/problem/B) |
| 104 | Collatz Conjecture | 2137A | 800 | [Link](https://codeforces.com/contest/2137/problem/A) |
| 105 | In the Dream | 2136A | 800 | [Link](https://codeforces.com/problemset/problem/2136/A) |
| 106 | Add 0 or K | 2134B | 1200 | [Link](https://codeforces.com/problemset/problem/2134/B) |
| 107 | Pathless | 2130B | 1100 | [Link](https://codeforces.com/contest/2130/problem/B) |
| 108 | Mix Mex Max | 2127A | 800 | [Link](https://codeforces.com/problemset/problem/2127/A) |
| 109 | No Casino in the Mountains | 2126B | 800 | [Link](https://codeforces.com/contest/2126/problem/B) |
| 110 | Left and Down | 2125B | 900 | [Link](https://codeforces.com/contest/2125/problem/B) |
| 111 | Difficult Contest | 2125A | 800 | [Link](https://codeforces.com/contest/2125/problem/A) |
| 112 | Minimise Sum | 2124B | 1000 | [Link](https://codeforces.com/contest/2124/problem/B) |
| 113 | Pile Shuffling | 2122B | 1100 | [Link](https://codeforces.com/contest/2122/problem/B) |
| 114 | Above the Clouds | 2121B | 800 | [Link](https://codeforces.com/contest/2121/problem/B) |
| 115 | Square of Rectangles | 2120A | 800 | [Link](https://codeforces.com/problemset/problem/2120/A) |
| 116 | Line Segments | 2119B | 1200 | [Link](https://codeforces.com/contest/2119/problem/B) |
| 117 | Energy Crystals | 2111A | 800 | [Link](https://codeforces.com/problemset/problem/2111/A) |
| 118 | Apples in Boxes | 2107B | 1100 | [Link](https://codeforces.com/problemset/problem/2107/B) |
| 119 | LRC and VIP | 2107A | 800 | [Link](https://codeforces.com/problemset/problem/2107/A) |
| 120 | Dr. TC | 2106A | 800 | [Link](https://codeforces.com/contest/2106/problem/A) |
| 121 | Move to the End | 2104B | 1000 | [Link](https://codeforces.com/problemset/problem/2104/B) |
| 122 | Dinner Time | 2102A | 900 | [Link](https://codeforces.com/problemset/problem/2102/A) |
| 123 | Wonderful Sticks | 2096A | 800 | [Link](https://codeforces.com/contest/2096/problem/A) |
| 124 | Kamilka and the Sheep | 2092A | 800 | [Link](https://codeforces.com/problemset/problem/2092/A) |
| 125 | Treasure Hunt | 2090A | 800 | [Link](https://codeforces.com/problemset/problem/2090/A) |
| 126 | Having Been a Treasurer in the Past, I Help Goblins Deceive | 2072B | 900 | [Link](https://codeforces.com/problemset/problem/2072/B) |
| 127 | Adjacent Digit Sums | 2067A | 800 | [Link](https://codeforces.com/contest/2067/problem/A) |
| 128 | Kevin and Geometry | 2061B | 1100 | [Link](https://codeforces.com/problemset/problem/2061/B) |
| 129 | Kevin and Arithmetic | 2061A | 800 | [Link](https://codeforces.com/contest/2061/problem/A) |
| 130 | Crafting | 2055B | 1000 | [Link](https://codeforces.com/problemset/problem/2055/B) |
| 131 | Preparing for the Olympiad | 2051A | 800 | [Link](https://codeforces.com/problemset/problem/2051/A) |
| 132 | Replace Character | 2047B | 900 | [Link](https://codeforces.com/problemset/problem/2047/B) |
| 133 | Easy Problem | 2044A | 800 | [Link](https://codeforces.com/problemset/problem/2044/A) |
| 134 | Digits | 2043B | 1100 | [Link](https://codeforces.com/contest/2043/problem/B) |
| 135 | Bowling Frame | 2041B | 1200 | [Link](https://codeforces.com/problemset/problem/2041/B) |
| 136 | Bonus Project | 2038A | 1400 | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 137 | Rakhsh's Revival | 2034B | 1000 | [Link](https://codeforces.com/contest/2034/problem/B) |
| 138 | King Keykhosrow's Mystery | 2034A | 800 | [Link](https://codeforces.com/contest/2034/problem/A) |
| 139 | Penchick and Satay Sticks | 2031B | 900 | [Link](https://codeforces.com/problemset/problem/2031/B) |
| 140 | Penchick and Modern Monument | 2031A | 800 | [Link](https://codeforces.com/problemset/problem/2031/A) |
| 141 | Replacement | 2029B | 1100 | [Link](https://codeforces.com/problemset/problem/2029/B) |
| 142 | Alice's Adventures in ''Chess'' | 2028A | 900 | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 143 | Maximize Mex | 2021B | 1200 | [Link](https://codeforces.com/problemset/problem/2021/B) |
| 144 | Brightness Begins | 2020B | 1200 | [Link](https://codeforces.com/problemset/problem/2020/B) |
| 145 | Battle for Survive | 2013B | 900 | [Link](https://codeforces.com/problemset/problem/2013/B) |
| 146 | Sakurako's Exam | 2008A | 800 | [Link](https://codeforces.com/contest/2008/problem/A) |
| 147 | The Strict Teacher (Hard Version) | 2005B2 | 1200 | [Link](https://codeforces.com/contest/2005/problem/B2) |
| 148 | Simple Palindrome | 2005A | 900 | [Link](https://codeforces.com/problemset/problem/2005/A) |
| 149 | Game with Doors | 2004B | 1000 | [Link](https://codeforces.com/problemset/problem/2004/B) |
| 150 | Minimize Equal Sum Subarrays | 1998B | 1000 | [Link](https://codeforces.com/problemset/problem/1998/B) |
| 151 | Parity and Sum | 1993B | 1100 | [Link](https://codeforces.com/problemset/problem/1993/B) |
| 152 | Angry Monk | 1992B | 800 | [Link](https://codeforces.com/contest/1992/problem/B) |
| 153 | Only Pluses | 1992A | 800 | [Link](https://codeforces.com/contest/1992/problem/A) |
| 154 | AND Reconstruction | 1991B | 1100 | [Link](https://codeforces.com/problemset/problem/1991/B) |
| 155 | Array Craft | 1990B | 1200 | [Link](https://codeforces.com/problemset/problem/1990/B) |
| 156 | Submission Bait | 1990A | 900 | [Link](https://codeforces.com/problemset/problem/1990/A) |
| 157 | Split the Multiset | 1988A | 900 | [Link](https://codeforces.com/problemset/problem/1988/A) |
| 158 | X Axis | 1986A | 800 | [Link](https://codeforces.com/problemset/problem/1986/A) |
| 159 | 378QAQ and Mocha's Array | 1975B | 1000 | [Link](https://codeforces.com/problemset/problem/1975/B) |
| 160 | Cat, Fox and the Lonely Array | 1973B | 1300 | [Link](https://codeforces.com/problemset/problem/1973/B) |
| 161 | Coin Games | 1972B | 900 | [Link](https://codeforces.com/problemset/problem/1972/B) |
| 162 | Contest Proposal | 1972A | 800 | [Link](https://codeforces.com/problemset/problem/1972/A) |
| 163 | A BIT of a Construction | 1957B | 1100 | [Link](https://codeforces.com/problemset/problem/1957/B) |
| 164 | Nene and the Card Game | 1956B | 800 | [Link](https://codeforces.com/problemset/problem/1956/B) |
| 165 | Progressive Square | 1955B | 1000 | [Link](https://codeforces.com/problemset/problem/1955/B) |
| 166 | Make It Ugly | 1954B | 1200 | [Link](https://codeforces.com/problemset/problem/1954/B) |
| 167 | Painting the Ribbon | 1954A | 900 | [Link](https://codeforces.com/contest/1954/problem/A) |
| 168 | Battle Cows | 1951B | 1200 | [Link](https://codeforces.com/problemset/problem/1951/B) |
| 169 | Dual Trigger | 1951A | 900 | [Link](https://codeforces.com/problemset/problem/1951/A) |
| 170 | Median of an Array | 1946A | 800 | [Link](https://codeforces.com/contest/1946/problem/A) |
| 171 | MEX Game 1 | 1943A | 1300 | [Link](https://codeforces.com/problemset/problem/1943/A) |
| 172 | Chaya Calendar | 1932B | 1100 | [Link](https://codeforces.com/problemset/problem/1932/B) |
| 173 | Recovering a Small String | 1931A | 800 | [Link](https://codeforces.com/problemset/problem/1931/A) |
| 174 | Permutation Printing | 1930B | 1000 | [Link](https://codeforces.com/problemset/problem/1930/B) |
| 175 | Maximise The Score | 1930A | 800 | [Link](https://codeforces.com/contest/1930/problem/A) |
| 176 | Following the String | 1927B | 900 | [Link](https://codeforces.com/problemset/problem/1927/B) |
| 177 | A Balanced Problemset? | 1925B | 1200 | [Link](https://codeforces.com/contest/1925/problem/B) |
| 178 | Plus-Minus Split | 1919B | 800 | [Link](https://codeforces.com/problemset/problem/1919/B) |
| 179 | Minimize Inversions | 1918B | 900 | [Link](https://codeforces.com/problemset/problem/1918/B) |
| 180 | 2023 | 1916A | 800 | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 181 | Problemsolving Log | 1914A | 800 | [Link](https://codeforces.com/contest/1914/problem/A) |
| 182 | Make Almost Equal With Mod | 1909B | 1200 | [Link](https://codeforces.com/problemset/problem/1909/B) |
| 183 | Rook | 1907A | 800 | [Link](https://codeforces.com/problemset/problem/1907/A) |
| 184 | Collecting Game | 1904B | 1100 | [Link](https://codeforces.com/problemset/problem/1904/B) |
| 185 | Forked! | 1904A | 900 | [Link](https://codeforces.com/problemset/problem/1904/A) |
| 186 | Getting Points | 1902B | 1100 | [Link](https://codeforces.com/problemset/problem/1902/B) |
| 187 | Game with Integers | 1899A | 800 | [Link](https://codeforces.com/contest/1899/problem/A) |
| 188 | Deja Vu | 1891B | 1100 | [Link](https://codeforces.com/problemset/problem/1891/B) |
| 189 | Sum of Three | 1886A | 800 | [Link](https://codeforces.com/problemset/problem/1886/A) |
| 190 | Haunted House | 1884B | 1100 | [Link](https://codeforces.com/contest/1884/problem/B) |
| 191 | Chemistry | 1883B | 900 | [Link](https://codeforces.com/problemset/problem/1883/B) |
| 192 | Don't Try to Count | 1881A | 800 | [Link](https://codeforces.com/problemset/problem/1881/A) |
| 193 | How Much Does Daytona Cost? | 1878A | 800 | [Link](https://codeforces.com/problemset/problem/1878/A) |
| 194 | Goals of Victory | 1877A | 800 | [Link](https://codeforces.com/problemset/problem/1877/A) |
| 195 | Helmets in Night Light | 1876A | 1000 | [Link](https://codeforces.com/problemset/problem/1876/A) |
| 196 | Jellyfish and Undertale | 1875A | 900 | [Link](https://codeforces.com/problemset/problem/1875/A) |
| 197 | Jellyfish and Game | 1874A | 1200 | [Link](https://codeforces.com/problemset/problem/1874/A) |
| 198 | 2D Traveling | 1869B | 1100 | [Link](https://codeforces.com/problemset/problem/1869/B) |
| 199 | Make It Zero | 1869A | 900 | [Link](https://codeforces.com/problemset/problem/1869/A) |
| 200 | green_gold_dog, array and permutation | 1867A | 800 | [Link](https://codeforces.com/contest/1867/problem/A) |
| 201 | Prime Deletion | 1861A | 800 | [Link](https://codeforces.com/problemset/problem/1861/A) |
| 202 | Olya and Game with Arrays | 1859B | 1000 | [Link](https://codeforces.com/problemset/problem/1859/B) |
| 203 | United We Stand | 1859A | 800 | [Link](https://codeforces.com/problemset/problem/1859/A) |
| 204 | Good Arrays | 1856B | 900 | [Link](https://codeforces.com/contest/1856/problem/B) |
| 205 | Longest Divisors Interval | 1855B | 900 | [Link](https://codeforces.com/problemset/problem/1855/B) |
| 206 | Desorting | 1853A | 800 | [Link](https://codeforces.com/contest/1853/problem/A) |
| 207 | Monsters | 1849B | 1000 | [Link](https://codeforces.com/problemset/problem/1849/B) |
| 208 | Morning Sandwich | 1849A | 800 | [Link](https://codeforces.com/problemset/problem/1849/A) |
| 209 | Forbidden Integer | 1845A | 800 | [Link](https://codeforces.com/problemset/problem/1845/A) |
| 210 | Permutations & Primes | 1844B | 1000 | [Link](https://codeforces.com/problemset/problem/1844/B) |
| 211 | Game with Board | 1841A | 800 | [Link](https://codeforces.com/contest/1841/problem/A) |
| 212 | Lamps | 1839B | 1100 | [Link](https://codeforces.com/problemset/problem/1839/B) |
| 213 | Comparison String | 1837B | 900 | [Link](https://codeforces.com/problemset/problem/1837/B) |
| 214 | Grasshopper on a Line | 1837A | 800 | [Link](https://codeforces.com/contest/1837/problem/A) |
| 215 | Unit Array | 1834A | 800 | [Link](https://codeforces.com/contest/1834/problem/A) |
| 216 | Restore the Weather | 1833B | 900 | [Link](https://codeforces.com/problemset/problem/1833/B) |
| 217 | Maximum Sum | 1832B | 1100 | [Link](https://codeforces.com/problemset/problem/1832/B) |
| 218 | Array merging | 1831B | 1000 | [Link](https://codeforces.com/problemset/problem/1831/B) |
| 219 | Twin Permutations | 1831A | 800 | [Link](https://codeforces.com/problemset/problem/1831/A) |
| 220 | Divisible Array | 1828A | 800 | [Link](https://codeforces.com/problemset/problem/1828/A) |
| 221 | Counting Orders | 1827A | 1100 | [Link](https://codeforces.com/problemset/problem/1827/A) |
| 222 | Lunatic Never Content | 1826B | 1100 | [Link](https://codeforces.com/problemset/problem/1826/B) |
| 223 | TubeTube Feed | 1822A | 800 | [Link](https://codeforces.com/problemset/problem/1822/A) |
| 224 | JoJo's Incredible Adventures | 1820B | 1100 | [Link](https://codeforces.com/problemset/problem/1820/B) |
| 225 | Grid Reconstruction | 1816B | 1000 | [Link](https://codeforces.com/problemset/problem/1816/B) |
| 226 | Coins | 1814A | 800 | [Link](https://codeforces.com/problemset/problem/1814/A) |
| 227 | Conveyor Belts | 1811B | 1000 | [Link](https://codeforces.com/problemset/problem/1811/B) |
| 228 | Candies | 1810B | 800 | [Link](https://codeforces.com/problemset/problem/1810/B) |
| 229 | Playing in a Casino | 1808B | 1200 | [Link](https://codeforces.com/problemset/problem/1808/B) |
| 230 | Walking Master | 1806A | 800 | [Link](https://codeforces.com/problemset/problem/1806/A) |
| 231 | We Need the Zero | 1805A | 800 | [Link](https://codeforces.com/problemset/problem/1805/A) |
| 232 | Count the Number of Pairs | 1800B | 1000 | [Link](https://codeforces.com/problemset/problem/1800/B) |
| 233 | Not Dividing | 1794B | 900 | [Link](https://codeforces.com/problemset/problem/1794/B) |
| 234 | Fedya and Array | 1793B | 1100 | [Link](https://codeforces.com/problemset/problem/1793/B) |
| 235 | Serval and Mocha's Array | 1789A | 800 | [Link](https://codeforces.com/problemset/problem/1789/A) |
| 236 | Number Factorization | 1787B | 1100 | [Link](https://codeforces.com/problemset/problem/1787/B) |
| 237 | Going to the Cinema | 1781B | 1000 | [Link](https://codeforces.com/contest/1781/problem/B) |
| 238 | GCD Partition | 1780B | 1100 | [Link](https://codeforces.com/problemset/problem/1780/B) |
| 239 | Koxia and Permutation | 1770B | 1000 | [Link](https://codeforces.com/contest/1770/problem/B) |
| 240 | Koxia and Whiteboards | 1770A | 1000 | [Link](https://codeforces.com/problemset/problem/1770/A) |
| 241 | Notepad# | 1766B | 1000 | [Link](https://codeforces.com/contest/1766/problem/B) |
| 242 | Extremely Round | 1766A | 800 | [Link](https://codeforces.com/problemset/problem/1766/A) |
| 243 | Broken Keyboard | 1765B | 800 | [Link](https://codeforces.com/problemset/problem/1765/B) |
| 244 | Incinerate | 1763B | 1200 | [Link](https://codeforces.com/problemset/problem/1763/B) |
| 245 | Elimination of a Ring | 1761B | 1000 | [Link](https://codeforces.com/problemset/problem/1761/B) |
| 246 | Indirect Sort | 1750A | 800 | [Link](https://codeforces.com/contest/1750/problem/A) |
| 247 | Number Replacement | 1744A | 800 | [Link](https://codeforces.com/problemset/problem/1744/A) |
| 248 | Playing with GCD | 1736B | 1200 | [Link](https://codeforces.com/problemset/problem/1736/B) |
| 249 | Bestie | 1732A | 1000 | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 250 | Kill Demodogs | 1731B | 1100 | [Link](https://codeforces.com/problemset/problem/1731/B) |
| 251 | Mainak and Array | 1726A | 900 | [Link](https://codeforces.com/problemset/problem/1726/A) |
| 252 | Basketball Together | 1725B | 1000 | [Link](https://codeforces.com/problemset/problem/1725/B) |
| 253 | Beautiful Array | 1715B | 1000 | [Link](https://codeforces.com/problemset/problem/1715/B) |
| 254 | Luke is a Foodie | 1704B | 1000 | [Link](https://codeforces.com/problemset/problem/1704/B) |
| 255 | Promo | 1697B | 900 | [Link](https://codeforces.com/problemset/problem/1697/B) |
| 256 | NIT Destroys the Universe | 1696B | 900 | [Link](https://codeforces.com/problemset/problem/1696/B) |
| 257 | Circle Game | 1695B | 1000 | [Link](https://codeforces.com/problemset/problem/1695/B) |
| 258 | A Perfectly Balanced String? | 1673B | 1100 | [Link](https://codeforces.com/problemset/problem/1673/B) |
| 259 | Array Cloning Technique | 1665B | 900 | [Link](https://codeforces.com/problemset/problem/1665/B) |
| 260 | DIV + MOD | 1650B | 900 | [Link](https://codeforces.com/problemset/problem/1650/B) |
| 261 | Fun with Even Subarrays | 1631B | 1100 | [Link](https://codeforces.com/problemset/problem/1631/B) |
| 262 | Make AP | 1624B | 900 | [Link](https://codeforces.com/problemset/problem/1624/B) |
| 263 | Divan and a New Project  | 1614B | 1000 | [Link](https://codeforces.com/problemset/problem/1614/B) |
| 264 | Kalindrome Array | 1610B | 1100 | [Link](https://codeforces.com/problemset/problem/1610/B) |
| 265 | Odd Grasshopper | 1607B | 900 | [Link](https://codeforces.com/problemset/problem/1607/B) |
| 266 | AB Balance | 1606A | 900 | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 267 | Make it Divisible by 25 | 1593B | 900 | [Link](https://codeforces.com/problemset/problem/1593/B) |
| 268 | MEXor Mixup | 1567B | 1000 | [Link](https://codeforces.com/problemset/problem/1567/B) |
| 269 | Mocha and Math | 1559A | 900 | [Link](https://codeforces.com/problemset/problem/1559/A) |
| 270 | Exciting Bets | 1543A | 900 | [Link](https://codeforces.com/problemset/problem/1543/A) |
| 271 | Pleasant Pairs | 1541B | 1200 | [Link](https://codeforces.com/problemset/problem/1541/B) |
| 272 | Bad Boy | 1537B | 900 | [Link](https://codeforces.com/problemset/problem/1537/B) |
| 273 | Prinzessin der Verurteilung | 1536B | 1200 | [Link](https://codeforces.com/problemset/problem/1536/B) |
| 274 | Permutation Sort | 1525B | 900 | [Link](https://codeforces.com/problemset/problem/1525/B) |
| 275 | Nastia and a Good Array | 1521B | 1300 | [Link](https://codeforces.com/problemset/problem/1521/B) |
| 276 | Flip the Bits | 1504B | 1200 | [Link](https://codeforces.com/problemset/problem/1504/B) |
| 277 | M-arrays | 1497B | 1200 | [Link](https://codeforces.com/problemset/problem/1497/B) |
| 278 | Cat Cycle | 1487B | 1200 | [Link](https://codeforces.com/problemset/problem/1487/B) |
| 279 | Add and Divide | 1485A | 1000 | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 280 | Searching Local Minimum | 1479A | 1700 | [Link](https://codeforces.com/contest/1479/problem/A) |
| 281 | Strange Partition | 1471A | 900 | [Link](https://codeforces.com/problemset/problem/1471/A) |
| 282 | Row GCD | 1458A | 1600 | [Link](https://codeforces.com/problemset/problem/1458/A) |
| 283 | Buying Torches | 1418A | 1000 | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 284 | Fair Numbers | 1411B | 1000 | [Link](https://codeforces.com/problemset/problem/1411/B) |
| 285 | Three Indices | 1380A | 900 | [Link](https://codeforces.com/problemset/problem/1380/A) |
| 286 | Multiply by 2, divide by 6 | 1374B | 900 | [Link](https://codeforces.com/problemset/problem/1374/B) |
| 287 | 01 Game | 1373B | 900 | [Link](https://codeforces.com/problemset/problem/1373/B) |
| 288 | Omkar and Last Class of Math | 1372B | 1300 | [Link](https://codeforces.com/problemset/problem/1372/B) |
| 289 | Most socially-distanced subsequence | 1364B | 1300 | [Link](https://codeforces.com/contest/1364/problem/B) |
| 290 | Johnny and Ancient Computer | 1362A | 1000 | [Link](https://codeforces.com/problemset/problem/1362/A) |
| 291 | Orac and LCM | 1349A | 1600 | [Link](https://codeforces.com/problemset/problem/1349/A) |
| 292 | Nastya and Door | 1341B | 1300 | [Link](https://codeforces.com/contest/1341/problem/B) |
| 293 | Sum of Odd Integers | 1327A | 1100 | [Link](https://codeforces.com/contest/1327/problem/A) |
| 294 | Bogosort | 1312B | 1000 | [Link](https://codeforces.com/problemset/problem/1312/B) |
| 295 | Just Eat It! | 1285B | 1300 | [Link](https://codeforces.com/problemset/problem/1285/B) |
| 296 | Heating | 1260A | 1000 | [Link](https://codeforces.com/problemset/problem/1260/A) |
| 297 | Balanced Tunnel | 1237B | 1300 | [Link](https://codeforces.com/contest/1237/problem/B) |
| 298 | TV Subscriptions (Hard Version) | 1225B2 | 1300 | [Link](https://codeforces.com/problemset/problem/1225/B2) |
| 299 | Badges | 1214B | 1100 | [Link](https://codeforces.com/problemset/problem/1214/B) |
| 300 | Email from Polycarp | 1185B | 1200 | [Link](https://codeforces.com/problemset/problem/1185/B) |
| 301 | Ehab Fails to Be Thanos | 1174A | 1000 | [Link](https://codeforces.com/problemset/problem/1174/A) |
| 302 | Reverse a Substring | 1155A | 1000 | [Link](https://codeforces.com/problemset/problem/1155/A) |
| 303 | Draw! | 1131B | 1400 | [Link](https://codeforces.com/problemset/problem/1131/B) |
| 304 | Alyona and a Narrow Fridge | 1119B | 1300 | [Link](https://codeforces.com/problemset/problem/1119/B) |
| 305 | Digits Sequence Dividing | 1107A | 900 | [Link](https://codeforces.com/problemset/problem/1107/A) |
| 306 | LCM | 1068B | 1200 | [Link](https://codeforces.com/problemset/problem/1068/B) |
| 307 | Buying a TV Set | 1041B | 1000 | [Link](https://codeforces.com/problemset/problem/1041/B) |
| 308 | Palindrome Dance | 1040A | 1000 | [Link](https://codeforces.com/problemset/problem/1040/A) |
| 309 | Non-Coprime Partition | 1038B | 1100 | [Link](https://codeforces.com/problemset/problem/1038/B) |
| 310 | Reach Median | 1037B | 1300 | [Link](https://codeforces.com/contest/1037/problem/B) |
| 311 | Packets | 1037A | 1300 | [Link](https://codeforces.com/contest/1037/problem/A) |
| 312 | New Building for SIS | 1020A | 1000 | [Link](https://codeforces.com/problemset/problem/1020/A) |
| 313 | Planning The Expedition | 1011B | 1200 | [Link](https://codeforces.com/problemset/problem/1011/B) |
| 314 | Getting an A | 991B | 900 | [Link](https://codeforces.com/problemset/problem/991/B) |
| 315 | Row | 982A | 1200 | [Link](https://codeforces.com/problemset/problem/982/A) |
| 316 | Fafa and the Gates | 935B | 900 | [Link](https://codeforces.com/problemset/problem/935/B) |
| 317 | Fafa and his Company | 935A | 800 | [Link](https://codeforces.com/problemset/problem/935/A) |
| 318 | Cloning Toys | 922A | 1300 | [Link](https://codeforces.com/problemset/problem/922/A) |
| 319 | Divisiblity of Differences | 876B | 1300 | [Link](https://codeforces.com/problemset/problem/876/B) |
| 320 | Diversity | 844A | 1000 | [Link](https://codeforces.com/problemset/problem/844/A) |
| 321 | Average Sleep Time | 808B | 1300 | [Link](https://codeforces.com/problemset/problem/808/B) |
| 322 | k-Factorization | 797A | 1100 | [Link](https://codeforces.com/problemset/problem/797/A) |
| 323 | Anastasia and pebbles | 789A | 1100 | [Link](https://codeforces.com/problemset/problem/789/A) |
| 324 | The Monster | 787A | 1200 | [Link](https://codeforces.com/problemset/problem/787/A) |
| 325 | k-th divisor | 762A | 1400 | [Link](https://codeforces.com/problemset/problem/762/A) |
| 326 | Chloe and the sequence  | 743B | 1200 | [Link](https://codeforces.com/contest/743/problem/B) |
| 327 | Vladik and flights | 743A | 1200 | [Link](https://codeforces.com/contest/743/problem/A) |
| 328 | Anton and Digits | 734B | 800 | [Link](https://codeforces.com/problemset/problem/734/B) |
| 329 | Jumping Ball | 725A | 1000 | [Link](https://codeforces.com/problemset/problem/725/A) |
| 330 | Vacations | 698A | 1400 | [Link](https://codeforces.com/problemset/problem/698/A) |
| 331 | Elephant | 617A | 800 | [Link](https://codeforces.com/contest/617/problem/A) |
| 332 | New Year and Old Property | 611B | 1300 | [Link](https://codeforces.com/contest/611/problem/B) |
| 333 | Saitama Destroys Hotel | 608A | 1000 | [Link](https://codeforces.com/problemset/problem/608/A) |
| 334 | Olesya and Rodion | 584A | 1000 | [Link](https://codeforces.com/contest/584/problem/A) |
| 335 | Kefa and Company | 580B | 1500 | [Link](https://codeforces.com/problemset/problem/580/B) |
| 336 | Vasya and Petya's Game | 576A | 1500 | [Link](https://codeforces.com/problemset/problem/576/A) |
| 337 | Bear and Poker | 573A | 1300 | [Link](https://codeforces.com/contest/573/problem/A) |
| 338 | Quasi Binary | 538B | 1400 | [Link](https://codeforces.com/problemset/problem/538/B) |
| 339 | Chewbaсca and Number | 514A | 1200 | [Link](https://codeforces.com/contest/514/problem/A) |
| 340 | Anton and currency you all know | 508B | 1300 | [Link](https://codeforces.com/problemset/problem/508/B) |
| 341 | Amr and Music | 507A | 1000 | [Link](https://codeforces.com/contest/507/problem/A) |
| 342 | Modular Equations | 495B | 1600 | [Link](https://codeforces.com/problemset/problem/495/B) |
| 343 | Bits | 484A | 1700 | [Link](https://codeforces.com/problemset/problem/484/A) |
| 344 | Dreamoon and Stairs | 476A | 1000 | [Link](https://codeforces.com/problemset/problem/476/A) |
| 345 | I Wanna Be the Guy | 469A | 800 | [Link](https://codeforces.com/problemset/problem/469/A) |
| 346 | Appleman and Card Game | 462B | 1300 | [Link](https://codeforces.com/problemset/problem/462/B) |
| 347 | Pashmak and Flowers | 459B | 1300 | [Link](https://codeforces.com/problemset/problem/459/B) |
| 348 | Pashmak and Garden | 459A | 1200 | [Link](https://codeforces.com/problemset/problem/459/A) |
| 349 | Boredom | 455A | 1500 | [Link](https://codeforces.com/problemset/problem/455/a) |
| 350 | Little Pony and Sort by Shift | 454B | 1200 | [Link](https://codeforces.com/problemset/problem/454/B) |
| 351 | Jzzhu and Sequences | 450B | 1300 | [Link](https://codeforces.com/problemset/problem/450/B) |
| 352 | Kitahara Haruki's Gift | 433A | 1100 | [Link](https://codeforces.com/problemset/problem/433/A) |
| 353 | Megacity | 424B | 1200 | [Link](https://codeforces.com/problemset/problem/424/B) |
| 354 | Mashmokh and Numbers | 414A | 1500 | [Link](https://codeforces.com/problemset/problem/414/A) |
| 355 | Fox and Box Accumulation | 388A | 1400 | [Link](https://codeforces.com/contest/388/problem/A) |
| 356 | New Year Candles | 379A | 1000 | [Link](https://codeforces.com/contest/379/problem/A) |
| 357 | Fence | 363B | 1100 | [Link](https://codeforces.com/problemset/problem/363/B) |
| 358 | Levko and Permutation | 361B | 1200 | [Link](https://codeforces.com/contest/361/problem/B) |
| 359 | TL | 350A | 1200 | [Link](https://codeforces.com/problemset/problem/350/A) |
| 360 | Alice and Bob | 346A | 1600 | [Link](https://codeforces.com/problemset/problem/346/A) |
| 361 | Rational Resistance | 343A | 1600 | [Link](https://codeforces.com/problemset/problem/343/A) |
| 362 | Xenia and Divisors | 342A | 1200 | [Link](https://codeforces.com/problemset/problem/342/A) |
| 363 | Candy Bags | 334A | 1000 | [Link](https://codeforces.com/problemset/problem/334/A) |
| 364 | Hungry Sequence | 327B | 1200 | [Link](https://codeforces.com/problemset/problem/327/B) |
| 365 | Sereja and Bottles | 315A | 1400 | [Link](https://codeforces.com/problemset/problem/315/A) |
| 366 | Ilya and Queries | 313B | 1100 | [Link](https://codeforces.com/problemset/problem/313/B) |
| 367 | Yaroslav and Sequence | 301A | 1800 | [Link](https://codeforces.com/problemset/problem/301/A) |
| 368 | Greg and Array | 295A | 1400 | [Link](https://codeforces.com/problemset/problem/295/A) |
| 369 | Polo the Penguin and Matrix | 289B | 1400 | [Link](https://codeforces.com/problemset/problem/289/B) |
| 370 | Books | 279B | 1400 | [Link](https://codeforces.com/contest/279/problem/B) |
| 371 | Lights Out | 275A | 900 | [Link](https://codeforces.com/problemset/problem/275/A) |
| 372 | Prime Matrix | 271B | 1300 | [Link](https://codeforces.com/contest/271/problem/B) |
| 373 | Fancy Fence | 270A | 1100 | [Link](https://codeforces.com/problemset/problem/270/A) |
| 374 | Queue at the School | 266B | 800 | [Link](https://codeforces.com/problemset/problem/266/B) |
| 375 | Stones on the Table | 266A | 800 | [Link](https://codeforces.com/problemset/problem/266/A) |
| 376 | Adding Digits | 260A | 1400 | [Link](https://codeforces.com/problemset/problem/260/A) |
| 377 | Cards with Numbers | 254A | 1200 | [Link](https://codeforces.com/problemset/problem/254/A) |
| 378 | Boys and Girls | 253A | 1100 | [Link](https://codeforces.com/contest/253/problem/A) |
| 379 | Increase and Decrease | 246B | 1300 | [Link](https://codeforces.com/problemset/problem/246/B) |
| 380 | Two Bags of Potatoes | 239A | 1200 | [Link](https://codeforces.com/problemset/problem/239/A) |
| 381 | Easy Number Challenge | 236B | 1300 | [Link](https://codeforces.com/problemset/problem/236/B) |
| 382 | Little Elephant and Problem | 220A | 1300 | [Link](https://codeforces.com/contest/220/problem/A) |
| 383 | Cut Ribbon | 189A | 1300 | [Link](https://codeforces.com/problemset/problem/189/A) |
| 384 | Phone Code | 172A | 800 | [Link](https://codeforces.com/problemset/problem/172/A) |
| 385 | Burning Midnight Oil | 165B | 1500 | [Link](https://codeforces.com/contest/165/problem/B) |
| 386 | Colliders | 154B | 1600 | [Link](https://codeforces.com/problemset/problem/154/B) |
| 387 | Cifera | 114A | 1000 | [Link](https://codeforces.com/contest/114/problem/A) |
| 388 | Testing Pants for Sadness | 103A | 1100 | [Link](https://codeforces.com/problemset/problem/103/A) |
| 389 | Magical Array | 83A | 1300 | [Link](https://codeforces.com/problemset/problem/83/A) |
| 390 | Petya and Countryside | 66B | 1100 | [Link](https://codeforces.com/problemset/problem/66/B) |
| 391 | Where Are My Flakes? | 60A | 1300 | [Link](https://codeforces.com/contest/60/problem/A) |
| 392 | Bar | 56A | 1000 | [Link](https://codeforces.com/problemset/problem/56/A) |
| 393 | Reconnaissance | 32A | 800 | [Link](https://codeforces.com/problemset/problem/32/A) |
| 394 | Worms Evolution | 31A | 1200 | [Link](https://codeforces.com/problemset/problem/31/A) |
| 395 | Regular Bracket Sequence | 26B | 1400 | [Link](https://codeforces.com/problemset/problem/26/B) |
| 396 | Almost Prime | 26A | 900 | [Link](https://codeforces.com/contest/26/problem/A) |
| 397 | Watermelon | 4A | 800 | [Link](https://codeforces.com/problemset/problem/4/A) |
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
