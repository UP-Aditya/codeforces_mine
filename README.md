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

**Total solutions uploaded:** 512
**Last updated:** 2026-11-04T23:34:26.763108
**Current day counter:** 103

**By rating:** 800 (141), 900 (62), 1000 (85), 1100 (66), 1200 (69), 1300 (42), 1400 (22), 1500 (7), 1600 (8), 1700 (4), 1800 (1), 1900 (1), 2000 (1), Unrated (3)

| # | Problem | Contest | Rating | Link |
|---|---------|---------|--------|------|
| 1 | Predominant Frequency Division | 2242B | 1000 | [Link](https://codeforces.com/contest/2242/problem/B) |
| 2 | Bigrams | 2242A | 800 | [Link](https://codeforces.com/contest/2242/problem/A) |
| 3 | Good times Good times | 2241B | 1100 | [Link](https://codeforces.com/contest/2241/problem/B) |
| 4 | Divide and Conquer | 2241A | 800 | [Link](https://codeforces.com/contest/2241/problem/A) |
| 5 | Another Popcount Problem | 2240A | 800 | [Link](https://codeforces.com/contest/2240/problem/A) |
| 6 | Crimson Triples | 2238B | 900 | [Link](https://codeforces.com/contest/2238/problem/B) |
| 7 | Another Puzzle from Papyrus | 2238A | 800 | [Link](https://codeforces.com/contest/2238/problem/A) |
| 8 | Duck Surplus | 2237C | 1000 | [Link](https://codeforces.com/contest/2237/problem/C) |
| 9 | Annoying the Ghost | 2237B | 1000 | [Link](https://codeforces.com/contest/2237/problem/B) |
| 10 | Destroying Towers | 2237A | 800 | [Link](https://codeforces.com/contest/2237/problem/A) |
| 11 | Tatar TV Show | 2236B | 800 | [Link](https://codeforces.com/contest/2236/problem/B) |
| 12 | Games on the Train | 2236A | 800 | [Link](https://codeforces.com/contest/2236/problem/A) |
| 13 | Palindrome, Twelve and Two Terms | 2234B | 800 | [Link](https://codeforces.com/contest/2234/problem/B) |
| 14 | Euclid, Sequence and Two Numbers | 2234A | 800 | [Link](https://codeforces.com/contest/2234/problem/A) |
| 15 | Seating Arrangement (Easy Version) | 2232C1 | 1300 | [Link](https://codeforces.com/contest/2232/problem/C1) |
| 16 | Cake Leveling | 2232B | 900 | [Link](https://codeforces.com/contest/2232/problem/B) |
| 17 | Convergence | 2232A | 800 | [Link](https://codeforces.com/contest/2232/problem/A) |
| 18 | Chipmunk Theo and Equality | 2231C | 1400 | [Link](https://codeforces.com/contest/2231/problem/C) |
| 19 | Another Sorting Problem | 2231B | 1100 | [Link](https://codeforces.com/contest/2231/problem/B) |
| 20 | Construct an Array | 2231A | 800 | [Link](https://codeforces.com/contest/2231/problem/A) |
| 21 | Party Monster | 2227B | 800 | [Link](https://codeforces.com/contest/2227/problem/B) |
| 22 | Koshary | 2227A | 800 | [Link](https://codeforces.com/contest/2227/problem/A) |
| 23 | Disturbing Distribution | 2226A | 800 | [Link](https://codeforces.com/contest/2226/problem/A) |
| 24 | Alternating String | 2225B | 900 | [Link](https://codeforces.com/contest/2225/problem/B) |
| 25 | A Number Between Two Others | 2225A | 800 | [Link](https://codeforces.com/contest/2225/problem/A) |
| 26 | Zhily and Array Operating | 2224A | 800 | [Link](https://codeforces.com/contest/2224/problem/A) |
| 27 | A Wonderful Contest | 2222A | 800 | [Link](https://codeforces.com/contest/2222/problem/A) |
| 28 | OIE Excursion | 2220B | 1200 | [Link](https://codeforces.com/contest/2220/problem/B) |
| 29 | Blocked | 2220A | 800 | [Link](https://codeforces.com/contest/2220/problem/A) |
| 30 | The 67th 6-7 Integer Problem | 2218B | 800 | [Link](https://codeforces.com/contest/2218/problem/B) |
| 31 | The 67th Integer Problem | 2218A | 800 | [Link](https://codeforces.com/contest/2218/problem/A) |
| 32 | Flip the Bit (Easy Version) | 2217B | 1000 | [Link](https://codeforces.com/contest/2217/problem/B) |
| 33 | The Equalizer | 2217A | 800 | [Link](https://codeforces.com/contest/2217/problem/A) |
| 34 | Course Wishes | 2216A | 900 | [Link](https://codeforces.com/contest/2216/problem/A) |
| 35 | And? | 2214C | Unrated | [Link](https://codeforces.com/contest/2214/problem/C) |
| 36 | Are You Smiling? | 2214B | Unrated | [Link](https://codeforces.com/contest/2214/problem/B) |
| 37 | Odd One Out | 2214A | Unrated | [Link](https://codeforces.com/contest/2214/problem/A) |
| 38 | Mickey Mouse Constructive | 2211B | 1100 | [Link](https://codeforces.com/problemset/problem/2211/B) |
| 39 | A Simple GCD Problem (Easy Version) | 2210C1 | 1200 | [Link](https://codeforces.com/contest/2210/problem/C1) |
| 40 | Simply Sitting on Chairs | 2210B | 900 | [Link](https://codeforces.com/contest/2210/problem/B) |
| 41 | A Simple Sequence | 2210A | 800 | [Link](https://codeforces.com/contest/2210/problem/A) |
| 42 | 1-1 | 2207A | 800 | [Link](https://codeforces.com/problemset/problem/2207/A) |
| 43 | Simons and Cakes for Success | 2205B | 800 | [Link](https://codeforces.com/problemset/problem/2205/B) |
| 44 | Right Maximum | 2204B | 800 | [Link](https://codeforces.com/contest/2204/problem/B) |
| 45 | Passing the Ball | 2204A | 800 | [Link](https://codeforces.com/contest/2204/problem/A) |
| 46 | Beautiful Numbers | 2203B | 1000 | [Link](https://codeforces.com/contest/2203/problem/B) |
| 47 | Towers of Boxes | 2203A | 800 | [Link](https://codeforces.com/contest/2203/problem/A) |
| 48 | Parkour Design | 2202A | 800 | [Link](https://codeforces.com/contest/2202/problem/A) |
| 49 | Deletion Sort | 2200B | 800 | [Link](https://codeforces.com/contest/2200/problem/B) |
| 50 | Eating Game | 2200A | 800 | [Link](https://codeforces.com/contest/2200/problem/A) |
| 51 | Two Towers | 2199B | 1400 | [Link](https://codeforces.com/problemset/problem/2199/B) |
| 52 | Array and Permutation | 2197B | 1100 | [Link](https://codeforces.com/contest/2197/problem/B) |
| 53 | Friendly Numbers | 2197A | 800 | [Link](https://codeforces.com/contest/2197/problem/A) |
| 54 | Dice Roll Sequence | 2195C | 1100 | [Link](https://codeforces.com/contest/2195/problem/C) |
| 55 | Heapify 1 | 2195B | 900 | [Link](https://codeforces.com/contest/2195/problem/B) |
| 56 | Sieve of Erato67henes | 2195A | 800 | [Link](https://codeforces.com/contest/2195/problem/A) |
| 57 | Offshores | 2194B | 1000 | [Link](https://codeforces.com/contest/2194/problem/B) |
| 58 | Lawn Mower | 2194A | 800 | [Link](https://codeforces.com/contest/2194/problem/A) |
| 59 | Reverse a Permutation | 2193B | 800 | [Link](https://codeforces.com/contest/2193/problem/B) |
| 60 | DBMB and the Array | 2193A | 800 | [Link](https://codeforces.com/contest/2193/problem/A) |
| 61 | Flipping Binary String | 2192B | 1000 | [Link](https://codeforces.com/contest/2192/problem/B) |
| 62 | MEX Reordering | 2191B | 1000 | [Link](https://codeforces.com/contest/2191/problem/B) |
| 63 | Array Coloring | 2191A | 800 | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 64 | Sorting Game | 2190A | 1200 | [Link](https://codeforces.com/problemset/problem/2190/A) |
| 65 | Prefix Max | 2185B | 800 | [Link](https://codeforces.com/contest/2185/problem/B) |
| 66 | Perfect Root | 2185A | 800 | [Link](https://codeforces.com/contest/2185/problem/A) |
| 67 | Hourglass | 2184B | 1100 | [Link](https://codeforces.com/contest/2184/problem/B) |
| 68 | Social Experiment | 2184A | 800 | [Link](https://codeforces.com/contest/2184/problem/A) |
| 69 | New Year Cake | 2182B | 800 | [Link](https://codeforces.com/contest/2182/problem/B) |
| 70 | New Year String | 2182A | 800 | [Link](https://codeforces.com/contest/2182/problem/A) |
| 71 | Ashmal | 2180B | 800 | [Link](https://codeforces.com/problemset/problem/2180/B) |
| 72 | Carnival Wheel | 2180A | 800 | [Link](https://codeforces.com/problemset/problem/2180/A) |
| 73 | Impost or Sus | 2178B | 900 | [Link](https://codeforces.com/problemset/problem/2178/B) |
| 74 | Optimal Shifts | 2176B | 1000 | [Link](https://codeforces.com/contest/2176/problem/B) |
| 75 | Needle in a Haystack | 2174A | 1200 | [Link](https://codeforces.com/problemset/problem/2174/A) |
| 76 | Niko's Tactical Cards | 2173B | 1100 | [Link](https://codeforces.com/contest/2173/problem/B) |
| 77 | Renako Amaori and XOR Game (easy version) | 2171C1 | 1100 | [Link](https://codeforces.com/contest/2171/problem/C1) |
| 78 | Shizuku Hoshikawa and Farm Legs | 2171A | 800 | [Link](https://codeforces.com/problemset/problem/2171/A) |
| 79 | Maximum Neighborhood | 2170A | 800 | [Link](https://codeforces.com/contest/2170/problem/A) |
| 80 | Drifting Away | 2169B | 1100 | [Link](https://codeforces.com/contest/2169/problem/B) |
| 81 | Your Name | 2167B | 800 | [Link](https://codeforces.com/contest/2167/problem/B) |
| 82 | Square? | 2167A | 800 | [Link](https://codeforces.com/contest/2167/problem/A) |
| 83 | Tab Closing | 2166B | 900 | [Link](https://codeforces.com/problemset/problem/2166/B) |
| 84 | Dungeon | 2164C | 1400 | [Link](https://codeforces.com/contest/2164/problem/C) |
| 85 | Even Modulo Pair | 2164B | 1000 | [Link](https://codeforces.com/contest/2164/problem/B) |
| 86 | Sequence Game | 2164A | 800 | [Link](https://codeforces.com/contest/2164/problem/A) |
| 87 | Siga ta Kymata | 2163B | 1700 | [Link](https://codeforces.com/contest/2163/problem/B) |
| 88 | Souvlaki VS. Kalamaki | 2163A | 800 | [Link](https://codeforces.com/contest/2163/problem/A) |
| 89 | Beautiful XOR | 2162C | 1100 | [Link](https://codeforces.com/contest/2162/problem/C) |
| 90 | Beautiful String | 2162B | 1000 | [Link](https://codeforces.com/contest/2162/problem/B) |
| 91 | Beautiful Average | 2162A | 800 | [Link](https://codeforces.com/contest/2162/problem/A) |
| 92 | Distinct Elements | 2160B | 1100 | [Link](https://codeforces.com/problemset/problem/2160/B) |
| 93 | Split | 2158B | 1200 | [Link](https://codeforces.com/contest/2158/problem/B) |
| 94 | Suspension | 2158A | 800 | [Link](https://codeforces.com/contest/2158/problem/A) |
| 95 | Expansion Plan 2 | 2157B | 900 | [Link](https://codeforces.com/contest/2157/problem/B) |
| 96 | Dungeon Equilibrium | 2157A | 800 | [Link](https://codeforces.com/contest/2157/problem/A) |
| 97 | Strange Machine | 2156B | 1000 | [Link](https://codeforces.com/contest/2156/problem/B) |
| 98 | Pizza Time | 2156A | 800 | [Link](https://codeforces.com/contest/2156/problem/A) |
| 99 | Abraham's Great Escape | 2155B | 1100 | [Link](https://codeforces.com/contest/2155/problem/B) |
| 100 | El fucho | 2155A | 800 | [Link](https://codeforces.com/contest/2155/problem/A) |
| 101 | Make it Zigzag | 2154B | 1000 | [Link](https://codeforces.com/contest/2154/problem/B) |
| 102 | Notelock | 2154A | 800 | [Link](https://codeforces.com/contest/2154/problem/A) |
| 103 | Bitwise Reversion | 2153B | 800 | [Link](https://codeforces.com/contest/2153/problem/B) |
| 104 | Circle of Apple Trees | 2153A | 800 | [Link](https://codeforces.com/contest/2153/problem/A) |
| 105 | Catching the Krug | 2152B | 1300 | [Link](https://codeforces.com/contest/2152/problem/B) |
| 106 | Increase or Smash | 2152A | 800 | [Link](https://codeforces.com/contest/2152/problem/A) |
| 107 | Unconventional Pairs | 2149B | 800 | [Link](https://codeforces.com/problemset/problem/2149/B) |
| 108 | Be Positive | 2149A | 800 | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 109 | Lasers | 2148B | 800 | [Link](https://codeforces.com/contest/2148/problem/B) |
| 110 | Sublime Sequence | 2148A | 800 | [Link](https://codeforces.com/contest/2148/problem/A) |
| 111 | Multiple Construction | 2147B | 1000 | [Link](https://codeforces.com/contest/2147/problem/B) |
| 112 | Shortest Increasing Path | 2147A | 800 | [Link](https://codeforces.com/contest/2147/problem/A) |
| 113 | Merging the Sets | 2146B | 1100 | [Link](https://codeforces.com/contest/2146/problem/B) |
| 114 | Equal Occurrences | 2146A | 800 | [Link](https://codeforces.com/contest/2146/problem/A) |
| 115 | Deck of Cards | 2145B | 1000 | [Link](https://codeforces.com/contest/2145/problem/B) |
| 116 | Discounts | 2143B | 1000 | [Link](https://codeforces.com/contest/2143/problem/B) |
| 117 | All Lengths Subtraction | 2143A | 800 | [Link](https://codeforces.com/contest/2143/problem/A) |
| 118 | Games | 2141B | 1200 | [Link](https://codeforces.com/problemset/problem/2141/B) |
| 119 | Furniture Store | 2141A | 800 | [Link](https://codeforces.com/problemset/problem/2141/A) |
| 120 | Another Divisibility Problem | 2140B | 900 | [Link](https://codeforces.com/problemset/problem/2140/B) |
| 121 | Shift Sort | 2140A | 800 | [Link](https://codeforces.com/contest/2140/problem/A) |
| 122 | Cake Collection | 2139B | 800 | [Link](https://codeforces.com/contest/2139/problem/B) |
| 123 | Maple and Multiplication | 2139A | 800 | [Link](https://codeforces.com/contest/2139/problem/A) |
| 124 | Fun Permutation | 2137B | 900 | [Link](https://codeforces.com/contest/2137/problem/B) |
| 125 | Collatz Conjecture | 2137A | 800 | [Link](https://codeforces.com/contest/2137/problem/A) |
| 126 | In the Dream | 2136A | 800 | [Link](https://codeforces.com/problemset/problem/2136/A) |
| 127 | Add 0 or K | 2134B | 1200 | [Link](https://codeforces.com/problemset/problem/2134/B) |
| 128 | The Cunning Seller (easy version) | 2132C1 | 1000 | [Link](https://codeforces.com/contest/2132/problem/C1) |
| 129 | The Secret Number | 2132B | 900 | [Link](https://codeforces.com/contest/2132/problem/B) |
| 130 | Pathless | 2130B | 1100 | [Link](https://codeforces.com/contest/2130/problem/B) |
| 131 | Mix Mex Max | 2127A | 800 | [Link](https://codeforces.com/problemset/problem/2127/A) |
| 132 | No Casino in the Mountains | 2126B | 800 | [Link](https://codeforces.com/contest/2126/problem/B) |
| 133 | Count Good Numbers | 2125C | 1100 | [Link](https://codeforces.com/contest/2125/problem/C) |
| 134 | Left and Down | 2125B | 900 | [Link](https://codeforces.com/contest/2125/problem/B) |
| 135 | Difficult Contest | 2125A | 800 | [Link](https://codeforces.com/contest/2125/problem/A) |
| 136 | Minimise Sum | 2124B | 1000 | [Link](https://codeforces.com/contest/2124/problem/B) |
| 137 | Tournament | 2123B | 800 | [Link](https://codeforces.com/contest/2123/problem/B) |
| 138 | Pile Shuffling | 2122B | 1100 | [Link](https://codeforces.com/contest/2122/problem/B) |
| 139 | Above the Clouds | 2121B | 800 | [Link](https://codeforces.com/contest/2121/problem/B) |
| 140 | Square of Rectangles | 2120A | 800 | [Link](https://codeforces.com/problemset/problem/2120/A) |
| 141 | Line Segments | 2119B | 1200 | [Link](https://codeforces.com/contest/2119/problem/B) |
| 142 | Cool Partition | 2117C | 1200 | [Link](https://codeforces.com/contest/2117/problem/C) |
| 143 | Shrinking Array | 2112B | 1100 | [Link](https://codeforces.com/contest/2112/problem/B) |
| 144 | Equal Values | 2111C | 1100 | [Link](https://codeforces.com/problemset/problem/2111/C) |
| 145 | Energy Crystals | 2111A | 800 | [Link](https://codeforces.com/problemset/problem/2111/A) |
| 146 | Slice to Survive | 2109B | 1200 | [Link](https://codeforces.com/problemset/problem/2109/B) |
| 147 | Apples in Boxes | 2107B | 1100 | [Link](https://codeforces.com/problemset/problem/2107/B) |
| 148 | LRC and VIP | 2107A | 800 | [Link](https://codeforces.com/problemset/problem/2107/A) |
| 149 | Cherry Bomb | 2106C | 1000 | [Link](https://codeforces.com/contest/2106/problem/C) |
| 150 | St. Chroma | 2106B | 900 | [Link](https://codeforces.com/contest/2106/problem/B) |
| 151 | Dr. TC | 2106A | 800 | [Link](https://codeforces.com/contest/2106/problem/A) |
| 152 | Card Game | 2104C | 1100 | [Link](https://codeforces.com/problemset/problem/2104/C) |
| 153 | Move to the End | 2104B | 1000 | [Link](https://codeforces.com/problemset/problem/2104/B) |
| 154 | Dinner Time | 2102A | 900 | [Link](https://codeforces.com/problemset/problem/2102/A) |
| 155 | Wonderful Sticks | 2096A | 800 | [Link](https://codeforces.com/contest/2096/problem/A) |
| 156 | Asuna and the Mosquitoes | 2092C | 1200 | [Link](https://codeforces.com/problemset/problem/2092/C) |
| 157 | Kamilka and the Sheep | 2092A | 800 | [Link](https://codeforces.com/problemset/problem/2092/A) |
| 158 | Combination Lock | 2091C | 1000 | [Link](https://codeforces.com/contest/2091/problem/C) |
| 159 | Treasure Hunt | 2090A | 800 | [Link](https://codeforces.com/problemset/problem/2090/A) |
| 160 | Serval and Final MEX | 2085B | 1200 | [Link](https://codeforces.com/problemset/problem/2085/B) |
| 161 | Vicious Labyrinth | 2078B | 1100 | [Link](https://codeforces.com/problemset/problem/2078/B) |
| 162 | Having Been a Treasurer in the Past, I Help Goblins Deceive | 2072B | 900 | [Link](https://codeforces.com/problemset/problem/2072/B) |
| 163 | Robot Program | 2070B | 1100 | [Link](https://codeforces.com/problemset/problem/2070/B) |
| 164 | Adjacent Digit Sums | 2067A | 800 | [Link](https://codeforces.com/contest/2067/problem/A) |
| 165 | Skibidus and Ohio | 2065B | 800 | [Link](https://codeforces.com/problemset/problem/2065/B) |
| 166 | Subsequence Update | 2063B | 1100 | [Link](https://codeforces.com/problemset/problem/2063/B) |
| 167 | Cirno and Operations | 2062C | 1200 | [Link](https://codeforces.com/problemset/problem/2062/C) |
| 168 | Kevin and Geometry | 2061B | 1100 | [Link](https://codeforces.com/problemset/problem/2061/B) |
| 169 | Kevin and Arithmetic | 2061A | 800 | [Link](https://codeforces.com/contest/2061/problem/A) |
| 170 | Crafting | 2055B | 1000 | [Link](https://codeforces.com/problemset/problem/2055/B) |
| 171 | Preparing for the Olympiad | 2051A | 800 | [Link](https://codeforces.com/problemset/problem/2051/A) |
| 172 | Transfusion | 2050B | 1100 | [Link](https://codeforces.com/problemset/problem/2050/B) |
| 173 | Replace Character | 2047B | 900 | [Link](https://codeforces.com/problemset/problem/2047/B) |
| 174 | Easy Problem | 2044A | 800 | [Link](https://codeforces.com/problemset/problem/2044/A) |
| 175 | Digits | 2043B | 1100 | [Link](https://codeforces.com/contest/2043/problem/B) |
| 176 | Bowling Frame | 2041B | 1200 | [Link](https://codeforces.com/problemset/problem/2041/B) |
| 177 | Shohag Loves Strings | 2039B | 1000 | [Link](https://codeforces.com/problemset/problem/2039/B) |
| 178 | Bonus Project | 2038A | 1400 | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 179 | Anya and 1100 | 2036C | 1100 | [Link](https://codeforces.com/problemset/problem/2036/C) |
| 180 | Alya and Permutation | 2035C | 1400 | [Link](https://codeforces.com/problemset/problem/2035/C) |
| 181 | Rakhsh's Revival | 2034B | 1000 | [Link](https://codeforces.com/contest/2034/problem/B) |
| 182 | King Keykhosrow's Mystery | 2034A | 800 | [Link](https://codeforces.com/contest/2034/problem/A) |
| 183 | Penchick and Satay Sticks | 2031B | 900 | [Link](https://codeforces.com/problemset/problem/2031/B) |
| 184 | Penchick and Modern Monument | 2031A | 800 | [Link](https://codeforces.com/problemset/problem/2031/A) |
| 185 | Replacement | 2029B | 1100 | [Link](https://codeforces.com/problemset/problem/2029/B) |
| 186 | Alice's Adventures in ''Chess'' | 2028A | 900 | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 187 | Maximize Mex | 2021B | 1200 | [Link](https://codeforces.com/problemset/problem/2021/B) |
| 188 | Brightness Begins | 2020B | 1200 | [Link](https://codeforces.com/problemset/problem/2020/B) |
| 189 | Battle for Survive | 2013B | 900 | [Link](https://codeforces.com/problemset/problem/2013/B) |
| 190 | Sakurako's Exam | 2008A | 800 | [Link](https://codeforces.com/contest/2008/problem/A) |
| 191 | The Strict Teacher (Hard Version) | 2005B2 | 1200 | [Link](https://codeforces.com/contest/2005/problem/B2) |
| 192 | Simple Palindrome | 2005A | 900 | [Link](https://codeforces.com/problemset/problem/2005/A) |
| 193 | Game with Doors | 2004B | 1000 | [Link](https://codeforces.com/problemset/problem/2004/B) |
| 194 | Seating in a Bus | 2000B | 800 | [Link](https://codeforces.com/problemset/problem/2000/B) |
| 195 | Minimize Equal Sum Subarrays | 1998B | 1000 | [Link](https://codeforces.com/problemset/problem/1998/B) |
| 196 | Parity and Sum | 1993B | 1100 | [Link](https://codeforces.com/problemset/problem/1993/B) |
| 197 | Angry Monk | 1992B | 800 | [Link](https://codeforces.com/contest/1992/problem/B) |
| 198 | Only Pluses | 1992A | 800 | [Link](https://codeforces.com/contest/1992/problem/A) |
| 199 | AND Reconstruction | 1991B | 1100 | [Link](https://codeforces.com/problemset/problem/1991/B) |
| 200 | Array Craft | 1990B | 1200 | [Link](https://codeforces.com/problemset/problem/1990/B) |
| 201 | Submission Bait | 1990A | 900 | [Link](https://codeforces.com/problemset/problem/1990/A) |
| 202 | Split the Multiset | 1988A | 900 | [Link](https://codeforces.com/problemset/problem/1988/A) |
| 203 | Basil's Garden | 1987C | 1200 | [Link](https://codeforces.com/problemset/problem/1987/C) |
| 204 | X Axis | 1986A | 800 | [Link](https://codeforces.com/problemset/problem/1986/A) |
| 205 | 378QAQ and Mocha's Array | 1975B | 1000 | [Link](https://codeforces.com/problemset/problem/1975/B) |
| 206 | Cat, Fox and the Lonely Array | 1973B | 1300 | [Link](https://codeforces.com/problemset/problem/1973/B) |
| 207 | Coin Games | 1972B | 900 | [Link](https://codeforces.com/problemset/problem/1972/B) |
| 208 | Contest Proposal | 1972A | 800 | [Link](https://codeforces.com/problemset/problem/1972/A) |
| 209 | Assembly via Remainders | 1968C | 1000 | [Link](https://codeforces.com/problemset/problem/1968/C) |
| 210 | A BIT of a Construction | 1957B | 1100 | [Link](https://codeforces.com/problemset/problem/1957/B) |
| 211 | Nene and the Card Game | 1956B | 800 | [Link](https://codeforces.com/problemset/problem/1956/B) |
| 212 | Progressive Square | 1955B | 1000 | [Link](https://codeforces.com/problemset/problem/1955/B) |
| 213 | Make It Ugly | 1954B | 1200 | [Link](https://codeforces.com/problemset/problem/1954/B) |
| 214 | Painting the Ribbon | 1954A | 900 | [Link](https://codeforces.com/contest/1954/problem/A) |
| 215 | Battle Cows | 1951B | 1200 | [Link](https://codeforces.com/problemset/problem/1951/B) |
| 216 | Dual Trigger | 1951A | 900 | [Link](https://codeforces.com/problemset/problem/1951/A) |
| 217 | Median of an Array | 1946A | 800 | [Link](https://codeforces.com/contest/1946/problem/A) |
| 218 | MEX Game 1 | 1943A | 1300 | [Link](https://codeforces.com/problemset/problem/1943/A) |
| 219 | Bessie's Birthday Cake (Easy Version) | 1942C1 | 1300 | [Link](https://codeforces.com/contest/1942/problem/C1) |
| 220 | Rudolf and 121 | 1941B | 1000 | [Link](https://codeforces.com/problemset/problem/1941/B) |
| 221 | Chaya Calendar | 1932B | 1100 | [Link](https://codeforces.com/problemset/problem/1932/B) |
| 222 | Recovering a Small String | 1931A | 800 | [Link](https://codeforces.com/problemset/problem/1931/A) |
| 223 | Permutation Printing | 1930B | 1000 | [Link](https://codeforces.com/problemset/problem/1930/B) |
| 224 | Maximise The Score | 1930A | 800 | [Link](https://codeforces.com/contest/1930/problem/A) |
| 225 | Following the String | 1927B | 900 | [Link](https://codeforces.com/problemset/problem/1927/B) |
| 226 | A Balanced Problemset? | 1925B | 1200 | [Link](https://codeforces.com/contest/1925/problem/B) |
| 227 | Summation Game | 1920B | 1100 | [Link](https://codeforces.com/problemset/problem/1920/B) |
| 228 | Plus-Minus Split | 1919B | 800 | [Link](https://codeforces.com/problemset/problem/1919/B) |
| 229 | Minimize Inversions | 1918B | 900 | [Link](https://codeforces.com/problemset/problem/1918/B) |
| 230 | Two Divisors | 1916B | 1000 | [Link](https://codeforces.com/contest/1916/problem/B) |
| 231 | 2023 | 1916A | 800 | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 232 | Problemsolving Log | 1914A | 800 | [Link](https://codeforces.com/contest/1914/problem/A) |
| 233 | Swap and Delete | 1913B | 1000 | [Link](https://codeforces.com/problemset/problem/1913/B) |
| 234 | Make Almost Equal With Mod | 1909B | 1200 | [Link](https://codeforces.com/problemset/problem/1909/B) |
| 235 | Rook | 1907A | 800 | [Link](https://codeforces.com/problemset/problem/1907/A) |
| 236 | Collecting Game | 1904B | 1100 | [Link](https://codeforces.com/problemset/problem/1904/B) |
| 237 | Forked! | 1904A | 900 | [Link](https://codeforces.com/problemset/problem/1904/A) |
| 238 | Getting Points | 1902B | 1100 | [Link](https://codeforces.com/problemset/problem/1902/B) |
| 239 | Game with Integers | 1899A | 800 | [Link](https://codeforces.com/contest/1899/problem/A) |
| 240 | Two Out of Three | 1894B | 1000 | [Link](https://codeforces.com/problemset/problem/1894/B) |
| 241 | Deja Vu | 1891B | 1100 | [Link](https://codeforces.com/problemset/problem/1891/B) |
| 242 | Sum of Three | 1886A | 800 | [Link](https://codeforces.com/problemset/problem/1886/A) |
| 243 | Haunted House | 1884B | 1100 | [Link](https://codeforces.com/contest/1884/problem/B) |
| 244 | Chemistry | 1883B | 900 | [Link](https://codeforces.com/problemset/problem/1883/B) |
| 245 | Three Threadlets | 1881B | 900 | [Link](https://codeforces.com/problemset/problem/1881/B) |
| 246 | Don't Try to Count | 1881A | 800 | [Link](https://codeforces.com/problemset/problem/1881/A) |
| 247 | How Much Does Daytona Cost? | 1878A | 800 | [Link](https://codeforces.com/problemset/problem/1878/A) |
| 248 | Goals of Victory | 1877A | 800 | [Link](https://codeforces.com/problemset/problem/1877/A) |
| 249 | Helmets in Night Light | 1876A | 1000 | [Link](https://codeforces.com/problemset/problem/1876/A) |
| 250 | Jellyfish and Undertale | 1875A | 900 | [Link](https://codeforces.com/problemset/problem/1875/A) |
| 251 | Jellyfish and Game | 1874A | 1200 | [Link](https://codeforces.com/problemset/problem/1874/A) |
| 252 | 2D Traveling | 1869B | 1100 | [Link](https://codeforces.com/problemset/problem/1869/B) |
| 253 | Make It Zero | 1869A | 900 | [Link](https://codeforces.com/problemset/problem/1869/A) |
| 254 | green_gold_dog, array and permutation | 1867A | 800 | [Link](https://codeforces.com/contest/1867/problem/A) |
| 255 | Sequence Game | 1862B | 800 | [Link](https://codeforces.com/problemset/problem/1862/B) |
| 256 | Prime Deletion | 1861A | 800 | [Link](https://codeforces.com/problemset/problem/1861/A) |
| 257 | Another Permutation Problem | 1859C | 1200 | [Link](https://codeforces.com/problemset/problem/1859/C) |
| 258 | Olya and Game with Arrays | 1859B | 1000 | [Link](https://codeforces.com/problemset/problem/1859/B) |
| 259 | United We Stand | 1859A | 800 | [Link](https://codeforces.com/problemset/problem/1859/A) |
| 260 | Assembly via Minimums | 1857C | 1200 | [Link](https://codeforces.com/problemset/problem/1857/C) |
| 261 | Good Arrays | 1856B | 900 | [Link](https://codeforces.com/contest/1856/problem/B) |
| 262 | Longest Divisors Interval | 1855B | 900 | [Link](https://codeforces.com/problemset/problem/1855/B) |
| 263 | Desorting | 1853A | 800 | [Link](https://codeforces.com/contest/1853/problem/A) |
| 264 | Ten Words of Wisdom | 1850B | 800 | [Link](https://codeforces.com/problemset/problem/1850/B) |
| 265 | Monsters | 1849B | 1000 | [Link](https://codeforces.com/problemset/problem/1849/B) |
| 266 | Morning Sandwich | 1849A | 800 | [Link](https://codeforces.com/problemset/problem/1849/A) |
| 267 | Vika and the Bridge | 1848B | 1200 | [Link](https://codeforces.com/problemset/problem/1848/B) |
| 268 | Forbidden Integer | 1845A | 800 | [Link](https://codeforces.com/problemset/problem/1845/A) |
| 269 | Permutations & Primes | 1844B | 1000 | [Link](https://codeforces.com/problemset/problem/1844/B) |
| 270 | Game with Board | 1841A | 800 | [Link](https://codeforces.com/contest/1841/problem/A) |
| 271 | Lamps | 1839B | 1100 | [Link](https://codeforces.com/problemset/problem/1839/B) |
| 272 | Comparison String | 1837B | 900 | [Link](https://codeforces.com/problemset/problem/1837/B) |
| 273 | Grasshopper on a Line | 1837A | 800 | [Link](https://codeforces.com/contest/1837/problem/A) |
| 274 | Unit Array | 1834A | 800 | [Link](https://codeforces.com/contest/1834/problem/A) |
| 275 | Restore the Weather | 1833B | 900 | [Link](https://codeforces.com/problemset/problem/1833/B) |
| 276 | Contrast Value | 1832C | 1200 | [Link](https://codeforces.com/problemset/problem/1832/C) |
| 277 | Maximum Sum | 1832B | 1100 | [Link](https://codeforces.com/problemset/problem/1832/B) |
| 278 | Array merging | 1831B | 1000 | [Link](https://codeforces.com/problemset/problem/1831/B) |
| 279 | Twin Permutations | 1831A | 800 | [Link](https://codeforces.com/problemset/problem/1831/A) |
| 280 | Divisible Array | 1828A | 800 | [Link](https://codeforces.com/problemset/problem/1828/A) |
| 281 | Counting Orders | 1827A | 1100 | [Link](https://codeforces.com/problemset/problem/1827/A) |
| 282 | Dreaming of Freedom | 1826C | 1300 | [Link](https://codeforces.com/contest/1826/problem/C) |
| 283 | Lunatic Never Content | 1826B | 1100 | [Link](https://codeforces.com/problemset/problem/1826/B) |
| 284 | TubeTube Feed | 1822A | 800 | [Link](https://codeforces.com/problemset/problem/1822/A) |
| 285 | JoJo's Incredible Adventures | 1820B | 1100 | [Link](https://codeforces.com/problemset/problem/1820/B) |
| 286 | Grid Reconstruction | 1816B | 1000 | [Link](https://codeforces.com/problemset/problem/1816/B) |
| 287 | Coins | 1814A | 800 | [Link](https://codeforces.com/problemset/problem/1814/A) |
| 288 | Conveyor Belts | 1811B | 1000 | [Link](https://codeforces.com/problemset/problem/1811/B) |
| 289 | Candies | 1810B | 800 | [Link](https://codeforces.com/problemset/problem/1810/B) |
| 290 | Playing in a Casino | 1808B | 1200 | [Link](https://codeforces.com/problemset/problem/1808/B) |
| 291 | Walking Master | 1806A | 800 | [Link](https://codeforces.com/problemset/problem/1806/A) |
| 292 | We Need the Zero | 1805A | 800 | [Link](https://codeforces.com/problemset/problem/1805/A) |
| 293 | Powering the Hero (easy version) | 1800C1 | 1000 | [Link](https://codeforces.com/problemset/problem/1800/C1) |
| 294 | Count the Number of Pairs | 1800B | 1000 | [Link](https://codeforces.com/problemset/problem/1800/B) |
| 295 | Not Dividing | 1794B | 900 | [Link](https://codeforces.com/problemset/problem/1794/B) |
| 296 | Dora and Search | 1793C | 1200 | [Link](https://codeforces.com/contest/1793/problem/C) |
| 297 | Fedya and Array | 1793B | 1100 | [Link](https://codeforces.com/problemset/problem/1793/B) |
| 298 | Stand-up Comedian | 1792B | 1200 | [Link](https://codeforces.com/problemset/problem/1792/B) |
| 299 | Serval and Mocha's Array | 1789A | 800 | [Link](https://codeforces.com/problemset/problem/1789/A) |
| 300 | Number Factorization | 1787B | 1100 | [Link](https://codeforces.com/problemset/problem/1787/B) |
| 301 | Going to the Cinema | 1781B | 1000 | [Link](https://codeforces.com/contest/1781/problem/B) |
| 302 | GCD Partition | 1780B | 1100 | [Link](https://codeforces.com/problemset/problem/1780/B) |
| 303 | Different Differences | 1772C | 1000 | [Link](https://codeforces.com/contest/1772/problem/C) |
| 304 | Koxia and Permutation | 1770B | 1000 | [Link](https://codeforces.com/contest/1770/problem/B) |
| 305 | Koxia and Whiteboards | 1770A | 1000 | [Link](https://codeforces.com/problemset/problem/1770/A) |
| 306 | Notepad# | 1766B | 1000 | [Link](https://codeforces.com/contest/1766/problem/B) |
| 307 | Extremely Round | 1766A | 800 | [Link](https://codeforces.com/problemset/problem/1766/A) |
| 308 | Broken Keyboard | 1765B | 800 | [Link](https://codeforces.com/problemset/problem/1765/B) |
| 309 | Incinerate | 1763B | 1200 | [Link](https://codeforces.com/problemset/problem/1763/B) |
| 310 | Elimination of a Ring | 1761B | 1000 | [Link](https://codeforces.com/problemset/problem/1761/B) |
| 311 | Indirect Sort | 1750A | 800 | [Link](https://codeforces.com/contest/1750/problem/A) |
| 312 | Number Replacement | 1744A | 800 | [Link](https://codeforces.com/problemset/problem/1744/A) |
| 313 | Playing with GCD | 1736B | 1200 | [Link](https://codeforces.com/problemset/problem/1736/B) |
| 314 | Rule of League | 1733B | 900 | [Link](https://codeforces.com/problemset/problem/1733/B) |
| 315 | Bestie | 1732A | 1000 | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 316 | Kill Demodogs | 1731B | 1100 | [Link](https://codeforces.com/problemset/problem/1731/B) |
| 317 | Mainak and Array | 1726A | 900 | [Link](https://codeforces.com/problemset/problem/1726/A) |
| 318 | Basketball Together | 1725B | 1000 | [Link](https://codeforces.com/problemset/problem/1725/B) |
| 319 | Beautiful Array | 1715B | 1000 | [Link](https://codeforces.com/problemset/problem/1715/B) |
| 320 | Luke is a Foodie | 1704B | 1000 | [Link](https://codeforces.com/problemset/problem/1704/B) |
| 321 | Promo | 1697B | 900 | [Link](https://codeforces.com/problemset/problem/1697/B) |
| 322 | NIT Destroys the Universe | 1696B | 900 | [Link](https://codeforces.com/problemset/problem/1696/B) |
| 323 | Circle Game | 1695B | 1000 | [Link](https://codeforces.com/problemset/problem/1695/B) |
| 324 | Shoe Shuffling | 1691B | 1000 | [Link](https://codeforces.com/problemset/problem/1691/B) |
| 325 | Stone Age Problem | 1679B | 1200 | [Link](https://codeforces.com/problemset/problem/1679/B) |
| 326 | A Perfectly Balanced String? | 1673B | 1100 | [Link](https://codeforces.com/problemset/problem/1673/B) |
| 327 | Dolce Vita | 1671C | 1200 | [Link](https://codeforces.com/problemset/problem/1671/C) |
| 328 | Array Cloning Technique | 1665B | 900 | [Link](https://codeforces.com/problemset/problem/1665/B) |
| 329 | Subtract Operation | 1656B | 1100 | [Link](https://codeforces.com/problemset/problem/1656/B) |
| 330 | DIV + MOD | 1650B | 900 | [Link](https://codeforces.com/problemset/problem/1650/B) |
| 331 | Differential Sorting | 1635C | 1200 | [Link](https://codeforces.com/problemset/problem/1635/C) |
| 332 | Roof Construction | 1632B | 1000 | [Link](https://codeforces.com/problemset/problem/1632/B) |
| 333 | Fun with Even Subarrays | 1631B | 1100 | [Link](https://codeforces.com/problemset/problem/1631/B) |
| 334 | Make AP | 1624B | 900 | [Link](https://codeforces.com/problemset/problem/1624/B) |
| 335 | Balanced Stone Heaps | 1623C | 1600 | [Link](https://codeforces.com/problemset/problem/1623/C) |
| 336 | Triangles on a Rectangle | 1620B | 1000 | [Link](https://codeforces.com/problemset/problem/1620/B) |
| 337 | Divan and a New Project  | 1614B | 1000 | [Link](https://codeforces.com/problemset/problem/1614/B) |
| 338 | Kalindrome Array | 1610B | 1100 | [Link](https://codeforces.com/problemset/problem/1610/B) |
| 339 | William the Vigilant | 1609B | 1100 | [Link](https://codeforces.com/problemset/problem/1609/B) |
| 340 | Odd Grasshopper | 1607B | 900 | [Link](https://codeforces.com/problemset/problem/1607/B) |
| 341 | AB Balance | 1606A | 900 | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 342 | Make it Divisible by 25 | 1593B | 900 | [Link](https://codeforces.com/problemset/problem/1593/B) |
| 343 | MEXor Mixup | 1567B | 1000 | [Link](https://codeforces.com/problemset/problem/1567/B) |
| 344 | Deep Down Below | 1561C | 1300 | [Link](https://codeforces.com/problemset/problem/1561/C) |
| 345 | Mocha and Math | 1559A | 900 | [Link](https://codeforces.com/problemset/problem/1559/A) |
| 346 | Reverse String | 1553B | 1300 | [Link](https://codeforces.com/contest/1553/problem/B) |
| 347 | Exciting Bets | 1543A | 900 | [Link](https://codeforces.com/problemset/problem/1543/A) |
| 348 | Pleasant Pairs | 1541B | 1200 | [Link](https://codeforces.com/problemset/problem/1541/B) |
| 349 | Bad Boy | 1537B | 900 | [Link](https://codeforces.com/problemset/problem/1537/B) |
| 350 | Diluc and Kaeya | 1536C | 1500 | [Link](https://codeforces.com/problemset/problem/1536/C) |
| 351 | Prinzessin der Verurteilung | 1536B | 1200 | [Link](https://codeforces.com/problemset/problem/1536/B) |
| 352 | Permutation Sort | 1525B | 900 | [Link](https://codeforces.com/problemset/problem/1525/B) |
| 353 | Nastia and a Good Array | 1521B | 1300 | [Link](https://codeforces.com/problemset/problem/1521/B) |
| 354 | Double-ended Strings | 1506C | 1000 | [Link](https://codeforces.com/problemset/problem/1506/C) |
| 355 | Flip the Bits | 1504B | 1200 | [Link](https://codeforces.com/problemset/problem/1504/B) |
| 356 | M-arrays | 1497B | 1200 | [Link](https://codeforces.com/problemset/problem/1497/B) |
| 357 | Cat Cycle | 1487B | 1200 | [Link](https://codeforces.com/problemset/problem/1487/B) |
| 358 | Add and Divide | 1485A | 1000 | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 359 | Searching Local Minimum | 1479A | 1700 | [Link](https://codeforces.com/contest/1479/problem/A) |
| 360 | Strange Partition | 1471A | 900 | [Link](https://codeforces.com/problemset/problem/1471/A) |
| 361 | Row GCD | 1458A | 1600 | [Link](https://codeforces.com/problemset/problem/1458/A) |
| 362 | Sum of Medians | 1440B | 900 | [Link](https://codeforces.com/problemset/problem/1440/B) |
| 363 | Valerii Against Everyone | 1438B | 1000 | [Link](https://codeforces.com/problemset/problem/1438/B) |
| 364 | Buying Torches | 1418A | 1000 | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 365 | Fair Numbers | 1411B | 1000 | [Link](https://codeforces.com/problemset/problem/1411/B) |
| 366 | Create The Teams | 1380C | 1400 | [Link](https://codeforces.com/problemset/problem/1380/C) |
| 367 | Three Indices | 1380A | 900 | [Link](https://codeforces.com/problemset/problem/1380/A) |
| 368 | Element Extermination | 1375C | 1400 | [Link](https://codeforces.com/problemset/problem/1375/C) |
| 369 | Multiply by 2, divide by 6 | 1374B | 900 | [Link](https://codeforces.com/problemset/problem/1374/B) |
| 370 | 01 Game | 1373B | 900 | [Link](https://codeforces.com/problemset/problem/1373/B) |
| 371 | Omkar and Last Class of Math | 1372B | 1300 | [Link](https://codeforces.com/problemset/problem/1372/B) |
| 372 | Shuffle | 1366B | 1300 | [Link](https://codeforces.com/problemset/problem/1366/B) |
| 373 | Most socially-distanced subsequence | 1364B | 1300 | [Link](https://codeforces.com/contest/1364/problem/B) |
| 374 | Subsequence Hate | 1363B | 1400 | [Link](https://codeforces.com/contest/1363/problem/B) |
| 375 | Johnny and Ancient Computer | 1362A | 1000 | [Link](https://codeforces.com/problemset/problem/1362/A) |
| 376 | Orac and LCM | 1349A | 1600 | [Link](https://codeforces.com/problemset/problem/1349/A) |
| 377 | Alternating Subsequence | 1343C | 1200 | [Link](https://codeforces.com/problemset/problem/1343/C) |
| 378 | Nastya and Door | 1341B | 1300 | [Link](https://codeforces.com/contest/1341/problem/B) |
| 379 | Xenia and Colorful Gems | 1336B | 1700 | [Link](https://codeforces.com/problemset/problem/1336/B) |
| 380 | Sum of Odd Integers | 1327A | 1100 | [Link](https://codeforces.com/contest/1327/problem/A) |
| 381 | Bogosort | 1312B | 1000 | [Link](https://codeforces.com/problemset/problem/1312/B) |
| 382 | Just Eat It! | 1285B | 1300 | [Link](https://codeforces.com/problemset/problem/1285/B) |
| 383 | Heating | 1260A | 1000 | [Link](https://codeforces.com/problemset/problem/1260/A) |
| 384 | Balanced Tunnel | 1237B | 1300 | [Link](https://codeforces.com/contest/1237/problem/B) |
| 385 | TV Subscriptions (Hard Version) | 1225B2 | 1300 | [Link](https://codeforces.com/problemset/problem/1225/B2) |
| 386 | Badges | 1214B | 1100 | [Link](https://codeforces.com/problemset/problem/1214/B) |
| 387 | Common Divisors | 1203C | 1300 | [Link](https://codeforces.com/contest/1203/problem/C) |
| 388 | Email from Polycarp | 1185B | 1200 | [Link](https://codeforces.com/problemset/problem/1185/B) |
| 389 | WOW Factor | 1178B | 1300 | [Link](https://codeforces.com/contest/1178/problem/B) |
| 390 | Ehab and a Special Coloring Problem | 1174C | 1300 | [Link](https://codeforces.com/problemset/problem/1174/C) |
| 391 | Ehab Fails to Be Thanos | 1174A | 1000 | [Link](https://codeforces.com/problemset/problem/1174/A) |
| 392 | Reverse a Substring | 1155A | 1000 | [Link](https://codeforces.com/problemset/problem/1155/A) |
| 393 | Draw! | 1131B | 1400 | [Link](https://codeforces.com/problemset/problem/1131/B) |
| 394 | Alyona and a Narrow Fridge | 1119B | 1300 | [Link](https://codeforces.com/problemset/problem/1119/B) |
| 395 | Digits Sequence Dividing | 1107A | 900 | [Link](https://codeforces.com/problemset/problem/1107/A) |
| 396 | LCM | 1068B | 1200 | [Link](https://codeforces.com/problemset/problem/1068/B) |
| 397 | Buying a TV Set | 1041B | 1000 | [Link](https://codeforces.com/problemset/problem/1041/B) |
| 398 | Palindrome Dance | 1040A | 1000 | [Link](https://codeforces.com/problemset/problem/1040/A) |
| 399 | Non-Coprime Partition | 1038B | 1100 | [Link](https://codeforces.com/problemset/problem/1038/B) |
| 400 | Reach Median | 1037B | 1300 | [Link](https://codeforces.com/contest/1037/problem/B) |
| 401 | Packets | 1037A | 1300 | [Link](https://codeforces.com/contest/1037/problem/A) |
| 402 | Square Difference | 1033B | 1100 | [Link](https://codeforces.com/contest/1033/problem/b) |
| 403 | New Building for SIS | 1020A | 1000 | [Link](https://codeforces.com/problemset/problem/1020/A) |
| 404 | Planning The Expedition | 1011B | 1200 | [Link](https://codeforces.com/problemset/problem/1011/B) |
| 405 | World Cup | 996B | 1300 | [Link](https://codeforces.com/contest/996/problem/B) |
| 406 | Getting an A | 991B | 900 | [Link](https://codeforces.com/problemset/problem/991/B) |
| 407 | Row | 982A | 1200 | [Link](https://codeforces.com/problemset/problem/982/A) |
| 408 | Watering System | 967B | 1000 | [Link](https://codeforces.com/problemset/problem/967/B) |
| 409 | Fafa and the Gates | 935B | 900 | [Link](https://codeforces.com/problemset/problem/935/B) |
| 410 | Fafa and his Company | 935A | 800 | [Link](https://codeforces.com/problemset/problem/935/A) |
| 411 | Cloning Toys | 922A | 1300 | [Link](https://codeforces.com/problemset/problem/922/A) |
| 412 | Boxes Packing | 903C | 1200 | [Link](https://codeforces.com/problemset/problem/903/C) |
| 413 | Dividing the numbers | 899C | 1300 | [Link](https://codeforces.com/problemset/problem/899/C) |
| 414 | Divisiblity of Differences | 876B | 1300 | [Link](https://codeforces.com/problemset/problem/876/B) |
| 415 | Diversity | 844A | 1000 | [Link](https://codeforces.com/problemset/problem/844/A) |
| 416 | The Festive Evening | 834B | 1100 | [Link](https://codeforces.com/problemset/problem/834/B) |
| 417 | Average Sleep Time | 808B | 1300 | [Link](https://codeforces.com/problemset/problem/808/B) |
| 418 | k-Factorization | 797A | 1100 | [Link](https://codeforces.com/problemset/problem/797/A) |
| 419 | Anastasia and pebbles | 789A | 1100 | [Link](https://codeforces.com/problemset/problem/789/A) |
| 420 | The Monster | 787A | 1200 | [Link](https://codeforces.com/problemset/problem/787/A) |
| 421 | Dishonest Sellers | 779C | 1200 | [Link](https://codeforces.com/problemset/problem/779/C) |
| 422 | Sherlock and his girlfriend | 776B | 1200 | [Link](https://codeforces.com/problemset/problem/776/B) |
| 423 | k-th divisor | 762A | 1400 | [Link](https://codeforces.com/problemset/problem/762/A) |
| 424 | Chloe and the sequence  | 743B | 1200 | [Link](https://codeforces.com/contest/743/problem/B) |
| 425 | Vladik and flights | 743A | 1200 | [Link](https://codeforces.com/contest/743/problem/A) |
| 426 | Anton and Digits | 734B | 800 | [Link](https://codeforces.com/problemset/problem/734/B) |
| 427 | Jumping Ball | 725A | 1000 | [Link](https://codeforces.com/problemset/problem/725/A) |
| 428 | Cellular Network | 702C | 1500 | [Link](https://codeforces.com/problemset/problem/702/C) |
| 429 | Vacations | 698A | 1400 | [Link](https://codeforces.com/problemset/problem/698/A) |
| 430 | Enduring Exodus | 645C | 1600 | [Link](https://codeforces.com/contest/645/problem/c) |
| 431 | Elephant | 617A | 800 | [Link](https://codeforces.com/contest/617/problem/A) |
| 432 | New Year and Old Property | 611B | 1300 | [Link](https://codeforces.com/contest/611/problem/B) |
| 433 | Saitama Destroys Hotel | 608A | 1000 | [Link](https://codeforces.com/problemset/problem/608/A) |
| 434 | Olesya and Rodion | 584A | 1000 | [Link](https://codeforces.com/contest/584/problem/A) |
| 435 | Kefa and Company | 580B | 1500 | [Link](https://codeforces.com/problemset/problem/580/B) |
| 436 | Vasya and Petya's Game | 576A | 1500 | [Link](https://codeforces.com/problemset/problem/576/A) |
| 437 | Bear and Poker | 573A | 1300 | [Link](https://codeforces.com/contest/573/problem/A) |
| 438 | Soldier and Badges | 546B | 1200 | [Link](https://codeforces.com/problemset/problem/546/B) |
| 439 | Quasi Binary | 538B | 1400 | [Link](https://codeforces.com/problemset/problem/538/B) |
| 440 | Two Buttons | 520B | 1400 | [Link](https://codeforces.com/problemset/problem/520/B) |
| 441 | A and B and Team Training | 519C | 1300 | [Link](https://codeforces.com/problemset/problem/519/C) |
| 442 | Drazil and Factorial | 515C | 1400 | [Link](https://codeforces.com/problemset/problem/515/C) |
| 443 | Chewbaсca and Number | 514A | 1200 | [Link](https://codeforces.com/contest/514/problem/A) |
| 444 | Anton and currency you all know | 508B | 1300 | [Link](https://codeforces.com/problemset/problem/508/B) |
| 445 | Amr and Music | 507A | 1000 | [Link](https://codeforces.com/contest/507/problem/A) |
| 446 | Modular Equations | 495B | 1600 | [Link](https://codeforces.com/problemset/problem/495/B) |
| 447 | Bits | 484A | 1700 | [Link](https://codeforces.com/problemset/problem/484/A) |
| 448 | Dreamoon and Stairs | 476A | 1000 | [Link](https://codeforces.com/problemset/problem/476/A) |
| 449 | I Wanna Be the Guy | 469A | 800 | [Link](https://codeforces.com/problemset/problem/469/A) |
| 450 | Wonder Room | 466B | 2000 | [Link](https://codeforces.com/problemset/problem/466/B) |
| 451 | Appleman and Card Game | 462B | 1300 | [Link](https://codeforces.com/problemset/problem/462/B) |
| 452 | Pashmak and Flowers | 459B | 1300 | [Link](https://codeforces.com/problemset/problem/459/B) |
| 453 | Pashmak and Garden | 459A | 1200 | [Link](https://codeforces.com/problemset/problem/459/A) |
| 454 | Boredom | 455A | 1500 | [Link](https://codeforces.com/problemset/problem/455/a) |
| 455 | Little Pony and Sort by Shift | 454B | 1200 | [Link](https://codeforces.com/problemset/problem/454/B) |
| 456 | Jzzhu and Sequences | 450B | 1300 | [Link](https://codeforces.com/problemset/problem/450/B) |
| 457 | Valera and Fruits | 441B | 1400 | [Link](https://codeforces.com/problemset/problem/441/B) |
| 458 | Kitahara Haruki's Gift | 433A | 1100 | [Link](https://codeforces.com/problemset/problem/433/A) |
| 459 | Megacity | 424B | 1200 | [Link](https://codeforces.com/problemset/problem/424/B) |
| 460 | Mashmokh and Numbers | 414A | 1500 | [Link](https://codeforces.com/problemset/problem/414/A) |
| 461 | Fox and Box Accumulation | 388A | 1400 | [Link](https://codeforces.com/contest/388/problem/A) |
| 462 | New Year Candles | 379A | 1000 | [Link](https://codeforces.com/contest/379/problem/A) |
| 463 | Fence | 363B | 1100 | [Link](https://codeforces.com/problemset/problem/363/B) |
| 464 | Levko and Permutation | 361B | 1200 | [Link](https://codeforces.com/contest/361/problem/B) |
| 465 | TL | 350A | 1200 | [Link](https://codeforces.com/problemset/problem/350/A) |
| 466 | Alice and Bob | 346A | 1600 | [Link](https://codeforces.com/problemset/problem/346/A) |
| 467 | Simple Molecules | 344B | 1200 | [Link](https://codeforces.com/problemset/problem/344/B) |
| 468 | Rational Resistance | 343A | 1600 | [Link](https://codeforces.com/problemset/problem/343/A) |
| 469 | Xenia and Divisors | 342A | 1200 | [Link](https://codeforces.com/problemset/problem/342/A) |
| 470 | Xenia and Ringroad | 339B | 1000 | [Link](https://codeforces.com/problemset/problem/339/B) |
| 471 | Candy Bags | 334A | 1000 | [Link](https://codeforces.com/problemset/problem/334/A) |
| 472 | Hungry Sequence | 327B | 1200 | [Link](https://codeforces.com/problemset/problem/327/B) |
| 473 | Sereja and Bottles | 315A | 1400 | [Link](https://codeforces.com/problemset/problem/315/A) |
| 474 | Ilya and Queries | 313B | 1100 | [Link](https://codeforces.com/problemset/problem/313/B) |
| 475 | Yaroslav and Sequence | 301A | 1800 | [Link](https://codeforces.com/problemset/problem/301/A) |
| 476 | Sail | 298B | 1200 | [Link](https://codeforces.com/problemset/problem/298/B) |
| 477 | Greg and Array | 295A | 1400 | [Link](https://codeforces.com/problemset/problem/295/A) |
| 478 | Polo the Penguin and Matrix | 289B | 1400 | [Link](https://codeforces.com/problemset/problem/289/B) |
| 479 | Building Permutation | 285C | 1200 | [Link](https://codeforces.com/problemset/problem/285/C) |
| 480 | Books | 279B | 1400 | [Link](https://codeforces.com/contest/279/problem/B) |
| 481 | Lights Out | 275A | 900 | [Link](https://codeforces.com/problemset/problem/275/A) |
| 482 | Prime Matrix | 271B | 1300 | [Link](https://codeforces.com/contest/271/problem/B) |
| 483 | Fancy Fence | 270A | 1100 | [Link](https://codeforces.com/problemset/problem/270/A) |
| 484 | Queue at the School | 266B | 800 | [Link](https://codeforces.com/problemset/problem/266/B) |
| 485 | Stones on the Table | 266A | 800 | [Link](https://codeforces.com/problemset/problem/266/A) |
| 486 | Roadside Trees (Simplified Edition) | 265B | 1000 | [Link](https://codeforces.com/problemset/problem/265/B) |
| 487 | Adding Digits | 260A | 1400 | [Link](https://codeforces.com/problemset/problem/260/A) |
| 488 | Cards with Numbers | 254A | 1200 | [Link](https://codeforces.com/problemset/problem/254/A) |
| 489 | Boys and Girls | 253A | 1100 | [Link](https://codeforces.com/contest/253/problem/A) |
| 490 | Increase and Decrease | 246B | 1300 | [Link](https://codeforces.com/problemset/problem/246/B) |
| 491 | Two Bags of Potatoes | 239A | 1200 | [Link](https://codeforces.com/problemset/problem/239/A) |
| 492 | Easy Number Challenge | 236B | 1300 | [Link](https://codeforces.com/problemset/problem/236/B) |
| 493 | Little Elephant and Problem | 220A | 1300 | [Link](https://codeforces.com/contest/220/problem/A) |
| 494 | Cut Ribbon | 189A | 1300 | [Link](https://codeforces.com/problemset/problem/189/A) |
| 495 | Phone Code | 172A | 800 | [Link](https://codeforces.com/problemset/problem/172/A) |
| 496 | Burning Midnight Oil | 165B | 1500 | [Link](https://codeforces.com/contest/165/problem/B) |
| 497 | Colliders | 154B | 1600 | [Link](https://codeforces.com/problemset/problem/154/B) |
| 498 | Unary | 133B | 1200 | [Link](https://codeforces.com/problemset/problem/133/B) |
| 499 | Cifera | 114A | 1000 | [Link](https://codeforces.com/contest/114/problem/A) |
| 500 | Testing Pants for Sadness | 103A | 1100 | [Link](https://codeforces.com/problemset/problem/103/A) |
| 501 | Magical Array | 83A | 1300 | [Link](https://codeforces.com/problemset/problem/83/A) |
| 502 | Petya and Countryside | 66B | 1100 | [Link](https://codeforces.com/problemset/problem/66/B) |
| 503 | Settlers' Training | 63B | 1200 | [Link](https://codeforces.com/problemset/problem/63/B) |
| 504 | Where Are My Flakes? | 60A | 1300 | [Link](https://codeforces.com/contest/60/problem/A) |
| 505 | Array | 57C | 1900 | [Link](https://codeforces.com/contest/57/problem/C) |
| 506 | Spoilt Permutation | 56B | 1300 | [Link](https://codeforces.com/problemset/problem/56/B) |
| 507 | Bar | 56A | 1000 | [Link](https://codeforces.com/problemset/problem/56/A) |
| 508 | Reconnaissance | 32A | 800 | [Link](https://codeforces.com/problemset/problem/32/A) |
| 509 | Worms Evolution | 31A | 1200 | [Link](https://codeforces.com/problemset/problem/31/A) |
| 510 | Regular Bracket Sequence | 26B | 1400 | [Link](https://codeforces.com/problemset/problem/26/B) |
| 511 | Almost Prime | 26A | 900 | [Link](https://codeforces.com/contest/26/problem/A) |
| 512 | Watermelon | 4A | 800 | [Link](https://codeforces.com/problemset/problem/4/A) |
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
