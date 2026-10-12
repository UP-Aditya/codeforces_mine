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

**Total solutions uploaded:** 412
**Last updated:** 2026-10-11T22:00:55.803906
**Current day counter:** 83

**By rating:** 800 (133), 900 (56), 1000 (69), 1100 (50), 1200 (46), 1300 (30), 1400 (12), 1500 (5), 1600 (6), 1700 (2), 1800 (1), Unrated (2)

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
| 35 | Right Maximum | 2204B | 800 | [Link](https://codeforces.com/contest/2204/problem/B) |
| 36 | Passing the Ball | 2204A | 800 | [Link](https://codeforces.com/contest/2204/problem/A) |
| 37 | Beautiful Numbers | 2203B | 1000 | [Link](https://codeforces.com/contest/2203/problem/B) |
| 38 | Towers of Boxes | 2203A | 800 | [Link](https://codeforces.com/contest/2203/problem/A) |
| 39 | Parkour Design | 2202A | 800 | [Link](https://codeforces.com/contest/2202/problem/A) |
| 40 | Deletion Sort | 2200B | 800 | [Link](https://codeforces.com/contest/2200/problem/B) |
| 41 | Eating Game | 2200A | 800 | [Link](https://codeforces.com/contest/2200/problem/A) |
| 42 | Array and Permutation | 2197B | 1100 | [Link](https://codeforces.com/contest/2197/problem/B) |
| 43 | Friendly Numbers | 2197A | 800 | [Link](https://codeforces.com/contest/2197/problem/A) |
| 44 | Heapify 1 | 2195B | 900 | [Link](https://codeforces.com/contest/2195/problem/B) |
| 45 | Sieve of Erato67henes | 2195A | 800 | [Link](https://codeforces.com/contest/2195/problem/A) |
| 46 | Offshores | 2194B | 1000 | [Link](https://codeforces.com/contest/2194/problem/B) |
| 47 | Lawn Mower | 2194A | 800 | [Link](https://codeforces.com/contest/2194/problem/A) |
| 48 | Reverse a Permutation | 2193B | 800 | [Link](https://codeforces.com/contest/2193/problem/B) |
| 49 | DBMB and the Array | 2193A | 800 | [Link](https://codeforces.com/contest/2193/problem/A) |
| 50 | Flipping Binary String | 2192B | 1000 | [Link](https://codeforces.com/contest/2192/problem/B) |
| 51 | MEX Reordering | 2191B | 1000 | [Link](https://codeforces.com/contest/2191/problem/B) |
| 52 | Array Coloring | 2191A | 800 | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 53 | Sorting Game | 2190A | 1200 | [Link](https://codeforces.com/problemset/problem/2190/A) |
| 54 | Prefix Max | 2185B | 800 | [Link](https://codeforces.com/contest/2185/problem/B) |
| 55 | Perfect Root | 2185A | 800 | [Link](https://codeforces.com/contest/2185/problem/A) |
| 56 | Hourglass | 2184B | 1100 | [Link](https://codeforces.com/contest/2184/problem/B) |
| 57 | Social Experiment | 2184A | 800 | [Link](https://codeforces.com/contest/2184/problem/A) |
| 58 | New Year Cake | 2182B | 800 | [Link](https://codeforces.com/contest/2182/problem/B) |
| 59 | New Year String | 2182A | 800 | [Link](https://codeforces.com/contest/2182/problem/A) |
| 60 | Ashmal | 2180B | 800 | [Link](https://codeforces.com/problemset/problem/2180/B) |
| 61 | Carnival Wheel | 2180A | 800 | [Link](https://codeforces.com/problemset/problem/2180/A) |
| 62 | Impost or Sus | 2178B | 900 | [Link](https://codeforces.com/problemset/problem/2178/B) |
| 63 | Optimal Shifts | 2176B | 1000 | [Link](https://codeforces.com/contest/2176/problem/B) |
| 64 | Needle in a Haystack | 2174A | 1200 | [Link](https://codeforces.com/problemset/problem/2174/A) |
| 65 | Niko's Tactical Cards | 2173B | 1100 | [Link](https://codeforces.com/contest/2173/problem/B) |
| 66 | Shizuku Hoshikawa and Farm Legs | 2171A | 800 | [Link](https://codeforces.com/problemset/problem/2171/A) |
| 67 | Maximum Neighborhood | 2170A | 800 | [Link](https://codeforces.com/contest/2170/problem/A) |
| 68 | Drifting Away | 2169B | 1100 | [Link](https://codeforces.com/contest/2169/problem/B) |
| 69 | Square? | 2167A | 800 | [Link](https://codeforces.com/contest/2167/problem/A) |
| 70 | Even Modulo Pair | 2164B | 1000 | [Link](https://codeforces.com/contest/2164/problem/B) |
| 71 | Sequence Game | 2164A | 800 | [Link](https://codeforces.com/contest/2164/problem/A) |
| 72 | Souvlaki VS. Kalamaki | 2163A | 800 | [Link](https://codeforces.com/contest/2163/problem/A) |
| 73 | Beautiful String | 2162B | 1000 | [Link](https://codeforces.com/contest/2162/problem/B) |
| 74 | Beautiful Average | 2162A | 800 | [Link](https://codeforces.com/contest/2162/problem/A) |
| 75 | Distinct Elements | 2160B | 1100 | [Link](https://codeforces.com/problemset/problem/2160/B) |
| 76 | Suspension | 2158A | 800 | [Link](https://codeforces.com/contest/2158/problem/A) |
| 77 | Expansion Plan 2 | 2157B | 900 | [Link](https://codeforces.com/contest/2157/problem/B) |
| 78 | Dungeon Equilibrium | 2157A | 800 | [Link](https://codeforces.com/contest/2157/problem/A) |
| 79 | Pizza Time | 2156A | 800 | [Link](https://codeforces.com/contest/2156/problem/A) |
| 80 | Abraham's Great Escape | 2155B | 1100 | [Link](https://codeforces.com/contest/2155/problem/B) |
| 81 | El fucho | 2155A | 800 | [Link](https://codeforces.com/contest/2155/problem/A) |
| 82 | Make it Zigzag | 2154B | 1000 | [Link](https://codeforces.com/contest/2154/problem/B) |
| 83 | Notelock | 2154A | 800 | [Link](https://codeforces.com/contest/2154/problem/A) |
| 84 | Bitwise Reversion | 2153B | 800 | [Link](https://codeforces.com/contest/2153/problem/B) |
| 85 | Circle of Apple Trees | 2153A | 800 | [Link](https://codeforces.com/contest/2153/problem/A) |
| 86 | Catching the Krug | 2152B | 1300 | [Link](https://codeforces.com/contest/2152/problem/B) |
| 87 | Increase or Smash | 2152A | 800 | [Link](https://codeforces.com/contest/2152/problem/A) |
| 88 | Be Positive | 2149A | 800 | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 89 | Lasers | 2148B | 800 | [Link](https://codeforces.com/contest/2148/problem/B) |
| 90 | Sublime Sequence | 2148A | 800 | [Link](https://codeforces.com/contest/2148/problem/A) |
| 91 | Multiple Construction | 2147B | 1000 | [Link](https://codeforces.com/contest/2147/problem/B) |
| 92 | Shortest Increasing Path | 2147A | 800 | [Link](https://codeforces.com/contest/2147/problem/A) |
| 93 | Merging the Sets | 2146B | 1100 | [Link](https://codeforces.com/contest/2146/problem/B) |
| 94 | Equal Occurrences | 2146A | 800 | [Link](https://codeforces.com/contest/2146/problem/A) |
| 95 | Deck of Cards | 2145B | 1000 | [Link](https://codeforces.com/contest/2145/problem/B) |
| 96 | Discounts | 2143B | 1000 | [Link](https://codeforces.com/contest/2143/problem/B) |
| 97 | All Lengths Subtraction | 2143A | 800 | [Link](https://codeforces.com/contest/2143/problem/A) |
| 98 | Games | 2141B | 1200 | [Link](https://codeforces.com/problemset/problem/2141/B) |
| 99 | Furniture Store | 2141A | 800 | [Link](https://codeforces.com/problemset/problem/2141/A) |
| 100 | Another Divisibility Problem | 2140B | 900 | [Link](https://codeforces.com/problemset/problem/2140/B) |
| 101 | Shift Sort | 2140A | 800 | [Link](https://codeforces.com/contest/2140/problem/A) |
| 102 | Cake Collection | 2139B | 800 | [Link](https://codeforces.com/contest/2139/problem/B) |
| 103 | Maple and Multiplication | 2139A | 800 | [Link](https://codeforces.com/contest/2139/problem/A) |
| 104 | Fun Permutation | 2137B | 900 | [Link](https://codeforces.com/contest/2137/problem/B) |
| 105 | Collatz Conjecture | 2137A | 800 | [Link](https://codeforces.com/contest/2137/problem/A) |
| 106 | In the Dream | 2136A | 800 | [Link](https://codeforces.com/problemset/problem/2136/A) |
| 107 | Add 0 or K | 2134B | 1200 | [Link](https://codeforces.com/problemset/problem/2134/B) |
| 108 | Pathless | 2130B | 1100 | [Link](https://codeforces.com/contest/2130/problem/B) |
| 109 | Mix Mex Max | 2127A | 800 | [Link](https://codeforces.com/problemset/problem/2127/A) |
| 110 | No Casino in the Mountains | 2126B | 800 | [Link](https://codeforces.com/contest/2126/problem/B) |
| 111 | Left and Down | 2125B | 900 | [Link](https://codeforces.com/contest/2125/problem/B) |
| 112 | Difficult Contest | 2125A | 800 | [Link](https://codeforces.com/contest/2125/problem/A) |
| 113 | Minimise Sum | 2124B | 1000 | [Link](https://codeforces.com/contest/2124/problem/B) |
| 114 | Pile Shuffling | 2122B | 1100 | [Link](https://codeforces.com/contest/2122/problem/B) |
| 115 | Above the Clouds | 2121B | 800 | [Link](https://codeforces.com/contest/2121/problem/B) |
| 116 | Square of Rectangles | 2120A | 800 | [Link](https://codeforces.com/problemset/problem/2120/A) |
| 117 | Line Segments | 2119B | 1200 | [Link](https://codeforces.com/contest/2119/problem/B) |
| 118 | Energy Crystals | 2111A | 800 | [Link](https://codeforces.com/problemset/problem/2111/A) |
| 119 | Apples in Boxes | 2107B | 1100 | [Link](https://codeforces.com/problemset/problem/2107/B) |
| 120 | LRC and VIP | 2107A | 800 | [Link](https://codeforces.com/problemset/problem/2107/A) |
| 121 | Dr. TC | 2106A | 800 | [Link](https://codeforces.com/contest/2106/problem/A) |
| 122 | Move to the End | 2104B | 1000 | [Link](https://codeforces.com/problemset/problem/2104/B) |
| 123 | Dinner Time | 2102A | 900 | [Link](https://codeforces.com/problemset/problem/2102/A) |
| 124 | Wonderful Sticks | 2096A | 800 | [Link](https://codeforces.com/contest/2096/problem/A) |
| 125 | Kamilka and the Sheep | 2092A | 800 | [Link](https://codeforces.com/problemset/problem/2092/A) |
| 126 | Treasure Hunt | 2090A | 800 | [Link](https://codeforces.com/problemset/problem/2090/A) |
| 127 | Serval and Final MEX | 2085B | 1200 | [Link](https://codeforces.com/problemset/problem/2085/B) |
| 128 | Having Been a Treasurer in the Past, I Help Goblins Deceive | 2072B | 900 | [Link](https://codeforces.com/problemset/problem/2072/B) |
| 129 | Robot Program | 2070B | 1100 | [Link](https://codeforces.com/problemset/problem/2070/B) |
| 130 | Adjacent Digit Sums | 2067A | 800 | [Link](https://codeforces.com/contest/2067/problem/A) |
| 131 | Kevin and Geometry | 2061B | 1100 | [Link](https://codeforces.com/problemset/problem/2061/B) |
| 132 | Kevin and Arithmetic | 2061A | 800 | [Link](https://codeforces.com/contest/2061/problem/A) |
| 133 | Crafting | 2055B | 1000 | [Link](https://codeforces.com/problemset/problem/2055/B) |
| 134 | Preparing for the Olympiad | 2051A | 800 | [Link](https://codeforces.com/problemset/problem/2051/A) |
| 135 | Replace Character | 2047B | 900 | [Link](https://codeforces.com/problemset/problem/2047/B) |
| 136 | Easy Problem | 2044A | 800 | [Link](https://codeforces.com/problemset/problem/2044/A) |
| 137 | Digits | 2043B | 1100 | [Link](https://codeforces.com/contest/2043/problem/B) |
| 138 | Bowling Frame | 2041B | 1200 | [Link](https://codeforces.com/problemset/problem/2041/B) |
| 139 | Shohag Loves Strings | 2039B | 1000 | [Link](https://codeforces.com/problemset/problem/2039/B) |
| 140 | Bonus Project | 2038A | 1400 | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 141 | Rakhsh's Revival | 2034B | 1000 | [Link](https://codeforces.com/contest/2034/problem/B) |
| 142 | King Keykhosrow's Mystery | 2034A | 800 | [Link](https://codeforces.com/contest/2034/problem/A) |
| 143 | Penchick and Satay Sticks | 2031B | 900 | [Link](https://codeforces.com/problemset/problem/2031/B) |
| 144 | Penchick and Modern Monument | 2031A | 800 | [Link](https://codeforces.com/problemset/problem/2031/A) |
| 145 | Replacement | 2029B | 1100 | [Link](https://codeforces.com/problemset/problem/2029/B) |
| 146 | Alice's Adventures in ''Chess'' | 2028A | 900 | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 147 | Maximize Mex | 2021B | 1200 | [Link](https://codeforces.com/problemset/problem/2021/B) |
| 148 | Brightness Begins | 2020B | 1200 | [Link](https://codeforces.com/problemset/problem/2020/B) |
| 149 | Battle for Survive | 2013B | 900 | [Link](https://codeforces.com/problemset/problem/2013/B) |
| 150 | Sakurako's Exam | 2008A | 800 | [Link](https://codeforces.com/contest/2008/problem/A) |
| 151 | The Strict Teacher (Hard Version) | 2005B2 | 1200 | [Link](https://codeforces.com/contest/2005/problem/B2) |
| 152 | Simple Palindrome | 2005A | 900 | [Link](https://codeforces.com/problemset/problem/2005/A) |
| 153 | Game with Doors | 2004B | 1000 | [Link](https://codeforces.com/problemset/problem/2004/B) |
| 154 | Seating in a Bus | 2000B | 800 | [Link](https://codeforces.com/problemset/problem/2000/B) |
| 155 | Minimize Equal Sum Subarrays | 1998B | 1000 | [Link](https://codeforces.com/problemset/problem/1998/B) |
| 156 | Parity and Sum | 1993B | 1100 | [Link](https://codeforces.com/problemset/problem/1993/B) |
| 157 | Angry Monk | 1992B | 800 | [Link](https://codeforces.com/contest/1992/problem/B) |
| 158 | Only Pluses | 1992A | 800 | [Link](https://codeforces.com/contest/1992/problem/A) |
| 159 | AND Reconstruction | 1991B | 1100 | [Link](https://codeforces.com/problemset/problem/1991/B) |
| 160 | Array Craft | 1990B | 1200 | [Link](https://codeforces.com/problemset/problem/1990/B) |
| 161 | Submission Bait | 1990A | 900 | [Link](https://codeforces.com/problemset/problem/1990/A) |
| 162 | Split the Multiset | 1988A | 900 | [Link](https://codeforces.com/problemset/problem/1988/A) |
| 163 | X Axis | 1986A | 800 | [Link](https://codeforces.com/problemset/problem/1986/A) |
| 164 | 378QAQ and Mocha's Array | 1975B | 1000 | [Link](https://codeforces.com/problemset/problem/1975/B) |
| 165 | Cat, Fox and the Lonely Array | 1973B | 1300 | [Link](https://codeforces.com/problemset/problem/1973/B) |
| 166 | Coin Games | 1972B | 900 | [Link](https://codeforces.com/problemset/problem/1972/B) |
| 167 | Contest Proposal | 1972A | 800 | [Link](https://codeforces.com/problemset/problem/1972/A) |
| 168 | A BIT of a Construction | 1957B | 1100 | [Link](https://codeforces.com/problemset/problem/1957/B) |
| 169 | Nene and the Card Game | 1956B | 800 | [Link](https://codeforces.com/problemset/problem/1956/B) |
| 170 | Progressive Square | 1955B | 1000 | [Link](https://codeforces.com/problemset/problem/1955/B) |
| 171 | Make It Ugly | 1954B | 1200 | [Link](https://codeforces.com/problemset/problem/1954/B) |
| 172 | Painting the Ribbon | 1954A | 900 | [Link](https://codeforces.com/contest/1954/problem/A) |
| 173 | Battle Cows | 1951B | 1200 | [Link](https://codeforces.com/problemset/problem/1951/B) |
| 174 | Dual Trigger | 1951A | 900 | [Link](https://codeforces.com/problemset/problem/1951/A) |
| 175 | Median of an Array | 1946A | 800 | [Link](https://codeforces.com/contest/1946/problem/A) |
| 176 | MEX Game 1 | 1943A | 1300 | [Link](https://codeforces.com/problemset/problem/1943/A) |
| 177 | Rudolf and 121 | 1941B | 1000 | [Link](https://codeforces.com/problemset/problem/1941/B) |
| 178 | Chaya Calendar | 1932B | 1100 | [Link](https://codeforces.com/problemset/problem/1932/B) |
| 179 | Recovering a Small String | 1931A | 800 | [Link](https://codeforces.com/problemset/problem/1931/A) |
| 180 | Permutation Printing | 1930B | 1000 | [Link](https://codeforces.com/problemset/problem/1930/B) |
| 181 | Maximise The Score | 1930A | 800 | [Link](https://codeforces.com/contest/1930/problem/A) |
| 182 | Following the String | 1927B | 900 | [Link](https://codeforces.com/problemset/problem/1927/B) |
| 183 | A Balanced Problemset? | 1925B | 1200 | [Link](https://codeforces.com/contest/1925/problem/B) |
| 184 | Plus-Minus Split | 1919B | 800 | [Link](https://codeforces.com/problemset/problem/1919/B) |
| 185 | Minimize Inversions | 1918B | 900 | [Link](https://codeforces.com/problemset/problem/1918/B) |
| 186 | 2023 | 1916A | 800 | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 187 | Problemsolving Log | 1914A | 800 | [Link](https://codeforces.com/contest/1914/problem/A) |
| 188 | Make Almost Equal With Mod | 1909B | 1200 | [Link](https://codeforces.com/problemset/problem/1909/B) |
| 189 | Rook | 1907A | 800 | [Link](https://codeforces.com/problemset/problem/1907/A) |
| 190 | Collecting Game | 1904B | 1100 | [Link](https://codeforces.com/problemset/problem/1904/B) |
| 191 | Forked! | 1904A | 900 | [Link](https://codeforces.com/problemset/problem/1904/A) |
| 192 | Getting Points | 1902B | 1100 | [Link](https://codeforces.com/problemset/problem/1902/B) |
| 193 | Game with Integers | 1899A | 800 | [Link](https://codeforces.com/contest/1899/problem/A) |
| 194 | Deja Vu | 1891B | 1100 | [Link](https://codeforces.com/problemset/problem/1891/B) |
| 195 | Sum of Three | 1886A | 800 | [Link](https://codeforces.com/problemset/problem/1886/A) |
| 196 | Haunted House | 1884B | 1100 | [Link](https://codeforces.com/contest/1884/problem/B) |
| 197 | Chemistry | 1883B | 900 | [Link](https://codeforces.com/problemset/problem/1883/B) |
| 198 | Don't Try to Count | 1881A | 800 | [Link](https://codeforces.com/problemset/problem/1881/A) |
| 199 | How Much Does Daytona Cost? | 1878A | 800 | [Link](https://codeforces.com/problemset/problem/1878/A) |
| 200 | Goals of Victory | 1877A | 800 | [Link](https://codeforces.com/problemset/problem/1877/A) |
| 201 | Helmets in Night Light | 1876A | 1000 | [Link](https://codeforces.com/problemset/problem/1876/A) |
| 202 | Jellyfish and Undertale | 1875A | 900 | [Link](https://codeforces.com/problemset/problem/1875/A) |
| 203 | Jellyfish and Game | 1874A | 1200 | [Link](https://codeforces.com/problemset/problem/1874/A) |
| 204 | 2D Traveling | 1869B | 1100 | [Link](https://codeforces.com/problemset/problem/1869/B) |
| 205 | Make It Zero | 1869A | 900 | [Link](https://codeforces.com/problemset/problem/1869/A) |
| 206 | green_gold_dog, array and permutation | 1867A | 800 | [Link](https://codeforces.com/contest/1867/problem/A) |
| 207 | Sequence Game | 1862B | 800 | [Link](https://codeforces.com/problemset/problem/1862/B) |
| 208 | Prime Deletion | 1861A | 800 | [Link](https://codeforces.com/problemset/problem/1861/A) |
| 209 | Olya and Game with Arrays | 1859B | 1000 | [Link](https://codeforces.com/problemset/problem/1859/B) |
| 210 | United We Stand | 1859A | 800 | [Link](https://codeforces.com/problemset/problem/1859/A) |
| 211 | Good Arrays | 1856B | 900 | [Link](https://codeforces.com/contest/1856/problem/B) |
| 212 | Longest Divisors Interval | 1855B | 900 | [Link](https://codeforces.com/problemset/problem/1855/B) |
| 213 | Desorting | 1853A | 800 | [Link](https://codeforces.com/contest/1853/problem/A) |
| 214 | Monsters | 1849B | 1000 | [Link](https://codeforces.com/problemset/problem/1849/B) |
| 215 | Morning Sandwich | 1849A | 800 | [Link](https://codeforces.com/problemset/problem/1849/A) |
| 216 | Forbidden Integer | 1845A | 800 | [Link](https://codeforces.com/problemset/problem/1845/A) |
| 217 | Permutations & Primes | 1844B | 1000 | [Link](https://codeforces.com/problemset/problem/1844/B) |
| 218 | Game with Board | 1841A | 800 | [Link](https://codeforces.com/contest/1841/problem/A) |
| 219 | Lamps | 1839B | 1100 | [Link](https://codeforces.com/problemset/problem/1839/B) |
| 220 | Comparison String | 1837B | 900 | [Link](https://codeforces.com/problemset/problem/1837/B) |
| 221 | Grasshopper on a Line | 1837A | 800 | [Link](https://codeforces.com/contest/1837/problem/A) |
| 222 | Unit Array | 1834A | 800 | [Link](https://codeforces.com/contest/1834/problem/A) |
| 223 | Restore the Weather | 1833B | 900 | [Link](https://codeforces.com/problemset/problem/1833/B) |
| 224 | Maximum Sum | 1832B | 1100 | [Link](https://codeforces.com/problemset/problem/1832/B) |
| 225 | Array merging | 1831B | 1000 | [Link](https://codeforces.com/problemset/problem/1831/B) |
| 226 | Twin Permutations | 1831A | 800 | [Link](https://codeforces.com/problemset/problem/1831/A) |
| 227 | Divisible Array | 1828A | 800 | [Link](https://codeforces.com/problemset/problem/1828/A) |
| 228 | Counting Orders | 1827A | 1100 | [Link](https://codeforces.com/problemset/problem/1827/A) |
| 229 | Lunatic Never Content | 1826B | 1100 | [Link](https://codeforces.com/problemset/problem/1826/B) |
| 230 | TubeTube Feed | 1822A | 800 | [Link](https://codeforces.com/problemset/problem/1822/A) |
| 231 | JoJo's Incredible Adventures | 1820B | 1100 | [Link](https://codeforces.com/problemset/problem/1820/B) |
| 232 | Grid Reconstruction | 1816B | 1000 | [Link](https://codeforces.com/problemset/problem/1816/B) |
| 233 | Coins | 1814A | 800 | [Link](https://codeforces.com/problemset/problem/1814/A) |
| 234 | Conveyor Belts | 1811B | 1000 | [Link](https://codeforces.com/problemset/problem/1811/B) |
| 235 | Candies | 1810B | 800 | [Link](https://codeforces.com/problemset/problem/1810/B) |
| 236 | Playing in a Casino | 1808B | 1200 | [Link](https://codeforces.com/problemset/problem/1808/B) |
| 237 | Walking Master | 1806A | 800 | [Link](https://codeforces.com/problemset/problem/1806/A) |
| 238 | We Need the Zero | 1805A | 800 | [Link](https://codeforces.com/problemset/problem/1805/A) |
| 239 | Count the Number of Pairs | 1800B | 1000 | [Link](https://codeforces.com/problemset/problem/1800/B) |
| 240 | Not Dividing | 1794B | 900 | [Link](https://codeforces.com/problemset/problem/1794/B) |
| 241 | Fedya and Array | 1793B | 1100 | [Link](https://codeforces.com/problemset/problem/1793/B) |
| 242 | Serval and Mocha's Array | 1789A | 800 | [Link](https://codeforces.com/problemset/problem/1789/A) |
| 243 | Number Factorization | 1787B | 1100 | [Link](https://codeforces.com/problemset/problem/1787/B) |
| 244 | Going to the Cinema | 1781B | 1000 | [Link](https://codeforces.com/contest/1781/problem/B) |
| 245 | GCD Partition | 1780B | 1100 | [Link](https://codeforces.com/problemset/problem/1780/B) |
| 246 | Koxia and Permutation | 1770B | 1000 | [Link](https://codeforces.com/contest/1770/problem/B) |
| 247 | Koxia and Whiteboards | 1770A | 1000 | [Link](https://codeforces.com/problemset/problem/1770/A) |
| 248 | Notepad# | 1766B | 1000 | [Link](https://codeforces.com/contest/1766/problem/B) |
| 249 | Extremely Round | 1766A | 800 | [Link](https://codeforces.com/problemset/problem/1766/A) |
| 250 | Broken Keyboard | 1765B | 800 | [Link](https://codeforces.com/problemset/problem/1765/B) |
| 251 | Incinerate | 1763B | 1200 | [Link](https://codeforces.com/problemset/problem/1763/B) |
| 252 | Elimination of a Ring | 1761B | 1000 | [Link](https://codeforces.com/problemset/problem/1761/B) |
| 253 | Indirect Sort | 1750A | 800 | [Link](https://codeforces.com/contest/1750/problem/A) |
| 254 | Number Replacement | 1744A | 800 | [Link](https://codeforces.com/problemset/problem/1744/A) |
| 255 | Playing with GCD | 1736B | 1200 | [Link](https://codeforces.com/problemset/problem/1736/B) |
| 256 | Rule of League | 1733B | 900 | [Link](https://codeforces.com/problemset/problem/1733/B) |
| 257 | Bestie | 1732A | 1000 | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 258 | Kill Demodogs | 1731B | 1100 | [Link](https://codeforces.com/problemset/problem/1731/B) |
| 259 | Mainak and Array | 1726A | 900 | [Link](https://codeforces.com/problemset/problem/1726/A) |
| 260 | Basketball Together | 1725B | 1000 | [Link](https://codeforces.com/problemset/problem/1725/B) |
| 261 | Beautiful Array | 1715B | 1000 | [Link](https://codeforces.com/problemset/problem/1715/B) |
| 262 | Luke is a Foodie | 1704B | 1000 | [Link](https://codeforces.com/problemset/problem/1704/B) |
| 263 | Promo | 1697B | 900 | [Link](https://codeforces.com/problemset/problem/1697/B) |
| 264 | NIT Destroys the Universe | 1696B | 900 | [Link](https://codeforces.com/problemset/problem/1696/B) |
| 265 | Circle Game | 1695B | 1000 | [Link](https://codeforces.com/problemset/problem/1695/B) |
| 266 | Shoe Shuffling | 1691B | 1000 | [Link](https://codeforces.com/problemset/problem/1691/B) |
| 267 | A Perfectly Balanced String? | 1673B | 1100 | [Link](https://codeforces.com/problemset/problem/1673/B) |
| 268 | Array Cloning Technique | 1665B | 900 | [Link](https://codeforces.com/problemset/problem/1665/B) |
| 269 | DIV + MOD | 1650B | 900 | [Link](https://codeforces.com/problemset/problem/1650/B) |
| 270 | Roof Construction | 1632B | 1000 | [Link](https://codeforces.com/problemset/problem/1632/B) |
| 271 | Fun with Even Subarrays | 1631B | 1100 | [Link](https://codeforces.com/problemset/problem/1631/B) |
| 272 | Make AP | 1624B | 900 | [Link](https://codeforces.com/problemset/problem/1624/B) |
| 273 | Divan and a New Project  | 1614B | 1000 | [Link](https://codeforces.com/problemset/problem/1614/B) |
| 274 | Kalindrome Array | 1610B | 1100 | [Link](https://codeforces.com/problemset/problem/1610/B) |
| 275 | Odd Grasshopper | 1607B | 900 | [Link](https://codeforces.com/problemset/problem/1607/B) |
| 276 | AB Balance | 1606A | 900 | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 277 | Make it Divisible by 25 | 1593B | 900 | [Link](https://codeforces.com/problemset/problem/1593/B) |
| 278 | MEXor Mixup | 1567B | 1000 | [Link](https://codeforces.com/problemset/problem/1567/B) |
| 279 | Mocha and Math | 1559A | 900 | [Link](https://codeforces.com/problemset/problem/1559/A) |
| 280 | Reverse String | 1553B | 1300 | [Link](https://codeforces.com/contest/1553/problem/B) |
| 281 | Exciting Bets | 1543A | 900 | [Link](https://codeforces.com/problemset/problem/1543/A) |
| 282 | Pleasant Pairs | 1541B | 1200 | [Link](https://codeforces.com/problemset/problem/1541/B) |
| 283 | Bad Boy | 1537B | 900 | [Link](https://codeforces.com/problemset/problem/1537/B) |
| 284 | Prinzessin der Verurteilung | 1536B | 1200 | [Link](https://codeforces.com/problemset/problem/1536/B) |
| 285 | Permutation Sort | 1525B | 900 | [Link](https://codeforces.com/problemset/problem/1525/B) |
| 286 | Nastia and a Good Array | 1521B | 1300 | [Link](https://codeforces.com/problemset/problem/1521/B) |
| 287 | Flip the Bits | 1504B | 1200 | [Link](https://codeforces.com/problemset/problem/1504/B) |
| 288 | M-arrays | 1497B | 1200 | [Link](https://codeforces.com/problemset/problem/1497/B) |
| 289 | Cat Cycle | 1487B | 1200 | [Link](https://codeforces.com/problemset/problem/1487/B) |
| 290 | Add and Divide | 1485A | 1000 | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 291 | Searching Local Minimum | 1479A | 1700 | [Link](https://codeforces.com/contest/1479/problem/A) |
| 292 | Strange Partition | 1471A | 900 | [Link](https://codeforces.com/problemset/problem/1471/A) |
| 293 | Row GCD | 1458A | 1600 | [Link](https://codeforces.com/problemset/problem/1458/A) |
| 294 | Buying Torches | 1418A | 1000 | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 295 | Fair Numbers | 1411B | 1000 | [Link](https://codeforces.com/problemset/problem/1411/B) |
| 296 | Three Indices | 1380A | 900 | [Link](https://codeforces.com/problemset/problem/1380/A) |
| 297 | Multiply by 2, divide by 6 | 1374B | 900 | [Link](https://codeforces.com/problemset/problem/1374/B) |
| 298 | 01 Game | 1373B | 900 | [Link](https://codeforces.com/problemset/problem/1373/B) |
| 299 | Omkar and Last Class of Math | 1372B | 1300 | [Link](https://codeforces.com/problemset/problem/1372/B) |
| 300 | Most socially-distanced subsequence | 1364B | 1300 | [Link](https://codeforces.com/contest/1364/problem/B) |
| 301 | Johnny and Ancient Computer | 1362A | 1000 | [Link](https://codeforces.com/problemset/problem/1362/A) |
| 302 | Orac and LCM | 1349A | 1600 | [Link](https://codeforces.com/problemset/problem/1349/A) |
| 303 | Nastya and Door | 1341B | 1300 | [Link](https://codeforces.com/contest/1341/problem/B) |
| 304 | Sum of Odd Integers | 1327A | 1100 | [Link](https://codeforces.com/contest/1327/problem/A) |
| 305 | Bogosort | 1312B | 1000 | [Link](https://codeforces.com/problemset/problem/1312/B) |
| 306 | Just Eat It! | 1285B | 1300 | [Link](https://codeforces.com/problemset/problem/1285/B) |
| 307 | Heating | 1260A | 1000 | [Link](https://codeforces.com/problemset/problem/1260/A) |
| 308 | Balanced Tunnel | 1237B | 1300 | [Link](https://codeforces.com/contest/1237/problem/B) |
| 309 | TV Subscriptions (Hard Version) | 1225B2 | 1300 | [Link](https://codeforces.com/problemset/problem/1225/B2) |
| 310 | Badges | 1214B | 1100 | [Link](https://codeforces.com/problemset/problem/1214/B) |
| 311 | Email from Polycarp | 1185B | 1200 | [Link](https://codeforces.com/problemset/problem/1185/B) |
| 312 | Ehab Fails to Be Thanos | 1174A | 1000 | [Link](https://codeforces.com/problemset/problem/1174/A) |
| 313 | Reverse a Substring | 1155A | 1000 | [Link](https://codeforces.com/problemset/problem/1155/A) |
| 314 | Draw! | 1131B | 1400 | [Link](https://codeforces.com/problemset/problem/1131/B) |
| 315 | Alyona and a Narrow Fridge | 1119B | 1300 | [Link](https://codeforces.com/problemset/problem/1119/B) |
| 316 | Digits Sequence Dividing | 1107A | 900 | [Link](https://codeforces.com/problemset/problem/1107/A) |
| 317 | LCM | 1068B | 1200 | [Link](https://codeforces.com/problemset/problem/1068/B) |
| 318 | Buying a TV Set | 1041B | 1000 | [Link](https://codeforces.com/problemset/problem/1041/B) |
| 319 | Palindrome Dance | 1040A | 1000 | [Link](https://codeforces.com/problemset/problem/1040/A) |
| 320 | Non-Coprime Partition | 1038B | 1100 | [Link](https://codeforces.com/problemset/problem/1038/B) |
| 321 | Reach Median | 1037B | 1300 | [Link](https://codeforces.com/contest/1037/problem/B) |
| 322 | Packets | 1037A | 1300 | [Link](https://codeforces.com/contest/1037/problem/A) |
| 323 | New Building for SIS | 1020A | 1000 | [Link](https://codeforces.com/problemset/problem/1020/A) |
| 324 | Planning The Expedition | 1011B | 1200 | [Link](https://codeforces.com/problemset/problem/1011/B) |
| 325 | Getting an A | 991B | 900 | [Link](https://codeforces.com/problemset/problem/991/B) |
| 326 | Row | 982A | 1200 | [Link](https://codeforces.com/problemset/problem/982/A) |
| 327 | Fafa and the Gates | 935B | 900 | [Link](https://codeforces.com/problemset/problem/935/B) |
| 328 | Fafa and his Company | 935A | 800 | [Link](https://codeforces.com/problemset/problem/935/A) |
| 329 | Cloning Toys | 922A | 1300 | [Link](https://codeforces.com/problemset/problem/922/A) |
| 330 | Divisiblity of Differences | 876B | 1300 | [Link](https://codeforces.com/problemset/problem/876/B) |
| 331 | Diversity | 844A | 1000 | [Link](https://codeforces.com/problemset/problem/844/A) |
| 332 | Average Sleep Time | 808B | 1300 | [Link](https://codeforces.com/problemset/problem/808/B) |
| 333 | k-Factorization | 797A | 1100 | [Link](https://codeforces.com/problemset/problem/797/A) |
| 334 | Anastasia and pebbles | 789A | 1100 | [Link](https://codeforces.com/problemset/problem/789/A) |
| 335 | The Monster | 787A | 1200 | [Link](https://codeforces.com/problemset/problem/787/A) |
| 336 | Sherlock and his girlfriend | 776B | 1200 | [Link](https://codeforces.com/problemset/problem/776/B) |
| 337 | k-th divisor | 762A | 1400 | [Link](https://codeforces.com/problemset/problem/762/A) |
| 338 | Chloe and the sequence  | 743B | 1200 | [Link](https://codeforces.com/contest/743/problem/B) |
| 339 | Vladik and flights | 743A | 1200 | [Link](https://codeforces.com/contest/743/problem/A) |
| 340 | Anton and Digits | 734B | 800 | [Link](https://codeforces.com/problemset/problem/734/B) |
| 341 | Jumping Ball | 725A | 1000 | [Link](https://codeforces.com/problemset/problem/725/A) |
| 342 | Vacations | 698A | 1400 | [Link](https://codeforces.com/problemset/problem/698/A) |
| 343 | Elephant | 617A | 800 | [Link](https://codeforces.com/contest/617/problem/A) |
| 344 | New Year and Old Property | 611B | 1300 | [Link](https://codeforces.com/contest/611/problem/B) |
| 345 | Saitama Destroys Hotel | 608A | 1000 | [Link](https://codeforces.com/problemset/problem/608/A) |
| 346 | Olesya and Rodion | 584A | 1000 | [Link](https://codeforces.com/contest/584/problem/A) |
| 347 | Kefa and Company | 580B | 1500 | [Link](https://codeforces.com/problemset/problem/580/B) |
| 348 | Vasya and Petya's Game | 576A | 1500 | [Link](https://codeforces.com/problemset/problem/576/A) |
| 349 | Bear and Poker | 573A | 1300 | [Link](https://codeforces.com/contest/573/problem/A) |
| 350 | Quasi Binary | 538B | 1400 | [Link](https://codeforces.com/problemset/problem/538/B) |
| 351 | Chewbaсca and Number | 514A | 1200 | [Link](https://codeforces.com/contest/514/problem/A) |
| 352 | Anton and currency you all know | 508B | 1300 | [Link](https://codeforces.com/problemset/problem/508/B) |
| 353 | Amr and Music | 507A | 1000 | [Link](https://codeforces.com/contest/507/problem/A) |
| 354 | Modular Equations | 495B | 1600 | [Link](https://codeforces.com/problemset/problem/495/B) |
| 355 | Bits | 484A | 1700 | [Link](https://codeforces.com/problemset/problem/484/A) |
| 356 | Dreamoon and Stairs | 476A | 1000 | [Link](https://codeforces.com/problemset/problem/476/A) |
| 357 | I Wanna Be the Guy | 469A | 800 | [Link](https://codeforces.com/problemset/problem/469/A) |
| 358 | Appleman and Card Game | 462B | 1300 | [Link](https://codeforces.com/problemset/problem/462/B) |
| 359 | Pashmak and Flowers | 459B | 1300 | [Link](https://codeforces.com/problemset/problem/459/B) |
| 360 | Pashmak and Garden | 459A | 1200 | [Link](https://codeforces.com/problemset/problem/459/A) |
| 361 | Boredom | 455A | 1500 | [Link](https://codeforces.com/problemset/problem/455/a) |
| 362 | Little Pony and Sort by Shift | 454B | 1200 | [Link](https://codeforces.com/problemset/problem/454/B) |
| 363 | Jzzhu and Sequences | 450B | 1300 | [Link](https://codeforces.com/problemset/problem/450/B) |
| 364 | Kitahara Haruki's Gift | 433A | 1100 | [Link](https://codeforces.com/problemset/problem/433/A) |
| 365 | Megacity | 424B | 1200 | [Link](https://codeforces.com/problemset/problem/424/B) |
| 366 | Mashmokh and Numbers | 414A | 1500 | [Link](https://codeforces.com/problemset/problem/414/A) |
| 367 | Fox and Box Accumulation | 388A | 1400 | [Link](https://codeforces.com/contest/388/problem/A) |
| 368 | New Year Candles | 379A | 1000 | [Link](https://codeforces.com/contest/379/problem/A) |
| 369 | Fence | 363B | 1100 | [Link](https://codeforces.com/problemset/problem/363/B) |
| 370 | Levko and Permutation | 361B | 1200 | [Link](https://codeforces.com/contest/361/problem/B) |
| 371 | TL | 350A | 1200 | [Link](https://codeforces.com/problemset/problem/350/A) |
| 372 | Alice and Bob | 346A | 1600 | [Link](https://codeforces.com/problemset/problem/346/A) |
| 373 | Rational Resistance | 343A | 1600 | [Link](https://codeforces.com/problemset/problem/343/A) |
| 374 | Xenia and Divisors | 342A | 1200 | [Link](https://codeforces.com/problemset/problem/342/A) |
| 375 | Candy Bags | 334A | 1000 | [Link](https://codeforces.com/problemset/problem/334/A) |
| 376 | Hungry Sequence | 327B | 1200 | [Link](https://codeforces.com/problemset/problem/327/B) |
| 377 | Sereja and Bottles | 315A | 1400 | [Link](https://codeforces.com/problemset/problem/315/A) |
| 378 | Ilya and Queries | 313B | 1100 | [Link](https://codeforces.com/problemset/problem/313/B) |
| 379 | Yaroslav and Sequence | 301A | 1800 | [Link](https://codeforces.com/problemset/problem/301/A) |
| 380 | Sail | 298B | 1200 | [Link](https://codeforces.com/problemset/problem/298/B) |
| 381 | Greg and Array | 295A | 1400 | [Link](https://codeforces.com/problemset/problem/295/A) |
| 382 | Polo the Penguin and Matrix | 289B | 1400 | [Link](https://codeforces.com/problemset/problem/289/B) |
| 383 | Books | 279B | 1400 | [Link](https://codeforces.com/contest/279/problem/B) |
| 384 | Lights Out | 275A | 900 | [Link](https://codeforces.com/problemset/problem/275/A) |
| 385 | Prime Matrix | 271B | 1300 | [Link](https://codeforces.com/contest/271/problem/B) |
| 386 | Fancy Fence | 270A | 1100 | [Link](https://codeforces.com/problemset/problem/270/A) |
| 387 | Queue at the School | 266B | 800 | [Link](https://codeforces.com/problemset/problem/266/B) |
| 388 | Stones on the Table | 266A | 800 | [Link](https://codeforces.com/problemset/problem/266/A) |
| 389 | Roadside Trees (Simplified Edition) | 265B | 1000 | [Link](https://codeforces.com/problemset/problem/265/B) |
| 390 | Adding Digits | 260A | 1400 | [Link](https://codeforces.com/problemset/problem/260/A) |
| 391 | Cards with Numbers | 254A | 1200 | [Link](https://codeforces.com/problemset/problem/254/A) |
| 392 | Boys and Girls | 253A | 1100 | [Link](https://codeforces.com/contest/253/problem/A) |
| 393 | Increase and Decrease | 246B | 1300 | [Link](https://codeforces.com/problemset/problem/246/B) |
| 394 | Two Bags of Potatoes | 239A | 1200 | [Link](https://codeforces.com/problemset/problem/239/A) |
| 395 | Easy Number Challenge | 236B | 1300 | [Link](https://codeforces.com/problemset/problem/236/B) |
| 396 | Little Elephant and Problem | 220A | 1300 | [Link](https://codeforces.com/contest/220/problem/A) |
| 397 | Cut Ribbon | 189A | 1300 | [Link](https://codeforces.com/problemset/problem/189/A) |
| 398 | Phone Code | 172A | 800 | [Link](https://codeforces.com/problemset/problem/172/A) |
| 399 | Burning Midnight Oil | 165B | 1500 | [Link](https://codeforces.com/contest/165/problem/B) |
| 400 | Colliders | 154B | 1600 | [Link](https://codeforces.com/problemset/problem/154/B) |
| 401 | Cifera | 114A | 1000 | [Link](https://codeforces.com/contest/114/problem/A) |
| 402 | Testing Pants for Sadness | 103A | 1100 | [Link](https://codeforces.com/problemset/problem/103/A) |
| 403 | Magical Array | 83A | 1300 | [Link](https://codeforces.com/problemset/problem/83/A) |
| 404 | Petya and Countryside | 66B | 1100 | [Link](https://codeforces.com/problemset/problem/66/B) |
| 405 | Settlers' Training | 63B | 1200 | [Link](https://codeforces.com/problemset/problem/63/B) |
| 406 | Where Are My Flakes? | 60A | 1300 | [Link](https://codeforces.com/contest/60/problem/A) |
| 407 | Bar | 56A | 1000 | [Link](https://codeforces.com/problemset/problem/56/A) |
| 408 | Reconnaissance | 32A | 800 | [Link](https://codeforces.com/problemset/problem/32/A) |
| 409 | Worms Evolution | 31A | 1200 | [Link](https://codeforces.com/problemset/problem/31/A) |
| 410 | Regular Bracket Sequence | 26B | 1400 | [Link](https://codeforces.com/problemset/problem/26/B) |
| 411 | Almost Prime | 26A | 900 | [Link](https://codeforces.com/contest/26/problem/A) |
| 412 | Watermelon | 4A | 800 | [Link](https://codeforces.com/problemset/problem/4/A) |
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
