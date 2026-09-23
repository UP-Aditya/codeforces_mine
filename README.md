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

**Total solutions uploaded:** 342
**Last updated:** 2026-09-22T22:13:55.256864
**Current day counter:** 69

**By rating:** 800 (121), 900 (46), 1000 (53), 1100 (41), 1200 (35), 1300 (21), 1400 (9), 1500 (5), 1600 (6), 1700 (2), 1800 (1), Unrated (2)

| # | Problem | Contest | Rating | Link |
|---|---------|---------|--------|------|
| 1 | Bigrams | 2242A | 800 | [Link](https://codeforces.com/contest/2242/problem/A) |
| 2 | Good times Good times | 2241B | 1100 | [Link](https://codeforces.com/contest/2241/problem/B) |
| 3 | Divide and Conquer | 2241A | 800 | [Link](https://codeforces.com/contest/2241/problem/A) |
| 4 | Another Popcount Problem | 2240A | 800 | [Link](https://codeforces.com/contest/2240/problem/A) |
| 5 | Crimson Triples | 2238B | 900 | [Link](https://codeforces.com/contest/2238/problem/B) |
| 6 | Another Puzzle from Papyrus | 2238A | 800 | [Link](https://codeforces.com/contest/2238/problem/A) |
| 7 | Annoying the Ghost | 2237B | 1000 | [Link](https://codeforces.com/contest/2237/problem/B) |
| 8 | Destroying Towers | 2237A | 800 | [Link](https://codeforces.com/contest/2237/problem/A) |
| 9 | Games on the Train | 2236A | 800 | [Link](https://codeforces.com/contest/2236/problem/A) |
| 10 | Euclid, Sequence and Two Numbers | 2234A | 800 | [Link](https://codeforces.com/contest/2234/problem/A) |
| 11 | Cake Leveling | 2232B | 900 | [Link](https://codeforces.com/contest/2232/problem/B) |
| 12 | Convergence | 2232A | 800 | [Link](https://codeforces.com/contest/2232/problem/A) |
| 13 | Another Sorting Problem | 2231B | 1100 | [Link](https://codeforces.com/contest/2231/problem/B) |
| 14 | Construct an Array | 2231A | 800 | [Link](https://codeforces.com/contest/2231/problem/A) |
| 15 | Koshary | 2227A | 800 | [Link](https://codeforces.com/contest/2227/problem/A) |
| 16 | Disturbing Distribution | 2226A | 800 | [Link](https://codeforces.com/contest/2226/problem/A) |
| 17 | Alternating String | 2225B | 900 | [Link](https://codeforces.com/contest/2225/problem/B) |
| 18 | A Number Between Two Others | 2225A | 800 | [Link](https://codeforces.com/contest/2225/problem/A) |
| 19 | Zhily and Array Operating | 2224A | 800 | [Link](https://codeforces.com/contest/2224/problem/A) |
| 20 | A Wonderful Contest | 2222A | 800 | [Link](https://codeforces.com/contest/2222/problem/A) |
| 21 | Blocked | 2220A | 800 | [Link](https://codeforces.com/contest/2220/problem/A) |
| 22 | The 67th Integer Problem | 2218A | 800 | [Link](https://codeforces.com/contest/2218/problem/A) |
| 23 | Flip the Bit (Easy Version) | 2217B | 1000 | [Link](https://codeforces.com/contest/2217/problem/B) |
| 24 | The Equalizer | 2217A | 800 | [Link](https://codeforces.com/contest/2217/problem/A) |
| 25 | Course Wishes | 2216A | 900 | [Link](https://codeforces.com/contest/2216/problem/A) |
| 26 | Are You Smiling? | 2214B | Unrated | [Link](https://codeforces.com/contest/2214/problem/B) |
| 27 | Odd One Out | 2214A | Unrated | [Link](https://codeforces.com/contest/2214/problem/A) |
| 28 | Mickey Mouse Constructive | 2211B | 1100 | [Link](https://codeforces.com/problemset/problem/2211/B) |
| 29 | A Simple Sequence | 2210A | 800 | [Link](https://codeforces.com/contest/2210/problem/A) |
| 30 | 1-1 | 2207A | 800 | [Link](https://codeforces.com/problemset/problem/2207/A) |
| 31 | Passing the Ball | 2204A | 800 | [Link](https://codeforces.com/contest/2204/problem/A) |
| 32 | Beautiful Numbers | 2203B | 1000 | [Link](https://codeforces.com/contest/2203/problem/B) |
| 33 | Towers of Boxes | 2203A | 800 | [Link](https://codeforces.com/contest/2203/problem/A) |
| 34 | Parkour Design | 2202A | 800 | [Link](https://codeforces.com/contest/2202/problem/A) |
| 35 | Deletion Sort | 2200B | 800 | [Link](https://codeforces.com/contest/2200/problem/B) |
| 36 | Eating Game | 2200A | 800 | [Link](https://codeforces.com/contest/2200/problem/A) |
| 37 | Array and Permutation | 2197B | 1100 | [Link](https://codeforces.com/contest/2197/problem/B) |
| 38 | Friendly Numbers | 2197A | 800 | [Link](https://codeforces.com/contest/2197/problem/A) |
| 39 | Heapify 1 | 2195B | 900 | [Link](https://codeforces.com/contest/2195/problem/B) |
| 40 | Sieve of Erato67henes | 2195A | 800 | [Link](https://codeforces.com/contest/2195/problem/A) |
| 41 | Lawn Mower | 2194A | 800 | [Link](https://codeforces.com/contest/2194/problem/A) |
| 42 | DBMB and the Array | 2193A | 800 | [Link](https://codeforces.com/contest/2193/problem/A) |
| 43 | Flipping Binary String | 2192B | 1000 | [Link](https://codeforces.com/contest/2192/problem/B) |
| 44 | MEX Reordering | 2191B | 1000 | [Link](https://codeforces.com/contest/2191/problem/B) |
| 45 | Array Coloring | 2191A | 800 | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 46 | Sorting Game | 2190A | 1200 | [Link](https://codeforces.com/problemset/problem/2190/A) |
| 47 | Perfect Root | 2185A | 800 | [Link](https://codeforces.com/contest/2185/problem/A) |
| 48 | Hourglass | 2184B | 1100 | [Link](https://codeforces.com/contest/2184/problem/B) |
| 49 | Social Experiment | 2184A | 800 | [Link](https://codeforces.com/contest/2184/problem/A) |
| 50 | New Year String | 2182A | 800 | [Link](https://codeforces.com/contest/2182/problem/A) |
| 51 | Ashmal | 2180B | 800 | [Link](https://codeforces.com/problemset/problem/2180/B) |
| 52 | Carnival Wheel | 2180A | 800 | [Link](https://codeforces.com/problemset/problem/2180/A) |
| 53 | Impost or Sus | 2178B | 900 | [Link](https://codeforces.com/problemset/problem/2178/B) |
| 54 | Needle in a Haystack | 2174A | 1200 | [Link](https://codeforces.com/problemset/problem/2174/A) |
| 55 | Shizuku Hoshikawa and Farm Legs | 2171A | 800 | [Link](https://codeforces.com/problemset/problem/2171/A) |
| 56 | Maximum Neighborhood | 2170A | 800 | [Link](https://codeforces.com/contest/2170/problem/A) |
| 57 | Drifting Away | 2169B | 1100 | [Link](https://codeforces.com/contest/2169/problem/B) |
| 58 | Square? | 2167A | 800 | [Link](https://codeforces.com/contest/2167/problem/A) |
| 59 | Even Modulo Pair | 2164B | 1000 | [Link](https://codeforces.com/contest/2164/problem/B) |
| 60 | Sequence Game | 2164A | 800 | [Link](https://codeforces.com/contest/2164/problem/A) |
| 61 | Souvlaki VS. Kalamaki | 2163A | 800 | [Link](https://codeforces.com/contest/2163/problem/A) |
| 62 | Beautiful String | 2162B | 1000 | [Link](https://codeforces.com/contest/2162/problem/B) |
| 63 | Beautiful Average | 2162A | 800 | [Link](https://codeforces.com/contest/2162/problem/A) |
| 64 | Distinct Elements | 2160B | 1100 | [Link](https://codeforces.com/problemset/problem/2160/B) |
| 65 | Suspension | 2158A | 800 | [Link](https://codeforces.com/contest/2158/problem/A) |
| 66 | Expansion Plan 2 | 2157B | 900 | [Link](https://codeforces.com/contest/2157/problem/B) |
| 67 | Dungeon Equilibrium | 2157A | 800 | [Link](https://codeforces.com/contest/2157/problem/A) |
| 68 | Pizza Time | 2156A | 800 | [Link](https://codeforces.com/contest/2156/problem/A) |
| 69 | Abraham's Great Escape | 2155B | 1100 | [Link](https://codeforces.com/contest/2155/problem/B) |
| 70 | El fucho | 2155A | 800 | [Link](https://codeforces.com/contest/2155/problem/A) |
| 71 | Make it Zigzag | 2154B | 1000 | [Link](https://codeforces.com/contest/2154/problem/B) |
| 72 | Notelock | 2154A | 800 | [Link](https://codeforces.com/contest/2154/problem/A) |
| 73 | Bitwise Reversion | 2153B | 800 | [Link](https://codeforces.com/contest/2153/problem/B) |
| 74 | Circle of Apple Trees | 2153A | 800 | [Link](https://codeforces.com/contest/2153/problem/A) |
| 75 | Catching the Krug | 2152B | 1300 | [Link](https://codeforces.com/contest/2152/problem/B) |
| 76 | Increase or Smash | 2152A | 800 | [Link](https://codeforces.com/contest/2152/problem/A) |
| 77 | Be Positive | 2149A | 800 | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 78 | Lasers | 2148B | 800 | [Link](https://codeforces.com/contest/2148/problem/B) |
| 79 | Sublime Sequence | 2148A | 800 | [Link](https://codeforces.com/contest/2148/problem/A) |
| 80 | Shortest Increasing Path | 2147A | 800 | [Link](https://codeforces.com/contest/2147/problem/A) |
| 81 | Merging the Sets | 2146B | 1100 | [Link](https://codeforces.com/contest/2146/problem/B) |
| 82 | Equal Occurrences | 2146A | 800 | [Link](https://codeforces.com/contest/2146/problem/A) |
| 83 | Deck of Cards | 2145B | 1000 | [Link](https://codeforces.com/contest/2145/problem/B) |
| 84 | Discounts | 2143B | 1000 | [Link](https://codeforces.com/contest/2143/problem/B) |
| 85 | All Lengths Subtraction | 2143A | 800 | [Link](https://codeforces.com/contest/2143/problem/A) |
| 86 | Games | 2141B | 1200 | [Link](https://codeforces.com/problemset/problem/2141/B) |
| 87 | Furniture Store | 2141A | 800 | [Link](https://codeforces.com/problemset/problem/2141/A) |
| 88 | Another Divisibility Problem | 2140B | 900 | [Link](https://codeforces.com/problemset/problem/2140/B) |
| 89 | Shift Sort | 2140A | 800 | [Link](https://codeforces.com/contest/2140/problem/A) |
| 90 | Cake Collection | 2139B | 800 | [Link](https://codeforces.com/contest/2139/problem/B) |
| 91 | Maple and Multiplication | 2139A | 800 | [Link](https://codeforces.com/contest/2139/problem/A) |
| 92 | Fun Permutation | 2137B | 900 | [Link](https://codeforces.com/contest/2137/problem/B) |
| 93 | Collatz Conjecture | 2137A | 800 | [Link](https://codeforces.com/contest/2137/problem/A) |
| 94 | In the Dream | 2136A | 800 | [Link](https://codeforces.com/problemset/problem/2136/A) |
| 95 | Add 0 or K | 2134B | 1200 | [Link](https://codeforces.com/problemset/problem/2134/B) |
| 96 | Mix Mex Max | 2127A | 800 | [Link](https://codeforces.com/problemset/problem/2127/A) |
| 97 | Left and Down | 2125B | 900 | [Link](https://codeforces.com/contest/2125/problem/B) |
| 98 | Difficult Contest | 2125A | 800 | [Link](https://codeforces.com/contest/2125/problem/A) |
| 99 | Minimise Sum | 2124B | 1000 | [Link](https://codeforces.com/contest/2124/problem/B) |
| 100 | Above the Clouds | 2121B | 800 | [Link](https://codeforces.com/contest/2121/problem/B) |
| 101 | Square of Rectangles | 2120A | 800 | [Link](https://codeforces.com/problemset/problem/2120/A) |
| 102 | Line Segments | 2119B | 1200 | [Link](https://codeforces.com/contest/2119/problem/B) |
| 103 | Energy Crystals | 2111A | 800 | [Link](https://codeforces.com/problemset/problem/2111/A) |
| 104 | Apples in Boxes | 2107B | 1100 | [Link](https://codeforces.com/problemset/problem/2107/B) |
| 105 | LRC and VIP | 2107A | 800 | [Link](https://codeforces.com/problemset/problem/2107/A) |
| 106 | Dr. TC | 2106A | 800 | [Link](https://codeforces.com/contest/2106/problem/A) |
| 107 | Dinner Time | 2102A | 900 | [Link](https://codeforces.com/problemset/problem/2102/A) |
| 108 | Wonderful Sticks | 2096A | 800 | [Link](https://codeforces.com/contest/2096/problem/A) |
| 109 | Kamilka and the Sheep | 2092A | 800 | [Link](https://codeforces.com/problemset/problem/2092/A) |
| 110 | Treasure Hunt | 2090A | 800 | [Link](https://codeforces.com/problemset/problem/2090/A) |
| 111 | Having Been a Treasurer in the Past, I Help Goblins Deceive | 2072B | 900 | [Link](https://codeforces.com/problemset/problem/2072/B) |
| 112 | Adjacent Digit Sums | 2067A | 800 | [Link](https://codeforces.com/contest/2067/problem/A) |
| 113 | Kevin and Geometry | 2061B | 1100 | [Link](https://codeforces.com/problemset/problem/2061/B) |
| 114 | Kevin and Arithmetic | 2061A | 800 | [Link](https://codeforces.com/contest/2061/problem/A) |
| 115 | Crafting | 2055B | 1000 | [Link](https://codeforces.com/problemset/problem/2055/B) |
| 116 | Preparing for the Olympiad | 2051A | 800 | [Link](https://codeforces.com/problemset/problem/2051/A) |
| 117 | Easy Problem | 2044A | 800 | [Link](https://codeforces.com/problemset/problem/2044/A) |
| 118 | Digits | 2043B | 1100 | [Link](https://codeforces.com/contest/2043/problem/B) |
| 119 | Bowling Frame | 2041B | 1200 | [Link](https://codeforces.com/problemset/problem/2041/B) |
| 120 | Bonus Project | 2038A | 1400 | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 121 | King Keykhosrow's Mystery | 2034A | 800 | [Link](https://codeforces.com/contest/2034/problem/A) |
| 122 | Penchick and Modern Monument | 2031A | 800 | [Link](https://codeforces.com/problemset/problem/2031/A) |
| 123 | Alice's Adventures in ''Chess'' | 2028A | 900 | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 124 | Maximize Mex | 2021B | 1200 | [Link](https://codeforces.com/problemset/problem/2021/B) |
| 125 | Brightness Begins | 2020B | 1200 | [Link](https://codeforces.com/problemset/problem/2020/B) |
| 126 | Battle for Survive | 2013B | 900 | [Link](https://codeforces.com/problemset/problem/2013/B) |
| 127 | Sakurako's Exam | 2008A | 800 | [Link](https://codeforces.com/contest/2008/problem/A) |
| 128 | The Strict Teacher (Hard Version) | 2005B2 | 1200 | [Link](https://codeforces.com/contest/2005/problem/B2) |
| 129 | Simple Palindrome | 2005A | 900 | [Link](https://codeforces.com/problemset/problem/2005/A) |
| 130 | Game with Doors | 2004B | 1000 | [Link](https://codeforces.com/problemset/problem/2004/B) |
| 131 | Minimize Equal Sum Subarrays | 1998B | 1000 | [Link](https://codeforces.com/problemset/problem/1998/B) |
| 132 | Angry Monk | 1992B | 800 | [Link](https://codeforces.com/contest/1992/problem/B) |
| 133 | Only Pluses | 1992A | 800 | [Link](https://codeforces.com/contest/1992/problem/A) |
| 134 | AND Reconstruction | 1991B | 1100 | [Link](https://codeforces.com/problemset/problem/1991/B) |
| 135 | Array Craft | 1990B | 1200 | [Link](https://codeforces.com/problemset/problem/1990/B) |
| 136 | Submission Bait | 1990A | 900 | [Link](https://codeforces.com/problemset/problem/1990/A) |
| 137 | Split the Multiset | 1988A | 900 | [Link](https://codeforces.com/problemset/problem/1988/A) |
| 138 | X Axis | 1986A | 800 | [Link](https://codeforces.com/problemset/problem/1986/A) |
| 139 | 378QAQ and Mocha's Array | 1975B | 1000 | [Link](https://codeforces.com/problemset/problem/1975/B) |
| 140 | Cat, Fox and the Lonely Array | 1973B | 1300 | [Link](https://codeforces.com/problemset/problem/1973/B) |
| 141 | Coin Games | 1972B | 900 | [Link](https://codeforces.com/problemset/problem/1972/B) |
| 142 | Contest Proposal | 1972A | 800 | [Link](https://codeforces.com/problemset/problem/1972/A) |
| 143 | A BIT of a Construction | 1957B | 1100 | [Link](https://codeforces.com/problemset/problem/1957/B) |
| 144 | Make It Ugly | 1954B | 1200 | [Link](https://codeforces.com/problemset/problem/1954/B) |
| 145 | Painting the Ribbon | 1954A | 900 | [Link](https://codeforces.com/contest/1954/problem/A) |
| 146 | Battle Cows | 1951B | 1200 | [Link](https://codeforces.com/problemset/problem/1951/B) |
| 147 | Dual Trigger | 1951A | 900 | [Link](https://codeforces.com/problemset/problem/1951/A) |
| 148 | Median of an Array | 1946A | 800 | [Link](https://codeforces.com/contest/1946/problem/A) |
| 149 | MEX Game 1 | 1943A | 1300 | [Link](https://codeforces.com/problemset/problem/1943/A) |
| 150 | Chaya Calendar | 1932B | 1100 | [Link](https://codeforces.com/problemset/problem/1932/B) |
| 151 | Recovering a Small String | 1931A | 800 | [Link](https://codeforces.com/problemset/problem/1931/A) |
| 152 | Maximise The Score | 1930A | 800 | [Link](https://codeforces.com/contest/1930/problem/A) |
| 153 | Following the String | 1927B | 900 | [Link](https://codeforces.com/problemset/problem/1927/B) |
| 154 | A Balanced Problemset? | 1925B | 1200 | [Link](https://codeforces.com/contest/1925/problem/B) |
| 155 | Minimize Inversions | 1918B | 900 | [Link](https://codeforces.com/problemset/problem/1918/B) |
| 156 | 2023 | 1916A | 800 | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 157 | Problemsolving Log | 1914A | 800 | [Link](https://codeforces.com/contest/1914/problem/A) |
| 158 | Make Almost Equal With Mod | 1909B | 1200 | [Link](https://codeforces.com/problemset/problem/1909/B) |
| 159 | Rook | 1907A | 800 | [Link](https://codeforces.com/problemset/problem/1907/A) |
| 160 | Collecting Game | 1904B | 1100 | [Link](https://codeforces.com/problemset/problem/1904/B) |
| 161 | Forked! | 1904A | 900 | [Link](https://codeforces.com/problemset/problem/1904/A) |
| 162 | Getting Points | 1902B | 1100 | [Link](https://codeforces.com/problemset/problem/1902/B) |
| 163 | Game with Integers | 1899A | 800 | [Link](https://codeforces.com/contest/1899/problem/A) |
| 164 | Deja Vu | 1891B | 1100 | [Link](https://codeforces.com/problemset/problem/1891/B) |
| 165 | Sum of Three | 1886A | 800 | [Link](https://codeforces.com/problemset/problem/1886/A) |
| 166 | Haunted House | 1884B | 1100 | [Link](https://codeforces.com/contest/1884/problem/B) |
| 167 | Chemistry | 1883B | 900 | [Link](https://codeforces.com/problemset/problem/1883/B) |
| 168 | Don't Try to Count | 1881A | 800 | [Link](https://codeforces.com/problemset/problem/1881/A) |
| 169 | How Much Does Daytona Cost? | 1878A | 800 | [Link](https://codeforces.com/problemset/problem/1878/A) |
| 170 | Goals of Victory | 1877A | 800 | [Link](https://codeforces.com/problemset/problem/1877/A) |
| 171 | Helmets in Night Light | 1876A | 1000 | [Link](https://codeforces.com/problemset/problem/1876/A) |
| 172 | Jellyfish and Undertale | 1875A | 900 | [Link](https://codeforces.com/problemset/problem/1875/A) |
| 173 | Jellyfish and Game | 1874A | 1200 | [Link](https://codeforces.com/problemset/problem/1874/A) |
| 174 | 2D Traveling | 1869B | 1100 | [Link](https://codeforces.com/problemset/problem/1869/B) |
| 175 | Make It Zero | 1869A | 900 | [Link](https://codeforces.com/problemset/problem/1869/A) |
| 176 | green_gold_dog, array and permutation | 1867A | 800 | [Link](https://codeforces.com/contest/1867/problem/A) |
| 177 | Prime Deletion | 1861A | 800 | [Link](https://codeforces.com/problemset/problem/1861/A) |
| 178 | United We Stand | 1859A | 800 | [Link](https://codeforces.com/problemset/problem/1859/A) |
| 179 | Good Arrays | 1856B | 900 | [Link](https://codeforces.com/contest/1856/problem/B) |
| 180 | Longest Divisors Interval | 1855B | 900 | [Link](https://codeforces.com/problemset/problem/1855/B) |
| 181 | Desorting | 1853A | 800 | [Link](https://codeforces.com/contest/1853/problem/A) |
| 182 | Monsters | 1849B | 1000 | [Link](https://codeforces.com/problemset/problem/1849/B) |
| 183 | Morning Sandwich | 1849A | 800 | [Link](https://codeforces.com/problemset/problem/1849/A) |
| 184 | Forbidden Integer | 1845A | 800 | [Link](https://codeforces.com/problemset/problem/1845/A) |
| 185 | Game with Board | 1841A | 800 | [Link](https://codeforces.com/contest/1841/problem/A) |
| 186 | Lamps | 1839B | 1100 | [Link](https://codeforces.com/problemset/problem/1839/B) |
| 187 | Comparison String | 1837B | 900 | [Link](https://codeforces.com/problemset/problem/1837/B) |
| 188 | Grasshopper on a Line | 1837A | 800 | [Link](https://codeforces.com/contest/1837/problem/A) |
| 189 | Unit Array | 1834A | 800 | [Link](https://codeforces.com/contest/1834/problem/A) |
| 190 | Maximum Sum | 1832B | 1100 | [Link](https://codeforces.com/problemset/problem/1832/B) |
| 191 | Array merging | 1831B | 1000 | [Link](https://codeforces.com/problemset/problem/1831/B) |
| 192 | Twin Permutations | 1831A | 800 | [Link](https://codeforces.com/problemset/problem/1831/A) |
| 193 | Divisible Array | 1828A | 800 | [Link](https://codeforces.com/problemset/problem/1828/A) |
| 194 | Counting Orders | 1827A | 1100 | [Link](https://codeforces.com/problemset/problem/1827/A) |
| 195 | Lunatic Never Content | 1826B | 1100 | [Link](https://codeforces.com/problemset/problem/1826/B) |
| 196 | TubeTube Feed | 1822A | 800 | [Link](https://codeforces.com/problemset/problem/1822/A) |
| 197 | JoJo's Incredible Adventures | 1820B | 1100 | [Link](https://codeforces.com/problemset/problem/1820/B) |
| 198 | Grid Reconstruction | 1816B | 1000 | [Link](https://codeforces.com/problemset/problem/1816/B) |
| 199 | Coins | 1814A | 800 | [Link](https://codeforces.com/problemset/problem/1814/A) |
| 200 | Conveyor Belts | 1811B | 1000 | [Link](https://codeforces.com/problemset/problem/1811/B) |
| 201 | Candies | 1810B | 800 | [Link](https://codeforces.com/problemset/problem/1810/B) |
| 202 | Walking Master | 1806A | 800 | [Link](https://codeforces.com/problemset/problem/1806/A) |
| 203 | We Need the Zero | 1805A | 800 | [Link](https://codeforces.com/problemset/problem/1805/A) |
| 204 | Count the Number of Pairs | 1800B | 1000 | [Link](https://codeforces.com/problemset/problem/1800/B) |
| 205 | Fedya and Array | 1793B | 1100 | [Link](https://codeforces.com/problemset/problem/1793/B) |
| 206 | Serval and Mocha's Array | 1789A | 800 | [Link](https://codeforces.com/problemset/problem/1789/A) |
| 207 | Going to the Cinema | 1781B | 1000 | [Link](https://codeforces.com/contest/1781/problem/B) |
| 208 | GCD Partition | 1780B | 1100 | [Link](https://codeforces.com/problemset/problem/1780/B) |
| 209 | Koxia and Permutation | 1770B | 1000 | [Link](https://codeforces.com/contest/1770/problem/B) |
| 210 | Koxia and Whiteboards | 1770A | 1000 | [Link](https://codeforces.com/problemset/problem/1770/A) |
| 211 | Extremely Round | 1766A | 800 | [Link](https://codeforces.com/problemset/problem/1766/A) |
| 212 | Broken Keyboard | 1765B | 800 | [Link](https://codeforces.com/problemset/problem/1765/B) |
| 213 | Incinerate | 1763B | 1200 | [Link](https://codeforces.com/problemset/problem/1763/B) |
| 214 | Elimination of a Ring | 1761B | 1000 | [Link](https://codeforces.com/problemset/problem/1761/B) |
| 215 | Indirect Sort | 1750A | 800 | [Link](https://codeforces.com/contest/1750/problem/A) |
| 216 | Number Replacement | 1744A | 800 | [Link](https://codeforces.com/problemset/problem/1744/A) |
| 217 | Bestie | 1732A | 1000 | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 218 | Kill Demodogs | 1731B | 1100 | [Link](https://codeforces.com/problemset/problem/1731/B) |
| 219 | Mainak and Array | 1726A | 900 | [Link](https://codeforces.com/problemset/problem/1726/A) |
| 220 | Basketball Together | 1725B | 1000 | [Link](https://codeforces.com/problemset/problem/1725/B) |
| 221 | Beautiful Array | 1715B | 1000 | [Link](https://codeforces.com/problemset/problem/1715/B) |
| 222 | Luke is a Foodie | 1704B | 1000 | [Link](https://codeforces.com/problemset/problem/1704/B) |
| 223 | Circle Game | 1695B | 1000 | [Link](https://codeforces.com/problemset/problem/1695/B) |
| 224 | A Perfectly Balanced String? | 1673B | 1100 | [Link](https://codeforces.com/problemset/problem/1673/B) |
| 225 | Array Cloning Technique | 1665B | 900 | [Link](https://codeforces.com/problemset/problem/1665/B) |
| 226 | DIV + MOD | 1650B | 900 | [Link](https://codeforces.com/problemset/problem/1650/B) |
| 227 | Fun with Even Subarrays | 1631B | 1100 | [Link](https://codeforces.com/problemset/problem/1631/B) |
| 228 | Make AP | 1624B | 900 | [Link](https://codeforces.com/problemset/problem/1624/B) |
| 229 | Divan and a New Project  | 1614B | 1000 | [Link](https://codeforces.com/problemset/problem/1614/B) |
| 230 | Kalindrome Array | 1610B | 1100 | [Link](https://codeforces.com/problemset/problem/1610/B) |
| 231 | AB Balance | 1606A | 900 | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 232 | Make it Divisible by 25 | 1593B | 900 | [Link](https://codeforces.com/problemset/problem/1593/B) |
| 233 | MEXor Mixup | 1567B | 1000 | [Link](https://codeforces.com/problemset/problem/1567/B) |
| 234 | Mocha and Math | 1559A | 900 | [Link](https://codeforces.com/problemset/problem/1559/A) |
| 235 | Exciting Bets | 1543A | 900 | [Link](https://codeforces.com/problemset/problem/1543/A) |
| 236 | Bad Boy | 1537B | 900 | [Link](https://codeforces.com/problemset/problem/1537/B) |
| 237 | Flip the Bits | 1504B | 1200 | [Link](https://codeforces.com/problemset/problem/1504/B) |
| 238 | Cat Cycle | 1487B | 1200 | [Link](https://codeforces.com/problemset/problem/1487/B) |
| 239 | Add and Divide | 1485A | 1000 | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 240 | Searching Local Minimum | 1479A | 1700 | [Link](https://codeforces.com/contest/1479/problem/A) |
| 241 | Strange Partition | 1471A | 900 | [Link](https://codeforces.com/problemset/problem/1471/A) |
| 242 | Row GCD | 1458A | 1600 | [Link](https://codeforces.com/problemset/problem/1458/A) |
| 243 | Buying Torches | 1418A | 1000 | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 244 | Fair Numbers | 1411B | 1000 | [Link](https://codeforces.com/problemset/problem/1411/B) |
| 245 | Three Indices | 1380A | 900 | [Link](https://codeforces.com/problemset/problem/1380/A) |
| 246 | 01 Game | 1373B | 900 | [Link](https://codeforces.com/problemset/problem/1373/B) |
| 247 | Johnny and Ancient Computer | 1362A | 1000 | [Link](https://codeforces.com/problemset/problem/1362/A) |
| 248 | Orac and LCM | 1349A | 1600 | [Link](https://codeforces.com/problemset/problem/1349/A) |
| 249 | Sum of Odd Integers | 1327A | 1100 | [Link](https://codeforces.com/contest/1327/problem/A) |
| 250 | Bogosort | 1312B | 1000 | [Link](https://codeforces.com/problemset/problem/1312/B) |
| 251 | Just Eat It! | 1285B | 1300 | [Link](https://codeforces.com/problemset/problem/1285/B) |
| 252 | Heating | 1260A | 1000 | [Link](https://codeforces.com/problemset/problem/1260/A) |
| 253 | Balanced Tunnel | 1237B | 1300 | [Link](https://codeforces.com/contest/1237/problem/B) |
| 254 | TV Subscriptions (Hard Version) | 1225B2 | 1300 | [Link](https://codeforces.com/problemset/problem/1225/B2) |
| 255 | Badges | 1214B | 1100 | [Link](https://codeforces.com/problemset/problem/1214/B) |
| 256 | Email from Polycarp | 1185B | 1200 | [Link](https://codeforces.com/problemset/problem/1185/B) |
| 257 | Ehab Fails to Be Thanos | 1174A | 1000 | [Link](https://codeforces.com/problemset/problem/1174/A) |
| 258 | Reverse a Substring | 1155A | 1000 | [Link](https://codeforces.com/problemset/problem/1155/A) |
| 259 | Draw! | 1131B | 1400 | [Link](https://codeforces.com/problemset/problem/1131/B) |
| 260 | Alyona and a Narrow Fridge | 1119B | 1300 | [Link](https://codeforces.com/problemset/problem/1119/B) |
| 261 | Digits Sequence Dividing | 1107A | 900 | [Link](https://codeforces.com/problemset/problem/1107/A) |
| 262 | LCM | 1068B | 1200 | [Link](https://codeforces.com/problemset/problem/1068/B) |
| 263 | Buying a TV Set | 1041B | 1000 | [Link](https://codeforces.com/problemset/problem/1041/B) |
| 264 | Palindrome Dance | 1040A | 1000 | [Link](https://codeforces.com/problemset/problem/1040/A) |
| 265 | Packets | 1037A | 1300 | [Link](https://codeforces.com/contest/1037/problem/A) |
| 266 | New Building for SIS | 1020A | 1000 | [Link](https://codeforces.com/problemset/problem/1020/A) |
| 267 | Getting an A | 991B | 900 | [Link](https://codeforces.com/problemset/problem/991/B) |
| 268 | Row | 982A | 1200 | [Link](https://codeforces.com/problemset/problem/982/A) |
| 269 | Fafa and the Gates | 935B | 900 | [Link](https://codeforces.com/problemset/problem/935/B) |
| 270 | Fafa and his Company | 935A | 800 | [Link](https://codeforces.com/problemset/problem/935/A) |
| 271 | Cloning Toys | 922A | 1300 | [Link](https://codeforces.com/problemset/problem/922/A) |
| 272 | Divisiblity of Differences | 876B | 1300 | [Link](https://codeforces.com/problemset/problem/876/B) |
| 273 | Diversity | 844A | 1000 | [Link](https://codeforces.com/problemset/problem/844/A) |
| 274 | Average Sleep Time | 808B | 1300 | [Link](https://codeforces.com/problemset/problem/808/B) |
| 275 | k-Factorization | 797A | 1100 | [Link](https://codeforces.com/problemset/problem/797/A) |
| 276 | Anastasia and pebbles | 789A | 1100 | [Link](https://codeforces.com/problemset/problem/789/A) |
| 277 | The Monster | 787A | 1200 | [Link](https://codeforces.com/problemset/problem/787/A) |
| 278 | k-th divisor | 762A | 1400 | [Link](https://codeforces.com/problemset/problem/762/A) |
| 279 | Chloe and the sequence  | 743B | 1200 | [Link](https://codeforces.com/contest/743/problem/B) |
| 280 | Vladik and flights | 743A | 1200 | [Link](https://codeforces.com/contest/743/problem/A) |
| 281 | Anton and Digits | 734B | 800 | [Link](https://codeforces.com/problemset/problem/734/B) |
| 282 | Jumping Ball | 725A | 1000 | [Link](https://codeforces.com/problemset/problem/725/A) |
| 283 | Vacations | 698A | 1400 | [Link](https://codeforces.com/problemset/problem/698/A) |
| 284 | Elephant | 617A | 800 | [Link](https://codeforces.com/contest/617/problem/A) |
| 285 | Saitama Destroys Hotel | 608A | 1000 | [Link](https://codeforces.com/problemset/problem/608/A) |
| 286 | Olesya and Rodion | 584A | 1000 | [Link](https://codeforces.com/contest/584/problem/A) |
| 287 | Kefa and Company | 580B | 1500 | [Link](https://codeforces.com/problemset/problem/580/B) |
| 288 | Vasya and Petya's Game | 576A | 1500 | [Link](https://codeforces.com/problemset/problem/576/A) |
| 289 | Bear and Poker | 573A | 1300 | [Link](https://codeforces.com/contest/573/problem/A) |
| 290 | Chewbaсca and Number | 514A | 1200 | [Link](https://codeforces.com/contest/514/problem/A) |
| 291 | Anton and currency you all know | 508B | 1300 | [Link](https://codeforces.com/problemset/problem/508/B) |
| 292 | Amr and Music | 507A | 1000 | [Link](https://codeforces.com/contest/507/problem/A) |
| 293 | Modular Equations | 495B | 1600 | [Link](https://codeforces.com/problemset/problem/495/B) |
| 294 | Bits | 484A | 1700 | [Link](https://codeforces.com/problemset/problem/484/A) |
| 295 | Dreamoon and Stairs | 476A | 1000 | [Link](https://codeforces.com/problemset/problem/476/A) |
| 296 | I Wanna Be the Guy | 469A | 800 | [Link](https://codeforces.com/problemset/problem/469/A) |
| 297 | Appleman and Card Game | 462B | 1300 | [Link](https://codeforces.com/problemset/problem/462/B) |
| 298 | Pashmak and Garden | 459A | 1200 | [Link](https://codeforces.com/problemset/problem/459/A) |
| 299 | Boredom | 455A | 1500 | [Link](https://codeforces.com/problemset/problem/455/a) |
| 300 | Little Pony and Sort by Shift | 454B | 1200 | [Link](https://codeforces.com/problemset/problem/454/B) |
| 301 | Jzzhu and Sequences | 450B | 1300 | [Link](https://codeforces.com/problemset/problem/450/B) |
| 302 | Kitahara Haruki's Gift | 433A | 1100 | [Link](https://codeforces.com/problemset/problem/433/A) |
| 303 | Megacity | 424B | 1200 | [Link](https://codeforces.com/problemset/problem/424/B) |
| 304 | Mashmokh and Numbers | 414A | 1500 | [Link](https://codeforces.com/problemset/problem/414/A) |
| 305 | Fox and Box Accumulation | 388A | 1400 | [Link](https://codeforces.com/contest/388/problem/A) |
| 306 | New Year Candles | 379A | 1000 | [Link](https://codeforces.com/contest/379/problem/A) |
| 307 | Fence | 363B | 1100 | [Link](https://codeforces.com/problemset/problem/363/B) |
| 308 | Levko and Permutation | 361B | 1200 | [Link](https://codeforces.com/contest/361/problem/B) |
| 309 | TL | 350A | 1200 | [Link](https://codeforces.com/problemset/problem/350/A) |
| 310 | Alice and Bob | 346A | 1600 | [Link](https://codeforces.com/problemset/problem/346/A) |
| 311 | Rational Resistance | 343A | 1600 | [Link](https://codeforces.com/problemset/problem/343/A) |
| 312 | Xenia and Divisors | 342A | 1200 | [Link](https://codeforces.com/problemset/problem/342/A) |
| 313 | Candy Bags | 334A | 1000 | [Link](https://codeforces.com/problemset/problem/334/A) |
| 314 | Hungry Sequence | 327B | 1200 | [Link](https://codeforces.com/problemset/problem/327/B) |
| 315 | Sereja and Bottles | 315A | 1400 | [Link](https://codeforces.com/problemset/problem/315/A) |
| 316 | Ilya and Queries | 313B | 1100 | [Link](https://codeforces.com/problemset/problem/313/B) |
| 317 | Yaroslav and Sequence | 301A | 1800 | [Link](https://codeforces.com/problemset/problem/301/A) |
| 318 | Greg and Array | 295A | 1400 | [Link](https://codeforces.com/problemset/problem/295/A) |
| 319 | Books | 279B | 1400 | [Link](https://codeforces.com/contest/279/problem/B) |
| 320 | Lights Out | 275A | 900 | [Link](https://codeforces.com/problemset/problem/275/A) |
| 321 | Fancy Fence | 270A | 1100 | [Link](https://codeforces.com/problemset/problem/270/A) |
| 322 | Stones on the Table | 266A | 800 | [Link](https://codeforces.com/problemset/problem/266/A) |
| 323 | Adding Digits | 260A | 1400 | [Link](https://codeforces.com/problemset/problem/260/A) |
| 324 | Cards with Numbers | 254A | 1200 | [Link](https://codeforces.com/problemset/problem/254/A) |
| 325 | Boys and Girls | 253A | 1100 | [Link](https://codeforces.com/contest/253/problem/A) |
| 326 | Increase and Decrease | 246B | 1300 | [Link](https://codeforces.com/problemset/problem/246/B) |
| 327 | Two Bags of Potatoes | 239A | 1200 | [Link](https://codeforces.com/problemset/problem/239/A) |
| 328 | Easy Number Challenge | 236B | 1300 | [Link](https://codeforces.com/problemset/problem/236/B) |
| 329 | Little Elephant and Problem | 220A | 1300 | [Link](https://codeforces.com/contest/220/problem/A) |
| 330 | Cut Ribbon | 189A | 1300 | [Link](https://codeforces.com/problemset/problem/189/A) |
| 331 | Phone Code | 172A | 800 | [Link](https://codeforces.com/problemset/problem/172/A) |
| 332 | Burning Midnight Oil | 165B | 1500 | [Link](https://codeforces.com/contest/165/problem/B) |
| 333 | Colliders | 154B | 1600 | [Link](https://codeforces.com/problemset/problem/154/B) |
| 334 | Cifera | 114A | 1000 | [Link](https://codeforces.com/contest/114/problem/A) |
| 335 | Testing Pants for Sadness | 103A | 1100 | [Link](https://codeforces.com/problemset/problem/103/A) |
| 336 | Magical Array | 83A | 1300 | [Link](https://codeforces.com/problemset/problem/83/A) |
| 337 | Where Are My Flakes? | 60A | 1300 | [Link](https://codeforces.com/contest/60/problem/A) |
| 338 | Bar | 56A | 1000 | [Link](https://codeforces.com/problemset/problem/56/A) |
| 339 | Reconnaissance | 32A | 800 | [Link](https://codeforces.com/problemset/problem/32/A) |
| 340 | Worms Evolution | 31A | 1200 | [Link](https://codeforces.com/problemset/problem/31/A) |
| 341 | Almost Prime | 26A | 900 | [Link](https://codeforces.com/contest/26/problem/A) |
| 342 | Watermelon | 4A | 800 | [Link](https://codeforces.com/problemset/problem/4/A) |
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
