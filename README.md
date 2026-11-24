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

**Total solutions uploaded:** 592
**Last updated:** 2026-11-23T23:34:13.658439
**Current day counter:** 119

**By rating:** 800 (147), 900 (68), 1000 (98), 1100 (77), 1200 (83), 1300 (53), 1400 (31), 1500 (10), 1600 (14), 1700 (4), 1800 (2), 1900 (1), 2000 (1), Unrated (3)

| # | Problem | Contest | Rating | Link |
|---|---------|---------|--------|------|
| 1 | Predominant Frequency Division | 2242B | 1000 | [Link](https://codeforces.com/contest/2242/problem/B) |
| 2 | Bigrams | 2242A | 800 | [Link](https://codeforces.com/contest/2242/problem/A) |
| 3 | RemovevomeR | 2241C | 1000 | [Link](https://codeforces.com/contest/2241/problem/C) |
| 4 | Good times Good times | 2241B | 1100 | [Link](https://codeforces.com/contest/2241/problem/B) |
| 5 | Divide and Conquer | 2241A | 800 | [Link](https://codeforces.com/contest/2241/problem/A) |
| 6 | Another Popcount Problem | 2240A | 800 | [Link](https://codeforces.com/contest/2240/problem/A) |
| 7 | Crimson Triples | 2238B | 900 | [Link](https://codeforces.com/contest/2238/problem/B) |
| 8 | Another Puzzle from Papyrus | 2238A | 800 | [Link](https://codeforces.com/contest/2238/problem/A) |
| 9 | Duck Surplus | 2237C | 1000 | [Link](https://codeforces.com/contest/2237/problem/C) |
| 10 | Annoying the Ghost | 2237B | 1000 | [Link](https://codeforces.com/contest/2237/problem/B) |
| 11 | Destroying Towers | 2237A | 800 | [Link](https://codeforces.com/contest/2237/problem/A) |
| 12 | Omsk Programmers | 2236C | 1000 | [Link](https://codeforces.com/contest/2236/problem/C) |
| 13 | Tatar TV Show | 2236B | 800 | [Link](https://codeforces.com/contest/2236/problem/B) |
| 14 | Games on the Train | 2236A | 800 | [Link](https://codeforces.com/contest/2236/problem/A) |
| 15 | Palindrome, Twelve and Two Terms | 2234B | 800 | [Link](https://codeforces.com/contest/2234/problem/B) |
| 16 | Euclid, Sequence and Two Numbers | 2234A | 800 | [Link](https://codeforces.com/contest/2234/problem/A) |
| 17 | Seating Arrangement (Easy Version) | 2232C1 | 1300 | [Link](https://codeforces.com/contest/2232/problem/C1) |
| 18 | Cake Leveling | 2232B | 900 | [Link](https://codeforces.com/contest/2232/problem/B) |
| 19 | Convergence | 2232A | 800 | [Link](https://codeforces.com/contest/2232/problem/A) |
| 20 | Chipmunk Theo and Equality | 2231C | 1400 | [Link](https://codeforces.com/contest/2231/problem/C) |
| 21 | Another Sorting Problem | 2231B | 1100 | [Link](https://codeforces.com/contest/2231/problem/B) |
| 22 | Construct an Array | 2231A | 800 | [Link](https://codeforces.com/contest/2231/problem/A) |
| 23 | Snowfall | 2227C | 800 | [Link](https://codeforces.com/contest/2227/problem/C) |
| 24 | Party Monster | 2227B | 800 | [Link](https://codeforces.com/contest/2227/problem/B) |
| 25 | Koshary | 2227A | 800 | [Link](https://codeforces.com/contest/2227/problem/A) |
| 26 | Disturbing Distribution | 2226A | 800 | [Link](https://codeforces.com/contest/2226/problem/A) |
| 27 | Red-Black Pairs | 2225C | 1100 | [Link](https://codeforces.com/contest/2225/problem/C) |
| 28 | Alternating String | 2225B | 900 | [Link](https://codeforces.com/contest/2225/problem/B) |
| 29 | A Number Between Two Others | 2225A | 800 | [Link](https://codeforces.com/contest/2225/problem/A) |
| 30 | Zhily and Array Operating | 2224A | 800 | [Link](https://codeforces.com/contest/2224/problem/A) |
| 31 | A Wonderful Contest | 2222A | 800 | [Link](https://codeforces.com/contest/2222/problem/A) |
| 32 | OIE Excursion | 2220B | 1200 | [Link](https://codeforces.com/contest/2220/problem/B) |
| 33 | Blocked | 2220A | 800 | [Link](https://codeforces.com/contest/2220/problem/A) |
| 34 | The 67th Permutation Problem | 2218C | 800 | [Link](https://codeforces.com/problemset/problem/2218/C) |
| 35 | The 67th 6-7 Integer Problem | 2218B | 800 | [Link](https://codeforces.com/contest/2218/problem/B) |
| 36 | The 67th Integer Problem | 2218A | 800 | [Link](https://codeforces.com/contest/2218/problem/A) |
| 37 | Flip the Bit (Easy Version) | 2217B | 1000 | [Link](https://codeforces.com/contest/2217/problem/B) |
| 38 | The Equalizer | 2217A | 800 | [Link](https://codeforces.com/contest/2217/problem/A) |
| 39 | Course Wishes | 2216A | 900 | [Link](https://codeforces.com/contest/2216/problem/A) |
| 40 | And? | 2214C | Unrated | [Link](https://codeforces.com/contest/2214/problem/C) |
| 41 | Are You Smiling? | 2214B | Unrated | [Link](https://codeforces.com/contest/2214/problem/B) |
| 42 | Odd One Out | 2214A | Unrated | [Link](https://codeforces.com/contest/2214/problem/A) |
| 43 | Mickey Mouse Constructive | 2211B | 1100 | [Link](https://codeforces.com/problemset/problem/2211/B) |
| 44 | A Simple GCD Problem (Easy Version) | 2210C1 | 1200 | [Link](https://codeforces.com/contest/2210/problem/C1) |
| 45 | Simply Sitting on Chairs | 2210B | 900 | [Link](https://codeforces.com/contest/2210/problem/B) |
| 46 | A Simple Sequence | 2210A | 800 | [Link](https://codeforces.com/contest/2210/problem/A) |
| 47 | 1-1 | 2207A | 800 | [Link](https://codeforces.com/problemset/problem/2207/A) |
| 48 | Simons and Cakes for Success | 2205B | 800 | [Link](https://codeforces.com/problemset/problem/2205/B) |
| 49 | Spring | 2204C | 1000 | [Link](https://codeforces.com/contest/2204/problem/C) |
| 50 | Right Maximum | 2204B | 800 | [Link](https://codeforces.com/contest/2204/problem/B) |
| 51 | Passing the Ball | 2204A | 800 | [Link](https://codeforces.com/contest/2204/problem/A) |
| 52 | Beautiful Numbers | 2203B | 1000 | [Link](https://codeforces.com/contest/2203/problem/B) |
| 53 | Towers of Boxes | 2203A | 800 | [Link](https://codeforces.com/contest/2203/problem/A) |
| 54 | Parkour Design | 2202A | 800 | [Link](https://codeforces.com/contest/2202/problem/A) |
| 55 | Specialty String | 2200C | 900 | [Link](https://codeforces.com/contest/2200/problem/C) |
| 56 | Deletion Sort | 2200B | 800 | [Link](https://codeforces.com/contest/2200/problem/B) |
| 57 | Eating Game | 2200A | 800 | [Link](https://codeforces.com/contest/2200/problem/A) |
| 58 | Two Towers | 2199B | 1400 | [Link](https://codeforces.com/problemset/problem/2199/B) |
| 59 | Array and Permutation | 2197B | 1100 | [Link](https://codeforces.com/contest/2197/problem/B) |
| 60 | Friendly Numbers | 2197A | 800 | [Link](https://codeforces.com/contest/2197/problem/A) |
| 61 | Dice Roll Sequence | 2195C | 1100 | [Link](https://codeforces.com/contest/2195/problem/C) |
| 62 | Heapify 1 | 2195B | 900 | [Link](https://codeforces.com/contest/2195/problem/B) |
| 63 | Sieve of Erato67henes | 2195A | 800 | [Link](https://codeforces.com/contest/2195/problem/A) |
| 64 | Offshores | 2194B | 1000 | [Link](https://codeforces.com/contest/2194/problem/B) |
| 65 | Lawn Mower | 2194A | 800 | [Link](https://codeforces.com/contest/2194/problem/A) |
| 66 | Replace and Sum | 2193C | 1000 | [Link](https://codeforces.com/contest/2193/problem/C) |
| 67 | Reverse a Permutation | 2193B | 800 | [Link](https://codeforces.com/contest/2193/problem/B) |
| 68 | DBMB and the Array | 2193A | 800 | [Link](https://codeforces.com/contest/2193/problem/A) |
| 69 | Flipping Binary String | 2192B | 1000 | [Link](https://codeforces.com/contest/2192/problem/B) |
| 70 | MEX Reordering | 2191B | 1000 | [Link](https://codeforces.com/contest/2191/problem/B) |
| 71 | Array Coloring | 2191A | 800 | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 72 | Sorting Game | 2190A | 1200 | [Link](https://codeforces.com/problemset/problem/2190/A) |
| 73 | Shifted MEX | 2185C | 900 | [Link](https://codeforces.com/contest/2185/problem/C) |
| 74 | Prefix Max | 2185B | 800 | [Link](https://codeforces.com/contest/2185/problem/B) |
| 75 | Perfect Root | 2185A | 800 | [Link](https://codeforces.com/contest/2185/problem/A) |
| 76 | Huge Pile | 2184C | 1100 | [Link](https://codeforces.com/contest/2184/problem/C) |
| 77 | Hourglass | 2184B | 1100 | [Link](https://codeforces.com/contest/2184/problem/B) |
| 78 | Social Experiment | 2184A | 800 | [Link](https://codeforces.com/contest/2184/problem/A) |
| 79 | Production of Snowmen | 2182C | 1200 | [Link](https://codeforces.com/contest/2182/problem/C) |
| 80 | New Year Cake | 2182B | 800 | [Link](https://codeforces.com/contest/2182/problem/B) |
| 81 | New Year String | 2182A | 800 | [Link](https://codeforces.com/contest/2182/problem/A) |
| 82 | Ashmal | 2180B | 800 | [Link](https://codeforces.com/problemset/problem/2180/B) |
| 83 | Carnival Wheel | 2180A | 800 | [Link](https://codeforces.com/problemset/problem/2180/A) |
| 84 | Impost or Sus | 2178B | 900 | [Link](https://codeforces.com/problemset/problem/2178/B) |
| 85 | Optimal Shifts | 2176B | 1000 | [Link](https://codeforces.com/contest/2176/problem/B) |
| 86 | Needle in a Haystack | 2174A | 1200 | [Link](https://codeforces.com/problemset/problem/2174/A) |
| 87 | Niko's Tactical Cards | 2173B | 1100 | [Link](https://codeforces.com/contest/2173/problem/B) |
| 88 | Renako Amaori and XOR Game (easy version) | 2171C1 | 1100 | [Link](https://codeforces.com/contest/2171/problem/C1) |
| 89 | Shizuku Hoshikawa and Farm Legs | 2171A | 800 | [Link](https://codeforces.com/problemset/problem/2171/A) |
| 90 | Maximum Neighborhood | 2170A | 800 | [Link](https://codeforces.com/contest/2170/problem/A) |
| 91 | Drifting Away | 2169B | 1100 | [Link](https://codeforces.com/contest/2169/problem/B) |
| 92 | Isamatdin and His Magic Wand! | 2167C | 800 | [Link](https://codeforces.com/contest/2167/problem/C) |
| 93 | Your Name | 2167B | 800 | [Link](https://codeforces.com/contest/2167/problem/B) |
| 94 | Square? | 2167A | 800 | [Link](https://codeforces.com/contest/2167/problem/A) |
| 95 | Tab Closing | 2166B | 900 | [Link](https://codeforces.com/problemset/problem/2166/B) |
| 96 | Dungeon | 2164C | 1400 | [Link](https://codeforces.com/contest/2164/problem/C) |
| 97 | Even Modulo Pair | 2164B | 1000 | [Link](https://codeforces.com/contest/2164/problem/B) |
| 98 | Sequence Game | 2164A | 800 | [Link](https://codeforces.com/contest/2164/problem/A) |
| 99 | Siga ta Kymata | 2163B | 1700 | [Link](https://codeforces.com/contest/2163/problem/B) |
| 100 | Souvlaki VS. Kalamaki | 2163A | 800 | [Link](https://codeforces.com/contest/2163/problem/A) |
| 101 | Beautiful XOR | 2162C | 1100 | [Link](https://codeforces.com/contest/2162/problem/C) |
| 102 | Beautiful String | 2162B | 1000 | [Link](https://codeforces.com/contest/2162/problem/B) |
| 103 | Beautiful Average | 2162A | 800 | [Link](https://codeforces.com/contest/2162/problem/A) |
| 104 | Loyalty | 2161C | 1200 | [Link](https://codeforces.com/contest/2161/problem/C) |
| 105 | Reverse XOR | 2160C | 1300 | [Link](https://codeforces.com/problemset/problem/2160/C) |
| 106 | Distinct Elements | 2160B | 1100 | [Link](https://codeforces.com/problemset/problem/2160/B) |
| 107 | Split | 2158B | 1200 | [Link](https://codeforces.com/contest/2158/problem/B) |
| 108 | Suspension | 2158A | 800 | [Link](https://codeforces.com/contest/2158/problem/A) |
| 109 | Expansion Plan 2 | 2157B | 900 | [Link](https://codeforces.com/contest/2157/problem/B) |
| 110 | Dungeon Equilibrium | 2157A | 800 | [Link](https://codeforces.com/contest/2157/problem/A) |
| 111 | Strange Machine | 2156B | 1000 | [Link](https://codeforces.com/contest/2156/problem/B) |
| 112 | Pizza Time | 2156A | 800 | [Link](https://codeforces.com/contest/2156/problem/A) |
| 113 | Abraham's Great Escape | 2155B | 1100 | [Link](https://codeforces.com/contest/2155/problem/B) |
| 114 | El fucho | 2155A | 800 | [Link](https://codeforces.com/contest/2155/problem/A) |
| 115 | Make it Zigzag | 2154B | 1000 | [Link](https://codeforces.com/contest/2154/problem/B) |
| 116 | Notelock | 2154A | 800 | [Link](https://codeforces.com/contest/2154/problem/A) |
| 117 | Bitwise Reversion | 2153B | 800 | [Link](https://codeforces.com/contest/2153/problem/B) |
| 118 | Circle of Apple Trees | 2153A | 800 | [Link](https://codeforces.com/contest/2153/problem/A) |
| 119 | Catching the Krug | 2152B | 1300 | [Link](https://codeforces.com/contest/2152/problem/B) |
| 120 | Increase or Smash | 2152A | 800 | [Link](https://codeforces.com/contest/2152/problem/A) |
| 121 | MEX rose | 2149C | 900 | [Link](https://codeforces.com/problemset/problem/2149/C) |
| 122 | Unconventional Pairs | 2149B | 800 | [Link](https://codeforces.com/problemset/problem/2149/B) |
| 123 | Be Positive | 2149A | 800 | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 124 | Lasers | 2148B | 800 | [Link](https://codeforces.com/contest/2148/problem/B) |
| 125 | Sublime Sequence | 2148A | 800 | [Link](https://codeforces.com/contest/2148/problem/A) |
| 126 | Multiple Construction | 2147B | 1000 | [Link](https://codeforces.com/contest/2147/problem/B) |
| 127 | Shortest Increasing Path | 2147A | 800 | [Link](https://codeforces.com/contest/2147/problem/A) |
| 128 | Merging the Sets | 2146B | 1100 | [Link](https://codeforces.com/contest/2146/problem/B) |
| 129 | Equal Occurrences | 2146A | 800 | [Link](https://codeforces.com/contest/2146/problem/A) |
| 130 | Deck of Cards | 2145B | 1000 | [Link](https://codeforces.com/contest/2145/problem/B) |
| 131 | Discounts | 2143B | 1000 | [Link](https://codeforces.com/contest/2143/problem/B) |
| 132 | All Lengths Subtraction | 2143A | 800 | [Link](https://codeforces.com/contest/2143/problem/A) |
| 133 | Games | 2141B | 1200 | [Link](https://codeforces.com/problemset/problem/2141/B) |
| 134 | Furniture Store | 2141A | 800 | [Link](https://codeforces.com/problemset/problem/2141/A) |
| 135 | Another Divisibility Problem | 2140B | 900 | [Link](https://codeforces.com/problemset/problem/2140/B) |
| 136 | Shift Sort | 2140A | 800 | [Link](https://codeforces.com/contest/2140/problem/A) |
| 137 | Cake Collection | 2139B | 800 | [Link](https://codeforces.com/contest/2139/problem/B) |
| 138 | Maple and Multiplication | 2139A | 800 | [Link](https://codeforces.com/contest/2139/problem/A) |
| 139 | Maximum Even Sum | 2137C | 1100 | [Link](https://codeforces.com/contest/2137/problem/C) |
| 140 | Fun Permutation | 2137B | 900 | [Link](https://codeforces.com/contest/2137/problem/B) |
| 141 | Collatz Conjecture | 2137A | 800 | [Link](https://codeforces.com/contest/2137/problem/A) |
| 142 | In the Dream | 2136A | 800 | [Link](https://codeforces.com/problemset/problem/2136/A) |
| 143 | Even Larger | 2134C | 1200 | [Link](https://codeforces.com/problemset/problem/2134/C) |
| 144 | Add 0 or K | 2134B | 1200 | [Link](https://codeforces.com/problemset/problem/2134/B) |
| 145 | The Cunning Seller (easy version) | 2132C1 | 1000 | [Link](https://codeforces.com/contest/2132/problem/C1) |
| 146 | The Secret Number | 2132B | 900 | [Link](https://codeforces.com/contest/2132/problem/B) |
| 147 | Pathless | 2130B | 1100 | [Link](https://codeforces.com/contest/2130/problem/B) |
| 148 | Mix Mex Max | 2127A | 800 | [Link](https://codeforces.com/problemset/problem/2127/A) |
| 149 | I Will Definitely Make It | 2126C | 1100 | [Link](https://codeforces.com/contest/2126/problem/C) |
| 150 | No Casino in the Mountains | 2126B | 800 | [Link](https://codeforces.com/contest/2126/problem/B) |
| 151 | Count Good Numbers | 2125C | 1100 | [Link](https://codeforces.com/contest/2125/problem/C) |
| 152 | Left and Down | 2125B | 900 | [Link](https://codeforces.com/contest/2125/problem/B) |
| 153 | Difficult Contest | 2125A | 800 | [Link](https://codeforces.com/contest/2125/problem/A) |
| 154 | Subset Multiplication | 2124C | 1300 | [Link](https://codeforces.com/problemset/problem/2124/C) |
| 155 | Minimise Sum | 2124B | 1000 | [Link](https://codeforces.com/contest/2124/problem/B) |
| 156 | Prefix Min and Suffix Max | 2123C | 1000 | [Link](https://codeforces.com/contest/2123/problem/C) |
| 157 | Tournament | 2123B | 800 | [Link](https://codeforces.com/contest/2123/problem/B) |
| 158 | Pile Shuffling | 2122B | 1100 | [Link](https://codeforces.com/contest/2122/problem/B) |
| 159 | Above the Clouds | 2121B | 800 | [Link](https://codeforces.com/contest/2121/problem/B) |
| 160 | Square of Rectangles | 2120A | 800 | [Link](https://codeforces.com/problemset/problem/2120/A) |
| 161 | Line Segments | 2119B | 1200 | [Link](https://codeforces.com/contest/2119/problem/B) |
| 162 | Make It Beautiful | 2118C | 1300 | [Link](https://codeforces.com/problemset/problem/2118/C) |
| 163 | Cool Partition | 2117C | 1200 | [Link](https://codeforces.com/contest/2117/problem/C) |
| 164 | Need More Arrays | 2114C | 1000 | [Link](https://codeforces.com/problemset/problem/2114/C) |
| 165 | Shrinking Array | 2112B | 1100 | [Link](https://codeforces.com/contest/2112/problem/B) |
| 166 | Equal Values | 2111C | 1100 | [Link](https://codeforces.com/problemset/problem/2111/C) |
| 167 | Energy Crystals | 2111A | 800 | [Link](https://codeforces.com/problemset/problem/2111/A) |
| 168 | Slice to Survive | 2109B | 1200 | [Link](https://codeforces.com/problemset/problem/2109/B) |
| 169 | Apples in Boxes | 2107B | 1100 | [Link](https://codeforces.com/problemset/problem/2107/B) |
| 170 | LRC and VIP | 2107A | 800 | [Link](https://codeforces.com/problemset/problem/2107/A) |
| 171 | Cherry Bomb | 2106C | 1000 | [Link](https://codeforces.com/contest/2106/problem/C) |
| 172 | St. Chroma | 2106B | 900 | [Link](https://codeforces.com/contest/2106/problem/B) |
| 173 | Dr. TC | 2106A | 800 | [Link](https://codeforces.com/contest/2106/problem/A) |
| 174 | Card Game | 2104C | 1100 | [Link](https://codeforces.com/problemset/problem/2104/C) |
| 175 | Move to the End | 2104B | 1000 | [Link](https://codeforces.com/problemset/problem/2104/B) |
| 176 | Dinner Time | 2102A | 900 | [Link](https://codeforces.com/problemset/problem/2102/A) |
| 177 | Wonderful Sticks | 2096A | 800 | [Link](https://codeforces.com/contest/2096/problem/A) |
| 178 | Asuna and the Mosquitoes | 2092C | 1200 | [Link](https://codeforces.com/problemset/problem/2092/C) |
| 179 | Kamilka and the Sheep | 2092A | 800 | [Link](https://codeforces.com/problemset/problem/2092/A) |
| 180 | Combination Lock | 2091C | 1000 | [Link](https://codeforces.com/contest/2091/problem/C) |
| 181 | Treasure Hunt | 2090A | 800 | [Link](https://codeforces.com/problemset/problem/2090/A) |
| 182 | Serval and Final MEX | 2085B | 1200 | [Link](https://codeforces.com/problemset/problem/2085/B) |
| 183 | Vicious Labyrinth | 2078B | 1100 | [Link](https://codeforces.com/problemset/problem/2078/B) |
| 184 | Having Been a Treasurer in the Past, I Help Goblins Deceive | 2072B | 900 | [Link](https://codeforces.com/problemset/problem/2072/B) |
| 185 | Robot Program | 2070B | 1100 | [Link](https://codeforces.com/problemset/problem/2070/B) |
| 186 | Adjacent Digit Sums | 2067A | 800 | [Link](https://codeforces.com/contest/2067/problem/A) |
| 187 | Skibidus and Ohio | 2065B | 800 | [Link](https://codeforces.com/problemset/problem/2065/B) |
| 188 | Subsequence Update | 2063B | 1100 | [Link](https://codeforces.com/problemset/problem/2063/B) |
| 189 | Cirno and Operations | 2062C | 1200 | [Link](https://codeforces.com/problemset/problem/2062/C) |
| 190 | Kevin and Geometry | 2061B | 1100 | [Link](https://codeforces.com/problemset/problem/2061/B) |
| 191 | Kevin and Arithmetic | 2061A | 800 | [Link](https://codeforces.com/contest/2061/problem/A) |
| 192 | Game of Mathletes | 2060C | 900 | [Link](https://codeforces.com/problemset/problem/2060/C) |
| 193 | Crafting | 2055B | 1000 | [Link](https://codeforces.com/problemset/problem/2055/B) |
| 194 | Preparing for the Olympiad | 2051A | 800 | [Link](https://codeforces.com/problemset/problem/2051/A) |
| 195 | Transfusion | 2050B | 1100 | [Link](https://codeforces.com/problemset/problem/2050/B) |
| 196 | Kevin and Binary Strings | 2048C | 1200 | [Link](https://codeforces.com/problemset/problem/2048/C) |
| 197 | Replace Character | 2047B | 900 | [Link](https://codeforces.com/problemset/problem/2047/B) |
| 198 | Easy Problem | 2044A | 800 | [Link](https://codeforces.com/problemset/problem/2044/A) |
| 199 | Digits | 2043B | 1100 | [Link](https://codeforces.com/contest/2043/problem/B) |
| 200 | Bowling Frame | 2041B | 1200 | [Link](https://codeforces.com/problemset/problem/2041/B) |
| 201 | Shohag Loves Strings | 2039B | 1000 | [Link](https://codeforces.com/problemset/problem/2039/B) |
| 202 | Bonus Project | 2038A | 1400 | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 203 | Anya and 1100 | 2036C | 1100 | [Link](https://codeforces.com/problemset/problem/2036/C) |
| 204 | Alya and Permutation | 2035C | 1400 | [Link](https://codeforces.com/problemset/problem/2035/C) |
| 205 | Rakhsh's Revival | 2034B | 1000 | [Link](https://codeforces.com/contest/2034/problem/B) |
| 206 | King Keykhosrow's Mystery | 2034A | 800 | [Link](https://codeforces.com/contest/2034/problem/A) |
| 207 | Penchick and BBQ Buns | 2031C | 1300 | [Link](https://codeforces.com/problemset/problem/2031/C) |
| 208 | Penchick and Satay Sticks | 2031B | 900 | [Link](https://codeforces.com/problemset/problem/2031/B) |
| 209 | Penchick and Modern Monument | 2031A | 800 | [Link](https://codeforces.com/problemset/problem/2031/A) |
| 210 | Replacement | 2029B | 1100 | [Link](https://codeforces.com/problemset/problem/2029/B) |
| 211 | Alice's Adventures in ''Chess'' | 2028A | 900 | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 212 | Maximize Mex | 2021B | 1200 | [Link](https://codeforces.com/problemset/problem/2021/B) |
| 213 | Brightness Begins | 2020B | 1200 | [Link](https://codeforces.com/problemset/problem/2020/B) |
| 214 | Robin Hood in Town | 2014C | 1100 | [Link](https://codeforces.com/problemset/problem/2014/C) |
| 215 | Battle for Survive | 2013B | 900 | [Link](https://codeforces.com/problemset/problem/2013/B) |
| 216 | Sakurako's Exam | 2008A | 800 | [Link](https://codeforces.com/contest/2008/problem/A) |
| 217 | The Strict Teacher (Hard Version) | 2005B2 | 1200 | [Link](https://codeforces.com/contest/2005/problem/B2) |
| 218 | Simple Palindrome | 2005A | 900 | [Link](https://codeforces.com/problemset/problem/2005/A) |
| 219 | Splitting Items | 2004C | 1100 | [Link](https://codeforces.com/contest/2004/problem/C) |
| 220 | Game with Doors | 2004B | 1000 | [Link](https://codeforces.com/problemset/problem/2004/B) |
| 221 | Numeric String Template | 2000C | 1000 | [Link](https://codeforces.com/problemset/problem/2000/C) |
| 222 | Seating in a Bus | 2000B | 800 | [Link](https://codeforces.com/problemset/problem/2000/B) |
| 223 | Showering | 1999C | 800 | [Link](https://codeforces.com/contest/1999/problem/C) |
| 224 | Minimize Equal Sum Subarrays | 1998B | 1000 | [Link](https://codeforces.com/problemset/problem/1998/B) |
| 225 | Even Positions | 1997C | 1100 | [Link](https://codeforces.com/problemset/problem/1997/C) |
| 226 | Light Switches | 1993C | 1400 | [Link](https://codeforces.com/problemset/problem/1993/C) |
| 227 | Parity and Sum | 1993B | 1100 | [Link](https://codeforces.com/problemset/problem/1993/B) |
| 228 | Gorilla and Permutation | 1992C | 900 | [Link](https://codeforces.com/contest/1992/problem/C) |
| 229 | Angry Monk | 1992B | 800 | [Link](https://codeforces.com/contest/1992/problem/B) |
| 230 | Only Pluses | 1992A | 800 | [Link](https://codeforces.com/contest/1992/problem/A) |
| 231 | AND Reconstruction | 1991B | 1100 | [Link](https://codeforces.com/problemset/problem/1991/B) |
| 232 | Array Craft | 1990B | 1200 | [Link](https://codeforces.com/problemset/problem/1990/B) |
| 233 | Submission Bait | 1990A | 900 | [Link](https://codeforces.com/problemset/problem/1990/A) |
| 234 | Split the Multiset | 1988A | 900 | [Link](https://codeforces.com/problemset/problem/1988/A) |
| 235 | Basil's Garden | 1987C | 1200 | [Link](https://codeforces.com/problemset/problem/1987/C) |
| 236 | X Axis | 1986A | 800 | [Link](https://codeforces.com/problemset/problem/1986/A) |
| 237 | Good Prefixes | 1985C | 1000 | [Link](https://codeforces.com/problemset/problem/1985/C) |
| 238 | 378QAQ and Mocha's Array | 1975B | 1000 | [Link](https://codeforces.com/problemset/problem/1975/B) |
| 239 | Cat, Fox and the Lonely Array | 1973B | 1300 | [Link](https://codeforces.com/problemset/problem/1973/B) |
| 240 | Coin Games | 1972B | 900 | [Link](https://codeforces.com/problemset/problem/1972/B) |
| 241 | Contest Proposal | 1972A | 800 | [Link](https://codeforces.com/problemset/problem/1972/A) |
| 242 | Assembly via Remainders | 1968C | 1000 | [Link](https://codeforces.com/problemset/problem/1968/C) |
| 243 | A BIT of a Construction | 1957B | 1100 | [Link](https://codeforces.com/problemset/problem/1957/B) |
| 244 | Nene and the Card Game | 1956B | 800 | [Link](https://codeforces.com/problemset/problem/1956/B) |
| 245 | Inhabitant of the Deep Sea | 1955C | 1300 | [Link](https://codeforces.com/contest/1955/problem/C) |
| 246 | Progressive Square | 1955B | 1000 | [Link](https://codeforces.com/problemset/problem/1955/B) |
| 247 | Make It Ugly | 1954B | 1200 | [Link](https://codeforces.com/problemset/problem/1954/B) |
| 248 | Painting the Ribbon | 1954A | 900 | [Link](https://codeforces.com/contest/1954/problem/A) |
| 249 | Battle Cows | 1951B | 1200 | [Link](https://codeforces.com/problemset/problem/1951/B) |
| 250 | Dual Trigger | 1951A | 900 | [Link](https://codeforces.com/problemset/problem/1951/A) |
| 251 | Median of an Array | 1946A | 800 | [Link](https://codeforces.com/contest/1946/problem/A) |
| 252 | MEX Game 1 | 1943A | 1300 | [Link](https://codeforces.com/problemset/problem/1943/A) |
| 253 | Bessie's Birthday Cake (Easy Version) | 1942C1 | 1300 | [Link](https://codeforces.com/contest/1942/problem/C1) |
| 254 | Rudolf and 121 | 1941B | 1000 | [Link](https://codeforces.com/problemset/problem/1941/B) |
| 255 | LR-remainders | 1932C | 1400 | [Link](https://codeforces.com/problemset/problem/1932/C) |
| 256 | Chaya Calendar | 1932B | 1100 | [Link](https://codeforces.com/problemset/problem/1932/B) |
| 257 | Make Equal Again | 1931C | 1000 | [Link](https://codeforces.com/problemset/problem/1931/C) |
| 258 | Recovering a Small String | 1931A | 800 | [Link](https://codeforces.com/problemset/problem/1931/A) |
| 259 | Permutation Printing | 1930B | 1000 | [Link](https://codeforces.com/problemset/problem/1930/B) |
| 260 | Maximise The Score | 1930A | 800 | [Link](https://codeforces.com/contest/1930/problem/A) |
| 261 | Following the String | 1927B | 900 | [Link](https://codeforces.com/problemset/problem/1927/B) |
| 262 | A Balanced Problemset? | 1925B | 1200 | [Link](https://codeforces.com/contest/1925/problem/B) |
| 263 | Sending Messages | 1921C | 900 | [Link](https://codeforces.com/problemset/problem/1921/C) |
| 264 | Summation Game | 1920B | 1100 | [Link](https://codeforces.com/problemset/problem/1920/B) |
| 265 | Plus-Minus Split | 1919B | 800 | [Link](https://codeforces.com/problemset/problem/1919/B) |
| 266 | Minimize Inversions | 1918B | 900 | [Link](https://codeforces.com/problemset/problem/1918/B) |
| 267 | Two Divisors | 1916B | 1000 | [Link](https://codeforces.com/contest/1916/problem/B) |
| 268 | 2023 | 1916A | 800 | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 269 | Quests | 1914C | 1100 | [Link](https://codeforces.com/problemset/problem/1914/C) |
| 270 | Problemsolving Log | 1914A | 800 | [Link](https://codeforces.com/contest/1914/problem/A) |
| 271 | Game with Multiset | 1913C | 1300 | [Link](https://codeforces.com/contest/1913/problem/C) |
| 272 | Swap and Delete | 1913B | 1000 | [Link](https://codeforces.com/problemset/problem/1913/B) |
| 273 | Make Almost Equal With Mod | 1909B | 1200 | [Link](https://codeforces.com/problemset/problem/1909/B) |
| 274 | Rook | 1907A | 800 | [Link](https://codeforces.com/problemset/problem/1907/A) |
| 275 | Collecting Game | 1904B | 1100 | [Link](https://codeforces.com/problemset/problem/1904/B) |
| 276 | Forked! | 1904A | 900 | [Link](https://codeforces.com/problemset/problem/1904/A) |
| 277 | Getting Points | 1902B | 1100 | [Link](https://codeforces.com/problemset/problem/1902/B) |
| 278 | Game with Integers | 1899A | 800 | [Link](https://codeforces.com/contest/1899/problem/A) |
| 279 | Two Out of Three | 1894B | 1000 | [Link](https://codeforces.com/problemset/problem/1894/B) |
| 280 | Deja Vu | 1891B | 1100 | [Link](https://codeforces.com/problemset/problem/1891/B) |
| 281 | Sum of Three | 1886A | 800 | [Link](https://codeforces.com/problemset/problem/1886/A) |
| 282 | Haunted House | 1884B | 1100 | [Link](https://codeforces.com/contest/1884/problem/B) |
| 283 | Raspberries | 1883C | 1000 | [Link](https://codeforces.com/contest/1883/problem/C) |
| 284 | Chemistry | 1883B | 900 | [Link](https://codeforces.com/problemset/problem/1883/B) |
| 285 | Three Threadlets | 1881B | 900 | [Link](https://codeforces.com/problemset/problem/1881/B) |
| 286 | Don't Try to Count | 1881A | 800 | [Link](https://codeforces.com/problemset/problem/1881/A) |
| 287 | Make it Alternating | 1879C | 1300 | [Link](https://codeforces.com/problemset/problem/1879/C) |
| 288 | How Much Does Daytona Cost? | 1878A | 800 | [Link](https://codeforces.com/problemset/problem/1878/A) |
| 289 | Goals of Victory | 1877A | 800 | [Link](https://codeforces.com/problemset/problem/1877/A) |
| 290 | Helmets in Night Light | 1876A | 1000 | [Link](https://codeforces.com/problemset/problem/1876/A) |
| 291 | Jellyfish and Green Apple | 1875C | 1400 | [Link](https://codeforces.com/problemset/problem/1875/C) |
| 292 | Jellyfish and Undertale | 1875A | 900 | [Link](https://codeforces.com/problemset/problem/1875/A) |
| 293 | Jellyfish and Game | 1874A | 1200 | [Link](https://codeforces.com/problemset/problem/1874/A) |
| 294 | Target Practice | 1873C | 800 | [Link](https://codeforces.com/problemset/problem/1873/C) |
| 295 | 2D Traveling | 1869B | 1100 | [Link](https://codeforces.com/problemset/problem/1869/B) |
| 296 | Make It Zero | 1869A | 900 | [Link](https://codeforces.com/problemset/problem/1869/A) |
| 297 | green_gold_dog, array and permutation | 1867A | 800 | [Link](https://codeforces.com/contest/1867/problem/A) |
| 298 | Sequence Game | 1862B | 800 | [Link](https://codeforces.com/problemset/problem/1862/B) |
| 299 | Prime Deletion | 1861A | 800 | [Link](https://codeforces.com/problemset/problem/1861/A) |
| 300 | Another Permutation Problem | 1859C | 1200 | [Link](https://codeforces.com/problemset/problem/1859/C) |
| 301 | Olya and Game with Arrays | 1859B | 1000 | [Link](https://codeforces.com/problemset/problem/1859/B) |
| 302 | United We Stand | 1859A | 800 | [Link](https://codeforces.com/problemset/problem/1859/A) |
| 303 | Assembly via Minimums | 1857C | 1200 | [Link](https://codeforces.com/problemset/problem/1857/C) |
| 304 | Good Arrays | 1856B | 900 | [Link](https://codeforces.com/contest/1856/problem/B) |
| 305 | Longest Divisors Interval | 1855B | 900 | [Link](https://codeforces.com/problemset/problem/1855/B) |
| 306 | Desorting | 1853A | 800 | [Link](https://codeforces.com/contest/1853/problem/A) |
| 307 | Ten Words of Wisdom | 1850B | 800 | [Link](https://codeforces.com/problemset/problem/1850/B) |
| 308 | Monsters | 1849B | 1000 | [Link](https://codeforces.com/problemset/problem/1849/B) |
| 309 | Morning Sandwich | 1849A | 800 | [Link](https://codeforces.com/problemset/problem/1849/A) |
| 310 | Vika and the Bridge | 1848B | 1200 | [Link](https://codeforces.com/problemset/problem/1848/B) |
| 311 | Forbidden Integer | 1845A | 800 | [Link](https://codeforces.com/problemset/problem/1845/A) |
| 312 | Particles | 1844C | 1300 | [Link](https://codeforces.com/problemset/problem/1844/C) |
| 313 | Permutations & Primes | 1844B | 1000 | [Link](https://codeforces.com/problemset/problem/1844/B) |
| 314 | Game with Board | 1841A | 800 | [Link](https://codeforces.com/contest/1841/problem/A) |
| 315 | Ski Resort | 1840C | 1000 | [Link](https://codeforces.com/problemset/problem/1840/C) |
| 316 | Lamps | 1839B | 1100 | [Link](https://codeforces.com/problemset/problem/1839/B) |
| 317 | Comparison String | 1837B | 900 | [Link](https://codeforces.com/problemset/problem/1837/B) |
| 318 | Grasshopper on a Line | 1837A | 800 | [Link](https://codeforces.com/contest/1837/problem/A) |
| 319 | Game with Reversing | 1834C | 1200 | [Link](https://codeforces.com/problemset/problem/1834/C) |
| 320 | Unit Array | 1834A | 800 | [Link](https://codeforces.com/contest/1834/problem/A) |
| 321 | Restore the Weather | 1833B | 900 | [Link](https://codeforces.com/problemset/problem/1833/B) |
| 322 | Contrast Value | 1832C | 1200 | [Link](https://codeforces.com/problemset/problem/1832/C) |
| 323 | Maximum Sum | 1832B | 1100 | [Link](https://codeforces.com/problemset/problem/1832/B) |
| 324 | Array merging | 1831B | 1000 | [Link](https://codeforces.com/problemset/problem/1831/B) |
| 325 | Twin Permutations | 1831A | 800 | [Link](https://codeforces.com/problemset/problem/1831/A) |
| 326 | Divisible Array | 1828A | 800 | [Link](https://codeforces.com/problemset/problem/1828/A) |
| 327 | Counting Orders | 1827A | 1100 | [Link](https://codeforces.com/problemset/problem/1827/A) |
| 328 | Dreaming of Freedom | 1826C | 1300 | [Link](https://codeforces.com/contest/1826/problem/C) |
| 329 | Lunatic Never Content | 1826B | 1100 | [Link](https://codeforces.com/problemset/problem/1826/B) |
| 330 | TubeTube Feed | 1822A | 800 | [Link](https://codeforces.com/problemset/problem/1822/A) |
| 331 | JoJo's Incredible Adventures | 1820B | 1100 | [Link](https://codeforces.com/problemset/problem/1820/B) |
| 332 | Grid Reconstruction | 1816B | 1000 | [Link](https://codeforces.com/problemset/problem/1816/B) |
| 333 | Coins | 1814A | 800 | [Link](https://codeforces.com/problemset/problem/1814/A) |
| 334 | Conveyor Belts | 1811B | 1000 | [Link](https://codeforces.com/problemset/problem/1811/B) |
| 335 | Candies | 1810B | 800 | [Link](https://codeforces.com/problemset/problem/1810/B) |
| 336 | Playing in a Casino | 1808B | 1200 | [Link](https://codeforces.com/problemset/problem/1808/B) |
| 337 | Walking Master | 1806A | 800 | [Link](https://codeforces.com/problemset/problem/1806/A) |
| 338 | We Need the Zero | 1805A | 800 | [Link](https://codeforces.com/problemset/problem/1805/A) |
| 339 | Powering the Hero (easy version) | 1800C1 | 1000 | [Link](https://codeforces.com/problemset/problem/1800/C1) |
| 340 | Count the Number of Pairs | 1800B | 1000 | [Link](https://codeforces.com/problemset/problem/1800/B) |
| 341 | Not Dividing | 1794B | 900 | [Link](https://codeforces.com/problemset/problem/1794/B) |
| 342 | Dora and Search | 1793C | 1200 | [Link](https://codeforces.com/contest/1793/problem/C) |
| 343 | Fedya and Array | 1793B | 1100 | [Link](https://codeforces.com/problemset/problem/1793/B) |
| 344 | Stand-up Comedian | 1792B | 1200 | [Link](https://codeforces.com/problemset/problem/1792/B) |
| 345 | Prepend and Append | 1791C | 800 | [Link](https://codeforces.com/problemset/problem/1791/C) |
| 346 | Premutation | 1790C | 1000 | [Link](https://codeforces.com/problemset/problem/1790/C) |
| 347 | Serval and Mocha's Array | 1789A | 800 | [Link](https://codeforces.com/problemset/problem/1789/A) |
| 348 | Number Factorization | 1787B | 1100 | [Link](https://codeforces.com/problemset/problem/1787/B) |
| 349 | Going to the Cinema | 1781B | 1000 | [Link](https://codeforces.com/contest/1781/problem/B) |
| 350 | GCD Partition | 1780B | 1100 | [Link](https://codeforces.com/problemset/problem/1780/B) |
| 351 | Different Differences | 1772C | 1000 | [Link](https://codeforces.com/contest/1772/problem/C) |
| 352 | Koxia and Permutation | 1770B | 1000 | [Link](https://codeforces.com/contest/1770/problem/B) |
| 353 | Koxia and Whiteboards | 1770A | 1000 | [Link](https://codeforces.com/problemset/problem/1770/A) |
| 354 | Notepad# | 1766B | 1000 | [Link](https://codeforces.com/contest/1766/problem/B) |
| 355 | Extremely Round | 1766A | 800 | [Link](https://codeforces.com/problemset/problem/1766/A) |
| 356 | Broken Keyboard | 1765B | 800 | [Link](https://codeforces.com/problemset/problem/1765/B) |
| 357 | Incinerate | 1763B | 1200 | [Link](https://codeforces.com/problemset/problem/1763/B) |
| 358 | Elimination of a Ring | 1761B | 1000 | [Link](https://codeforces.com/problemset/problem/1761/B) |
| 359 | Indirect Sort | 1750A | 800 | [Link](https://codeforces.com/contest/1750/problem/A) |
| 360 | Swap Game | 1747C | 1200 | [Link](https://codeforces.com/problemset/problem/1747/C) |
| 361 | Number Replacement | 1744A | 800 | [Link](https://codeforces.com/problemset/problem/1744/A) |
| 362 | Playing with GCD | 1736B | 1200 | [Link](https://codeforces.com/problemset/problem/1736/B) |
| 363 | Removing Smallest Multiples | 1734C | 1200 | [Link](https://codeforces.com/problemset/problem/1734/C) |
| 364 | Rule of League | 1733B | 900 | [Link](https://codeforces.com/problemset/problem/1733/B) |
| 365 | Bestie | 1732A | 1000 | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 366 | Kill Demodogs | 1731B | 1100 | [Link](https://codeforces.com/problemset/problem/1731/B) |
| 367 | Mainak and Array | 1726A | 900 | [Link](https://codeforces.com/problemset/problem/1726/A) |
| 368 | Basketball Together | 1725B | 1000 | [Link](https://codeforces.com/problemset/problem/1725/B) |
| 369 | Beautiful Array | 1715B | 1000 | [Link](https://codeforces.com/problemset/problem/1715/B) |
| 370 | Luke is a Foodie | 1704B | 1000 | [Link](https://codeforces.com/problemset/problem/1704/B) |
| 371 | Promo | 1697B | 900 | [Link](https://codeforces.com/problemset/problem/1697/B) |
| 372 | NIT Destroys the Universe | 1696B | 900 | [Link](https://codeforces.com/problemset/problem/1696/B) |
| 373 | Circle Game | 1695B | 1000 | [Link](https://codeforces.com/problemset/problem/1695/B) |
| 374 | Shoe Shuffling | 1691B | 1000 | [Link](https://codeforces.com/problemset/problem/1691/B) |
| 375 | Stone Age Problem | 1679B | 1200 | [Link](https://codeforces.com/problemset/problem/1679/B) |
| 376 | A Perfectly Balanced String? | 1673B | 1100 | [Link](https://codeforces.com/problemset/problem/1673/B) |
| 377 | Dolce Vita | 1671C | 1200 | [Link](https://codeforces.com/problemset/problem/1671/C) |
| 378 | Array Cloning Technique | 1665B | 900 | [Link](https://codeforces.com/problemset/problem/1665/B) |
| 379 | Subtract Operation | 1656B | 1100 | [Link](https://codeforces.com/problemset/problem/1656/B) |
| 380 | DIV + MOD | 1650B | 900 | [Link](https://codeforces.com/problemset/problem/1650/B) |
| 381 | Differential Sorting | 1635C | 1200 | [Link](https://codeforces.com/problemset/problem/1635/C) |
| 382 | Roof Construction | 1632B | 1000 | [Link](https://codeforces.com/problemset/problem/1632/B) |
| 383 | Fun with Even Subarrays | 1631B | 1100 | [Link](https://codeforces.com/problemset/problem/1631/B) |
| 384 | Make AP | 1624B | 900 | [Link](https://codeforces.com/problemset/problem/1624/B) |
| 385 | Balanced Stone Heaps | 1623C | 1600 | [Link](https://codeforces.com/problemset/problem/1623/C) |
| 386 | Set or Decrease | 1622C | 1600 | [Link](https://codeforces.com/problemset/problem/1622/C) |
| 387 | Triangles on a Rectangle | 1620B | 1000 | [Link](https://codeforces.com/problemset/problem/1620/B) |
| 388 | Paint the Array | 1618C | 1100 | [Link](https://codeforces.com/problemset/problem/1618/C) |
| 389 | Divan and a New Project  | 1614B | 1000 | [Link](https://codeforces.com/problemset/problem/1614/B) |
| 390 | Poisoned Dagger | 1613C | 1200 | [Link](https://codeforces.com/problemset/problem/1613/C) |
| 391 | Keshi Is Throwing a Party | 1610C | 1600 | [Link](https://codeforces.com/problemset/problem/1610/C) |
| 392 | Kalindrome Array | 1610B | 1100 | [Link](https://codeforces.com/problemset/problem/1610/B) |
| 393 | William the Vigilant | 1609B | 1100 | [Link](https://codeforces.com/problemset/problem/1609/B) |
| 394 | Odd Grasshopper | 1607B | 900 | [Link](https://codeforces.com/problemset/problem/1607/B) |
| 395 | AB Balance | 1606A | 900 | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 396 | Make Them Equal | 1594C | 1200 | [Link](https://codeforces.com/problemset/problem/1594/C) |
| 397 | Make it Divisible by 25 | 1593B | 900 | [Link](https://codeforces.com/problemset/problem/1593/B) |
| 398 | Grandma Capa Knits a Scarf | 1582C | 1200 | [Link](https://codeforces.com/problemset/problem/1582/C) |
| 399 | MEXor Mixup | 1567B | 1000 | [Link](https://codeforces.com/problemset/problem/1567/B) |
| 400 | Deep Down Below | 1561C | 1300 | [Link](https://codeforces.com/problemset/problem/1561/C) |
| 401 | Mocha and Math | 1559A | 900 | [Link](https://codeforces.com/problemset/problem/1559/A) |
| 402 | Reverse String | 1553B | 1300 | [Link](https://codeforces.com/contest/1553/problem/B) |
| 403 | Exciting Bets | 1543A | 900 | [Link](https://codeforces.com/problemset/problem/1543/A) |
| 404 | Strange Function | 1542C | 1600 | [Link](https://codeforces.com/problemset/problem/1542/C) |
| 405 | Pleasant Pairs | 1541B | 1200 | [Link](https://codeforces.com/problemset/problem/1541/B) |
| 406 | Stable Groups | 1539C | 1200 | [Link](https://codeforces.com/problemset/problem/1539/C) |
| 407 | Bad Boy | 1537B | 900 | [Link](https://codeforces.com/problemset/problem/1537/B) |
| 408 | Diluc and Kaeya | 1536C | 1500 | [Link](https://codeforces.com/problemset/problem/1536/C) |
| 409 | Prinzessin der Verurteilung | 1536B | 1200 | [Link](https://codeforces.com/problemset/problem/1536/B) |
| 410 | Permutation Sort | 1525B | 900 | [Link](https://codeforces.com/problemset/problem/1525/B) |
| 411 | Nastia and a Good Array | 1521B | 1300 | [Link](https://codeforces.com/problemset/problem/1521/B) |
| 412 | Product 1 Modulo N | 1514C | 1600 | [Link](https://codeforces.com/problemset/problem/1514/C) |
| 413 | Double-ended Strings | 1506C | 1000 | [Link](https://codeforces.com/problemset/problem/1506/C) |
| 414 | Flip the Bits | 1504B | 1200 | [Link](https://codeforces.com/problemset/problem/1504/B) |
| 415 | M-arrays | 1497B | 1200 | [Link](https://codeforces.com/problemset/problem/1497/B) |
| 416 | Sum of Cubes | 1490C | 1100 | [Link](https://codeforces.com/contest/1490/problem/C) |
| 417 | Cat Cycle | 1487B | 1200 | [Link](https://codeforces.com/problemset/problem/1487/B) |
| 418 | Add and Divide | 1485A | 1000 | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 419 | Searching Local Minimum | 1479A | 1700 | [Link](https://codeforces.com/contest/1479/problem/A) |
| 420 | Strange Partition | 1471A | 900 | [Link](https://codeforces.com/problemset/problem/1471/A) |
| 421 | Row GCD | 1458A | 1600 | [Link](https://codeforces.com/problemset/problem/1458/A) |
| 422 | Sum of Medians | 1440B | 900 | [Link](https://codeforces.com/problemset/problem/1440/B) |
| 423 | Valerii Against Everyone | 1438B | 1000 | [Link](https://codeforces.com/problemset/problem/1438/B) |
| 424 | Buying Torches | 1418A | 1000 | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 425 | Fair Numbers | 1411B | 1000 | [Link](https://codeforces.com/problemset/problem/1411/B) |
| 426 | Create The Teams | 1380C | 1400 | [Link](https://codeforces.com/problemset/problem/1380/C) |
| 427 | Three Indices | 1380A | 900 | [Link](https://codeforces.com/problemset/problem/1380/A) |
| 428 | Element Extermination | 1375C | 1400 | [Link](https://codeforces.com/problemset/problem/1375/C) |
| 429 | Move Brackets | 1374C | 1000 | [Link](https://codeforces.com/problemset/problem/1374/C) |
| 430 | Multiply by 2, divide by 6 | 1374B | 900 | [Link](https://codeforces.com/problemset/problem/1374/B) |
| 431 | 01 Game | 1373B | 900 | [Link](https://codeforces.com/problemset/problem/1373/B) |
| 432 | Omkar and Last Class of Math | 1372B | 1300 | [Link](https://codeforces.com/problemset/problem/1372/B) |
| 433 | Number Game | 1370C | 1400 | [Link](https://codeforces.com/contest/1370/problem/C) |
| 434 | Shuffle | 1366B | 1300 | [Link](https://codeforces.com/problemset/problem/1366/B) |
| 435 | Most socially-distanced subsequence | 1364B | 1300 | [Link](https://codeforces.com/contest/1364/problem/B) |
| 436 | Subsequence Hate | 1363B | 1400 | [Link](https://codeforces.com/contest/1363/problem/B) |
| 437 | Johnny and Another Rating Drop | 1362C | 1400 | [Link](https://codeforces.com/problemset/problem/1362/C) |
| 438 | Johnny and Ancient Computer | 1362A | 1000 | [Link](https://codeforces.com/problemset/problem/1362/A) |
| 439 | K-th Not Divisible by n | 1352C | 1200 | [Link](https://codeforces.com/problemset/problem/1352/C) |
| 440 | Orac and LCM | 1349A | 1600 | [Link](https://codeforces.com/problemset/problem/1349/A) |
| 441 | Alternating Subsequence | 1343C | 1200 | [Link](https://codeforces.com/problemset/problem/1343/C) |
| 442 | Nastya and Door | 1341B | 1300 | [Link](https://codeforces.com/contest/1341/problem/B) |
| 443 | Xenia and Colorful Gems | 1336B | 1700 | [Link](https://codeforces.com/problemset/problem/1336/B) |
| 444 | Sum of Odd Integers | 1327A | 1100 | [Link](https://codeforces.com/contest/1327/problem/A) |
| 445 | Bogosort | 1312B | 1000 | [Link](https://codeforces.com/problemset/problem/1312/B) |
| 446 | Product of Three Numbers | 1294C | 1300 | [Link](https://codeforces.com/problemset/problem/1294/C) |
| 447 | Fadi and LCM | 1285C | 1400 | [Link](https://codeforces.com/problemset/problem/1285/C) |
| 448 | Just Eat It! | 1285B | 1300 | [Link](https://codeforces.com/problemset/problem/1285/B) |
| 449 | Heating | 1260A | 1000 | [Link](https://codeforces.com/problemset/problem/1260/A) |
| 450 | Minimize The Integer | 1251C | 1600 | [Link](https://codeforces.com/problemset/problem/1251/C) |
| 451 | Balanced Tunnel | 1237B | 1300 | [Link](https://codeforces.com/contest/1237/problem/B) |
| 452 | Labs | 1236C | 1300 | [Link](https://codeforces.com/problemset/problem/1236/C) |
| 453 | TV Subscriptions (Hard Version) | 1225B2 | 1300 | [Link](https://codeforces.com/problemset/problem/1225/B2) |
| 454 | Badges | 1214B | 1100 | [Link](https://codeforces.com/problemset/problem/1214/B) |
| 455 | Common Divisors | 1203C | 1300 | [Link](https://codeforces.com/contest/1203/problem/C) |
| 456 | Maximum Median | 1201C | 1400 | [Link](https://codeforces.com/problemset/problem/1201/C) |
| 457 | Email from Polycarp | 1185B | 1200 | [Link](https://codeforces.com/problemset/problem/1185/B) |
| 458 | WOW Factor | 1178B | 1300 | [Link](https://codeforces.com/contest/1178/problem/B) |
| 459 | Ehab and a Special Coloring Problem | 1174C | 1300 | [Link](https://codeforces.com/problemset/problem/1174/C) |
| 460 | Ehab Fails to Be Thanos | 1174A | 1000 | [Link](https://codeforces.com/problemset/problem/1174/A) |
| 461 | Reverse a Substring | 1155A | 1000 | [Link](https://codeforces.com/problemset/problem/1155/A) |
| 462 | Draw! | 1131B | 1400 | [Link](https://codeforces.com/problemset/problem/1131/B) |
| 463 | Alyona and a Narrow Fridge | 1119B | 1300 | [Link](https://codeforces.com/problemset/problem/1119/B) |
| 464 | Digits Sequence Dividing | 1107A | 900 | [Link](https://codeforces.com/problemset/problem/1107/A) |
| 465 | NN and the Optical Illusion | 1100C | 1200 | [Link](https://codeforces.com/problemset/problem/1100/C) |
| 466 | Good Array | 1077C | 1300 | [Link](https://codeforces.com/problemset/problem/1077/C) |
| 467 | LCM | 1068B | 1200 | [Link](https://codeforces.com/problemset/problem/1068/B) |
| 468 | Buying a TV Set | 1041B | 1000 | [Link](https://codeforces.com/problemset/problem/1041/B) |
| 469 | Palindrome Dance | 1040A | 1000 | [Link](https://codeforces.com/problemset/problem/1040/A) |
| 470 | Non-Coprime Partition | 1038B | 1100 | [Link](https://codeforces.com/problemset/problem/1038/B) |
| 471 | Reach Median | 1037B | 1300 | [Link](https://codeforces.com/contest/1037/problem/B) |
| 472 | Packets | 1037A | 1300 | [Link](https://codeforces.com/contest/1037/problem/A) |
| 473 | Square Difference | 1033B | 1100 | [Link](https://codeforces.com/contest/1033/problem/b) |
| 474 | New Building for SIS | 1020A | 1000 | [Link](https://codeforces.com/problemset/problem/1020/A) |
| 475 | Planning The Expedition | 1011B | 1200 | [Link](https://codeforces.com/problemset/problem/1011/B) |
| 476 | World Cup | 996B | 1300 | [Link](https://codeforces.com/contest/996/problem/B) |
| 477 | Getting an A | 991B | 900 | [Link](https://codeforces.com/problemset/problem/991/B) |
| 478 | Row | 982A | 1200 | [Link](https://codeforces.com/problemset/problem/982/A) |
| 479 | Watering System | 967B | 1000 | [Link](https://codeforces.com/problemset/problem/967/B) |
| 480 | Fafa and the Gates | 935B | 900 | [Link](https://codeforces.com/problemset/problem/935/B) |
| 481 | Fafa and his Company | 935A | 800 | [Link](https://codeforces.com/problemset/problem/935/A) |
| 482 | Cloning Toys | 922A | 1300 | [Link](https://codeforces.com/problemset/problem/922/A) |
| 483 | Boxes Packing | 903C | 1200 | [Link](https://codeforces.com/problemset/problem/903/C) |
| 484 | Dividing the numbers | 899C | 1300 | [Link](https://codeforces.com/problemset/problem/899/C) |
| 485 | Divisiblity of Differences | 876B | 1300 | [Link](https://codeforces.com/problemset/problem/876/B) |
| 486 | Diversity | 844A | 1000 | [Link](https://codeforces.com/problemset/problem/844/A) |
| 487 | The Festive Evening | 834B | 1100 | [Link](https://codeforces.com/problemset/problem/834/B) |
| 488 | Sagheer and Nubian Market | 812C | 1500 | [Link](https://codeforces.com/contest/812/problem/C) |
| 489 | Average Sleep Time | 808B | 1300 | [Link](https://codeforces.com/problemset/problem/808/B) |
| 490 | k-Factorization | 797A | 1100 | [Link](https://codeforces.com/problemset/problem/797/A) |
| 491 | Anastasia and pebbles | 789A | 1100 | [Link](https://codeforces.com/problemset/problem/789/A) |
| 492 | The Monster | 787A | 1200 | [Link](https://codeforces.com/problemset/problem/787/A) |
| 493 | Dishonest Sellers | 779C | 1200 | [Link](https://codeforces.com/problemset/problem/779/C) |
| 494 | Sherlock and his girlfriend | 776B | 1200 | [Link](https://codeforces.com/problemset/problem/776/B) |
| 495 | Table Tennis Game 2 | 765C | 1200 | [Link](https://codeforces.com/problemset/problem/765/C) |
| 496 | k-th divisor | 762A | 1400 | [Link](https://codeforces.com/problemset/problem/762/A) |
| 497 | Chloe and the sequence  | 743B | 1200 | [Link](https://codeforces.com/contest/743/problem/B) |
| 498 | Vladik and flights | 743A | 1200 | [Link](https://codeforces.com/contest/743/problem/A) |
| 499 | Anton and Digits | 734B | 800 | [Link](https://codeforces.com/problemset/problem/734/B) |
| 500 | Jumping Ball | 725A | 1000 | [Link](https://codeforces.com/problemset/problem/725/A) |
| 501 | Cellular Network | 702C | 1500 | [Link](https://codeforces.com/problemset/problem/702/C) |
| 502 | They Are Everywhere | 701C | 1500 | [Link](https://codeforces.com/problemset/problem/701/C) |
| 503 | Vacations | 698A | 1400 | [Link](https://codeforces.com/problemset/problem/698/A) |
| 504 | Enduring Exodus | 645C | 1600 | [Link](https://codeforces.com/contest/645/problem/c) |
| 505 | Lucky Numbers | 630C | 1100 | [Link](https://codeforces.com/problemset/problem/630/C) |
| 506 | Elephant | 617A | 800 | [Link](https://codeforces.com/contest/617/problem/A) |
| 507 | New Year and Old Property | 611B | 1300 | [Link](https://codeforces.com/contest/611/problem/B) |
| 508 | Saitama Destroys Hotel | 608A | 1000 | [Link](https://codeforces.com/problemset/problem/608/A) |
| 509 | Olesya and Rodion | 584A | 1000 | [Link](https://codeforces.com/contest/584/problem/A) |
| 510 | Kefa and Company | 580B | 1500 | [Link](https://codeforces.com/problemset/problem/580/B) |
| 511 | Vasya and Petya's Game | 576A | 1500 | [Link](https://codeforces.com/problemset/problem/576/A) |
| 512 | Bear and Poker | 573A | 1300 | [Link](https://codeforces.com/contest/573/problem/A) |
| 513 | Soldier and Badges | 546B | 1200 | [Link](https://codeforces.com/problemset/problem/546/B) |
| 514 | Quasi Binary | 538B | 1400 | [Link](https://codeforces.com/problemset/problem/538/B) |
| 515 | Two Buttons | 520B | 1400 | [Link](https://codeforces.com/problemset/problem/520/B) |
| 516 | A and B and Team Training | 519C | 1300 | [Link](https://codeforces.com/problemset/problem/519/C) |
| 517 | Drazil and Factorial | 515C | 1400 | [Link](https://codeforces.com/problemset/problem/515/C) |
| 518 | Chewbaсca and Number | 514A | 1200 | [Link](https://codeforces.com/contest/514/problem/A) |
| 519 | Anton and currency you all know | 508B | 1300 | [Link](https://codeforces.com/problemset/problem/508/B) |
| 520 | Amr and Music | 507A | 1000 | [Link](https://codeforces.com/contest/507/problem/A) |
| 521 | Modular Equations | 495B | 1600 | [Link](https://codeforces.com/problemset/problem/495/B) |
| 522 | Given Length and Sum of Digits... | 489C | 1400 | [Link](https://codeforces.com/problemset/problem/489/C) |
| 523 | Bits | 484A | 1700 | [Link](https://codeforces.com/problemset/problem/484/A) |
| 524 | Dreamoon and Stairs | 476A | 1000 | [Link](https://codeforces.com/problemset/problem/476/A) |
| 525 | I Wanna Be the Guy | 469A | 800 | [Link](https://codeforces.com/problemset/problem/469/A) |
| 526 | Wonder Room | 466B | 2000 | [Link](https://codeforces.com/problemset/problem/466/B) |
| 527 | Appleman and Card Game | 462B | 1300 | [Link](https://codeforces.com/problemset/problem/462/B) |
| 528 | Pashmak and Flowers | 459B | 1300 | [Link](https://codeforces.com/problemset/problem/459/B) |
| 529 | Pashmak and Garden | 459A | 1200 | [Link](https://codeforces.com/problemset/problem/459/A) |
| 530 | Boredom | 455A | 1500 | [Link](https://codeforces.com/problemset/problem/455/a) |
| 531 | Little Pony and Sort by Shift | 454B | 1200 | [Link](https://codeforces.com/problemset/problem/454/B) |
| 532 | Jzzhu and Sequences | 450B | 1300 | [Link](https://codeforces.com/problemset/problem/450/B) |
| 533 | Valera and Fruits | 441B | 1400 | [Link](https://codeforces.com/problemset/problem/441/B) |
| 534 | Kitahara Haruki's Gift | 433A | 1100 | [Link](https://codeforces.com/problemset/problem/433/A) |
| 535 | Megacity | 424B | 1200 | [Link](https://codeforces.com/problemset/problem/424/B) |
| 536 | Football | 417C | 1400 | [Link](https://codeforces.com/problemset/problem/417/C) |
| 537 | Mashmokh and Numbers | 414A | 1500 | [Link](https://codeforces.com/problemset/problem/414/A) |
| 538 | Fox and Box Accumulation | 388A | 1400 | [Link](https://codeforces.com/contest/388/problem/A) |
| 539 | New Year Candles | 379A | 1000 | [Link](https://codeforces.com/contest/379/problem/A) |
| 540 | Hamburgers | 371C | 1600 | [Link](https://codeforces.com/contest/371/problem/C) |
| 541 | Fence | 363B | 1100 | [Link](https://codeforces.com/problemset/problem/363/B) |
| 542 | Levko and Permutation | 361B | 1200 | [Link](https://codeforces.com/contest/361/problem/B) |
| 543 | TL | 350A | 1200 | [Link](https://codeforces.com/problemset/problem/350/A) |
| 544 | Alice and Bob | 346A | 1600 | [Link](https://codeforces.com/problemset/problem/346/A) |
| 545 | Simple Molecules | 344B | 1200 | [Link](https://codeforces.com/problemset/problem/344/B) |
| 546 | Rational Resistance | 343A | 1600 | [Link](https://codeforces.com/problemset/problem/343/A) |
| 547 | Xenia and Divisors | 342A | 1200 | [Link](https://codeforces.com/problemset/problem/342/A) |
| 548 | Xenia and Ringroad | 339B | 1000 | [Link](https://codeforces.com/problemset/problem/339/B) |
| 549 | Candy Bags | 334A | 1000 | [Link](https://codeforces.com/problemset/problem/334/A) |
| 550 | Hungry Sequence | 327B | 1200 | [Link](https://codeforces.com/problemset/problem/327/B) |
| 551 | Sereja and Bottles | 315A | 1400 | [Link](https://codeforces.com/problemset/problem/315/A) |
| 552 | Ilya and Queries | 313B | 1100 | [Link](https://codeforces.com/problemset/problem/313/B) |
| 553 | Yaroslav and Sequence | 301A | 1800 | [Link](https://codeforces.com/problemset/problem/301/A) |
| 554 | Sail | 298B | 1200 | [Link](https://codeforces.com/problemset/problem/298/B) |
| 555 | Greg and Array | 295A | 1400 | [Link](https://codeforces.com/problemset/problem/295/A) |
| 556 | Polo the Penguin and Matrix | 289B | 1400 | [Link](https://codeforces.com/problemset/problem/289/B) |
| 557 | Building Permutation | 285C | 1200 | [Link](https://codeforces.com/problemset/problem/285/C) |
| 558 | Books | 279B | 1400 | [Link](https://codeforces.com/contest/279/problem/B) |
| 559 | Little Girl and Maximum Sum | 276C | 1500 | [Link](https://codeforces.com/problemset/problem/276/C) |
| 560 | Lights Out | 275A | 900 | [Link](https://codeforces.com/problemset/problem/275/A) |
| 561 | Prime Matrix | 271B | 1300 | [Link](https://codeforces.com/contest/271/problem/B) |
| 562 | Fancy Fence | 270A | 1100 | [Link](https://codeforces.com/problemset/problem/270/A) |
| 563 | Queue at the School | 266B | 800 | [Link](https://codeforces.com/problemset/problem/266/B) |
| 564 | Stones on the Table | 266A | 800 | [Link](https://codeforces.com/problemset/problem/266/A) |
| 565 | Roadside Trees (Simplified Edition) | 265B | 1000 | [Link](https://codeforces.com/problemset/problem/265/B) |
| 566 | Adding Digits | 260A | 1400 | [Link](https://codeforces.com/problemset/problem/260/A) |
| 567 | Cards with Numbers | 254A | 1200 | [Link](https://codeforces.com/problemset/problem/254/A) |
| 568 | Boys and Girls | 253A | 1100 | [Link](https://codeforces.com/contest/253/problem/A) |
| 569 | Increase and Decrease | 246B | 1300 | [Link](https://codeforces.com/problemset/problem/246/B) |
| 570 | Two Bags of Potatoes | 239A | 1200 | [Link](https://codeforces.com/problemset/problem/239/A) |
| 571 | Easy Number Challenge | 236B | 1300 | [Link](https://codeforces.com/problemset/problem/236/B) |
| 572 | Reducing Fractions | 222C | 1800 | [Link](https://codeforces.com/problemset/problem/222/C) |
| 573 | Little Elephant and Problem | 220A | 1300 | [Link](https://codeforces.com/contest/220/problem/A) |
| 574 | Cut Ribbon | 189A | 1300 | [Link](https://codeforces.com/problemset/problem/189/A) |
| 575 | Phone Code | 172A | 800 | [Link](https://codeforces.com/problemset/problem/172/A) |
| 576 | Burning Midnight Oil | 165B | 1500 | [Link](https://codeforces.com/contest/165/problem/B) |
| 577 | Colliders | 154B | 1600 | [Link](https://codeforces.com/problemset/problem/154/B) |
| 578 | Unary | 133B | 1200 | [Link](https://codeforces.com/problemset/problem/133/B) |
| 579 | Cifera | 114A | 1000 | [Link](https://codeforces.com/contest/114/problem/A) |
| 580 | Testing Pants for Sadness | 103A | 1100 | [Link](https://codeforces.com/problemset/problem/103/A) |
| 581 | Magical Array | 83A | 1300 | [Link](https://codeforces.com/problemset/problem/83/A) |
| 582 | Petya and Countryside | 66B | 1100 | [Link](https://codeforces.com/problemset/problem/66/B) |
| 583 | Settlers' Training | 63B | 1200 | [Link](https://codeforces.com/problemset/problem/63/B) |
| 584 | Where Are My Flakes? | 60A | 1300 | [Link](https://codeforces.com/contest/60/problem/A) |
| 585 | Array | 57C | 1900 | [Link](https://codeforces.com/contest/57/problem/C) |
| 586 | Spoilt Permutation | 56B | 1300 | [Link](https://codeforces.com/problemset/problem/56/B) |
| 587 | Bar | 56A | 1000 | [Link](https://codeforces.com/problemset/problem/56/A) |
| 588 | Reconnaissance | 32A | 800 | [Link](https://codeforces.com/problemset/problem/32/A) |
| 589 | Worms Evolution | 31A | 1200 | [Link](https://codeforces.com/problemset/problem/31/A) |
| 590 | Regular Bracket Sequence | 26B | 1400 | [Link](https://codeforces.com/problemset/problem/26/B) |
| 591 | Almost Prime | 26A | 900 | [Link](https://codeforces.com/contest/26/problem/A) |
| 592 | Watermelon | 4A | 800 | [Link](https://codeforces.com/problemset/problem/4/A) |
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
