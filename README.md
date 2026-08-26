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

**Total solutions uploaded:** 232
**Last updated:** 2026-08-25T22:01:05.244000
**Current day counter:** 47

**By rating:** 800 (115), 900 (25), 1000 (25), 1100 (17), 1200 (17), 1300 (14), 1400 (7), 1500 (3), 1600 (4), 1700 (2), 1800 (1), Unrated (2)

| # | Problem | Contest | Rating | Link |
|---|---------|---------|--------|------|
| 1 | Bigrams | 2242A | 800 | [Link](https://codeforces.com/contest/2242/problem/A) |
| 2 | Divide and Conquer | 2241A | 800 | [Link](https://codeforces.com/contest/2241/problem/A) |
| 3 | Another Popcount Problem | 2240A | 800 | [Link](https://codeforces.com/contest/2240/problem/A) |
| 4 | Another Puzzle from Papyrus | 2238A | 800 | [Link](https://codeforces.com/contest/2238/problem/A) |
| 5 | Annoying the Ghost | 2237B | 1000 | [Link](https://codeforces.com/contest/2237/problem/B) |
| 6 | Destroying Towers | 2237A | 800 | [Link](https://codeforces.com/contest/2237/problem/A) |
| 7 | Games on the Train | 2236A | 800 | [Link](https://codeforces.com/contest/2236/problem/A) |
| 8 | Euclid, Sequence and Two Numbers | 2234A | 800 | [Link](https://codeforces.com/contest/2234/problem/A) |
| 9 | Convergence | 2232A | 800 | [Link](https://codeforces.com/contest/2232/problem/A) |
| 10 | Another Sorting Problem | 2231B | 1100 | [Link](https://codeforces.com/contest/2231/problem/B) |
| 11 | Construct an Array | 2231A | 800 | [Link](https://codeforces.com/contest/2231/problem/A) |
| 12 | Koshary | 2227A | 800 | [Link](https://codeforces.com/contest/2227/problem/A) |
| 13 | Disturbing Distribution | 2226A | 800 | [Link](https://codeforces.com/contest/2226/problem/A) |
| 14 | Alternating String | 2225B | 900 | [Link](https://codeforces.com/contest/2225/problem/B) |
| 15 | A Number Between Two Others | 2225A | 800 | [Link](https://codeforces.com/contest/2225/problem/A) |
| 16 | Zhily and Array Operating | 2224A | 800 | [Link](https://codeforces.com/contest/2224/problem/A) |
| 17 | A Wonderful Contest | 2222A | 800 | [Link](https://codeforces.com/contest/2222/problem/A) |
| 18 | Blocked | 2220A | 800 | [Link](https://codeforces.com/contest/2220/problem/A) |
| 19 | The 67th Integer Problem | 2218A | 800 | [Link](https://codeforces.com/contest/2218/problem/A) |
| 20 | The Equalizer | 2217A | 800 | [Link](https://codeforces.com/contest/2217/problem/A) |
| 21 | Course Wishes | 2216A | 900 | [Link](https://codeforces.com/contest/2216/problem/A) |
| 22 | Are You Smiling? | 2214B | Unrated | [Link](https://codeforces.com/contest/2214/problem/B) |
| 23 | Odd One Out | 2214A | Unrated | [Link](https://codeforces.com/contest/2214/problem/A) |
| 24 | A Simple Sequence | 2210A | 800 | [Link](https://codeforces.com/contest/2210/problem/A) |
| 25 | 1-1 | 2207A | 800 | [Link](https://codeforces.com/problemset/problem/2207/A) |
| 26 | Passing the Ball | 2204A | 800 | [Link](https://codeforces.com/contest/2204/problem/A) |
| 27 | Towers of Boxes | 2203A | 800 | [Link](https://codeforces.com/contest/2203/problem/A) |
| 28 | Parkour Design | 2202A | 800 | [Link](https://codeforces.com/contest/2202/problem/A) |
| 29 | Eating Game | 2200A | 800 | [Link](https://codeforces.com/contest/2200/problem/A) |
| 30 | Array and Permutation | 2197B | 1100 | [Link](https://codeforces.com/contest/2197/problem/B) |
| 31 | Friendly Numbers | 2197A | 800 | [Link](https://codeforces.com/contest/2197/problem/A) |
| 32 | Sieve of Erato67henes | 2195A | 800 | [Link](https://codeforces.com/contest/2195/problem/A) |
| 33 | Lawn Mower | 2194A | 800 | [Link](https://codeforces.com/contest/2194/problem/A) |
| 34 | DBMB and the Array | 2193A | 800 | [Link](https://codeforces.com/contest/2193/problem/A) |
| 35 | Array Coloring | 2191A | 800 | [Link](https://codeforces.com/problemset/problem/2191/A) |
| 36 | Sorting Game | 2190A | 1200 | [Link](https://codeforces.com/problemset/problem/2190/A) |
| 37 | Perfect Root | 2185A | 800 | [Link](https://codeforces.com/contest/2185/problem/A) |
| 38 | Social Experiment | 2184A | 800 | [Link](https://codeforces.com/contest/2184/problem/A) |
| 39 | New Year String | 2182A | 800 | [Link](https://codeforces.com/contest/2182/problem/A) |
| 40 | Ashmal | 2180B | 800 | [Link](https://codeforces.com/problemset/problem/2180/B) |
| 41 | Carnival Wheel | 2180A | 800 | [Link](https://codeforces.com/problemset/problem/2180/A) |
| 42 | Needle in a Haystack | 2174A | 1200 | [Link](https://codeforces.com/problemset/problem/2174/A) |
| 43 | Shizuku Hoshikawa and Farm Legs | 2171A | 800 | [Link](https://codeforces.com/problemset/problem/2171/A) |
| 44 | Maximum Neighborhood | 2170A | 800 | [Link](https://codeforces.com/contest/2170/problem/A) |
| 45 | Square? | 2167A | 800 | [Link](https://codeforces.com/contest/2167/problem/A) |
| 46 | Sequence Game | 2164A | 800 | [Link](https://codeforces.com/contest/2164/problem/A) |
| 47 | Souvlaki VS. Kalamaki | 2163A | 800 | [Link](https://codeforces.com/contest/2163/problem/A) |
| 48 | Beautiful Average | 2162A | 800 | [Link](https://codeforces.com/contest/2162/problem/A) |
| 49 | Suspension | 2158A | 800 | [Link](https://codeforces.com/contest/2158/problem/A) |
| 50 | Dungeon Equilibrium | 2157A | 800 | [Link](https://codeforces.com/contest/2157/problem/A) |
| 51 | Pizza Time | 2156A | 800 | [Link](https://codeforces.com/contest/2156/problem/A) |
| 52 | Abraham's Great Escape | 2155B | 1100 | [Link](https://codeforces.com/contest/2155/problem/B) |
| 53 | El fucho | 2155A | 800 | [Link](https://codeforces.com/contest/2155/problem/A) |
| 54 | Notelock | 2154A | 800 | [Link](https://codeforces.com/contest/2154/problem/A) |
| 55 | Circle of Apple Trees | 2153A | 800 | [Link](https://codeforces.com/contest/2153/problem/A) |
| 56 | Increase or Smash | 2152A | 800 | [Link](https://codeforces.com/contest/2152/problem/A) |
| 57 | Be Positive | 2149A | 800 | [Link](https://codeforces.com/problemset/problem/2149/A) |
| 58 | Sublime Sequence | 2148A | 800 | [Link](https://codeforces.com/contest/2148/problem/A) |
| 59 | Shortest Increasing Path | 2147A | 800 | [Link](https://codeforces.com/contest/2147/problem/A) |
| 60 | Equal Occurrences | 2146A | 800 | [Link](https://codeforces.com/contest/2146/problem/A) |
| 61 | All Lengths Subtraction | 2143A | 800 | [Link](https://codeforces.com/contest/2143/problem/A) |
| 62 | Furniture Store | 2141A | 800 | [Link](https://codeforces.com/problemset/problem/2141/A) |
| 63 | Another Divisibility Problem | 2140B | 900 | [Link](https://codeforces.com/problemset/problem/2140/B) |
| 64 | Shift Sort | 2140A | 800 | [Link](https://codeforces.com/contest/2140/problem/A) |
| 65 | Maple and Multiplication | 2139A | 800 | [Link](https://codeforces.com/contest/2139/problem/A) |
| 66 | Collatz Conjecture | 2137A | 800 | [Link](https://codeforces.com/contest/2137/problem/A) |
| 67 | In the Dream | 2136A | 800 | [Link](https://codeforces.com/problemset/problem/2136/A) |
| 68 | Add 0 or K | 2134B | 1200 | [Link](https://codeforces.com/problemset/problem/2134/B) |
| 69 | Mix Mex Max | 2127A | 800 | [Link](https://codeforces.com/problemset/problem/2127/A) |
| 70 | Difficult Contest | 2125A | 800 | [Link](https://codeforces.com/contest/2125/problem/A) |
| 71 | Above the Clouds | 2121B | 800 | [Link](https://codeforces.com/contest/2121/problem/B) |
| 72 | Square of Rectangles | 2120A | 800 | [Link](https://codeforces.com/problemset/problem/2120/A) |
| 73 | Energy Crystals | 2111A | 800 | [Link](https://codeforces.com/problemset/problem/2111/A) |
| 74 | Apples in Boxes | 2107B | 1100 | [Link](https://codeforces.com/problemset/problem/2107/B) |
| 75 | LRC and VIP | 2107A | 800 | [Link](https://codeforces.com/problemset/problem/2107/A) |
| 76 | Dr. TC | 2106A | 800 | [Link](https://codeforces.com/contest/2106/problem/A) |
| 77 | Dinner Time | 2102A | 900 | [Link](https://codeforces.com/problemset/problem/2102/A) |
| 78 | Wonderful Sticks | 2096A | 800 | [Link](https://codeforces.com/contest/2096/problem/A) |
| 79 | Kamilka and the Sheep | 2092A | 800 | [Link](https://codeforces.com/problemset/problem/2092/A) |
| 80 | Treasure Hunt | 2090A | 800 | [Link](https://codeforces.com/problemset/problem/2090/A) |
| 81 | Adjacent Digit Sums | 2067A | 800 | [Link](https://codeforces.com/contest/2067/problem/A) |
| 82 | Kevin and Arithmetic | 2061A | 800 | [Link](https://codeforces.com/contest/2061/problem/A) |
| 83 | Preparing for the Olympiad | 2051A | 800 | [Link](https://codeforces.com/problemset/problem/2051/A) |
| 84 | Easy Problem | 2044A | 800 | [Link](https://codeforces.com/problemset/problem/2044/A) |
| 85 | Bonus Project | 2038A | 1400 | [Link](https://codeforces.com/problemset/problem/2038/A) |
| 86 | King Keykhosrow's Mystery | 2034A | 800 | [Link](https://codeforces.com/contest/2034/problem/A) |
| 87 | Penchick and Modern Monument | 2031A | 800 | [Link](https://codeforces.com/problemset/problem/2031/A) |
| 88 | Alice's Adventures in ''Chess'' | 2028A | 900 | [Link](https://codeforces.com/problemset/problem/2028/A) |
| 89 | Sakurako's Exam | 2008A | 800 | [Link](https://codeforces.com/contest/2008/problem/A) |
| 90 | The Strict Teacher (Hard Version) | 2005B2 | 1200 | [Link](https://codeforces.com/contest/2005/problem/B2) |
| 91 | Simple Palindrome | 2005A | 900 | [Link](https://codeforces.com/problemset/problem/2005/A) |
| 92 | Angry Monk | 1992B | 800 | [Link](https://codeforces.com/contest/1992/problem/B) |
| 93 | Only Pluses | 1992A | 800 | [Link](https://codeforces.com/contest/1992/problem/A) |
| 94 | AND Reconstruction | 1991B | 1100 | [Link](https://codeforces.com/problemset/problem/1991/B) |
| 95 | Array Craft | 1990B | 1200 | [Link](https://codeforces.com/problemset/problem/1990/B) |
| 96 | Submission Bait | 1990A | 900 | [Link](https://codeforces.com/problemset/problem/1990/A) |
| 97 | Split the Multiset | 1988A | 900 | [Link](https://codeforces.com/problemset/problem/1988/A) |
| 98 | X Axis | 1986A | 800 | [Link](https://codeforces.com/problemset/problem/1986/A) |
| 99 | 378QAQ and Mocha's Array | 1975B | 1000 | [Link](https://codeforces.com/problemset/problem/1975/B) |
| 100 | Contest Proposal | 1972A | 800 | [Link](https://codeforces.com/problemset/problem/1972/A) |
| 101 | A BIT of a Construction | 1957B | 1100 | [Link](https://codeforces.com/problemset/problem/1957/B) |
| 102 | Painting the Ribbon | 1954A | 900 | [Link](https://codeforces.com/contest/1954/problem/A) |
| 103 | Dual Trigger | 1951A | 900 | [Link](https://codeforces.com/problemset/problem/1951/A) |
| 104 | Median of an Array | 1946A | 800 | [Link](https://codeforces.com/contest/1946/problem/A) |
| 105 | MEX Game 1 | 1943A | 1300 | [Link](https://codeforces.com/problemset/problem/1943/A) |
| 106 | Recovering a Small String | 1931A | 800 | [Link](https://codeforces.com/problemset/problem/1931/A) |
| 107 | Maximise The Score | 1930A | 800 | [Link](https://codeforces.com/contest/1930/problem/A) |
| 108 | A Balanced Problemset? | 1925B | 1200 | [Link](https://codeforces.com/contest/1925/problem/B) |
| 109 | 2023 | 1916A | 800 | [Link](https://codeforces.com/problemset/problem/1916/A) |
| 110 | Problemsolving Log | 1914A | 800 | [Link](https://codeforces.com/contest/1914/problem/A) |
| 111 | Rook | 1907A | 800 | [Link](https://codeforces.com/problemset/problem/1907/A) |
| 112 | Forked! | 1904A | 900 | [Link](https://codeforces.com/problemset/problem/1904/A) |
| 113 | Game with Integers | 1899A | 800 | [Link](https://codeforces.com/contest/1899/problem/A) |
| 114 | Sum of Three | 1886A | 800 | [Link](https://codeforces.com/problemset/problem/1886/A) |
| 115 | Don't Try to Count | 1881A | 800 | [Link](https://codeforces.com/problemset/problem/1881/A) |
| 116 | How Much Does Daytona Cost? | 1878A | 800 | [Link](https://codeforces.com/problemset/problem/1878/A) |
| 117 | Goals of Victory | 1877A | 800 | [Link](https://codeforces.com/problemset/problem/1877/A) |
| 118 | Helmets in Night Light | 1876A | 1000 | [Link](https://codeforces.com/problemset/problem/1876/A) |
| 119 | Jellyfish and Undertale | 1875A | 900 | [Link](https://codeforces.com/problemset/problem/1875/A) |
| 120 | Jellyfish and Game | 1874A | 1200 | [Link](https://codeforces.com/problemset/problem/1874/A) |
| 121 | 2D Traveling | 1869B | 1100 | [Link](https://codeforces.com/problemset/problem/1869/B) |
| 122 | Make It Zero | 1869A | 900 | [Link](https://codeforces.com/problemset/problem/1869/A) |
| 123 | green_gold_dog, array and permutation | 1867A | 800 | [Link](https://codeforces.com/contest/1867/problem/A) |
| 124 | Prime Deletion | 1861A | 800 | [Link](https://codeforces.com/problemset/problem/1861/A) |
| 125 | United We Stand | 1859A | 800 | [Link](https://codeforces.com/problemset/problem/1859/A) |
| 126 | Desorting | 1853A | 800 | [Link](https://codeforces.com/contest/1853/problem/A) |
| 127 | Morning Sandwich | 1849A | 800 | [Link](https://codeforces.com/problemset/problem/1849/A) |
| 128 | Forbidden Integer | 1845A | 800 | [Link](https://codeforces.com/problemset/problem/1845/A) |
| 129 | Game with Board | 1841A | 800 | [Link](https://codeforces.com/contest/1841/problem/A) |
| 130 | Grasshopper on a Line | 1837A | 800 | [Link](https://codeforces.com/contest/1837/problem/A) |
| 131 | Unit Array | 1834A | 800 | [Link](https://codeforces.com/contest/1834/problem/A) |
| 132 | Array merging | 1831B | 1000 | [Link](https://codeforces.com/problemset/problem/1831/B) |
| 133 | Twin Permutations | 1831A | 800 | [Link](https://codeforces.com/problemset/problem/1831/A) |
| 134 | Divisible Array | 1828A | 800 | [Link](https://codeforces.com/problemset/problem/1828/A) |
| 135 | Counting Orders | 1827A | 1100 | [Link](https://codeforces.com/problemset/problem/1827/A) |
| 136 | TubeTube Feed | 1822A | 800 | [Link](https://codeforces.com/problemset/problem/1822/A) |
| 137 | Coins | 1814A | 800 | [Link](https://codeforces.com/problemset/problem/1814/A) |
| 138 | Walking Master | 1806A | 800 | [Link](https://codeforces.com/problemset/problem/1806/A) |
| 139 | We Need the Zero | 1805A | 800 | [Link](https://codeforces.com/problemset/problem/1805/A) |
| 140 | Serval and Mocha's Array | 1789A | 800 | [Link](https://codeforces.com/problemset/problem/1789/A) |
| 141 | Koxia and Whiteboards | 1770A | 1000 | [Link](https://codeforces.com/problemset/problem/1770/A) |
| 142 | Extremely Round | 1766A | 800 | [Link](https://codeforces.com/problemset/problem/1766/A) |
| 143 | Indirect Sort | 1750A | 800 | [Link](https://codeforces.com/contest/1750/problem/A) |
| 144 | Number Replacement | 1744A | 800 | [Link](https://codeforces.com/problemset/problem/1744/A) |
| 145 | Bestie | 1732A | 1000 | [Link](https://codeforces.com/problemset/problem/1732/A) |
| 146 | Mainak and Array | 1726A | 900 | [Link](https://codeforces.com/problemset/problem/1726/A) |
| 147 | Basketball Together | 1725B | 1000 | [Link](https://codeforces.com/problemset/problem/1725/B) |
| 148 | A Perfectly Balanced String? | 1673B | 1100 | [Link](https://codeforces.com/problemset/problem/1673/B) |
| 149 | Array Cloning Technique | 1665B | 900 | [Link](https://codeforces.com/problemset/problem/1665/B) |
| 150 | AB Balance | 1606A | 900 | [Link](https://codeforces.com/problemset/problem/1606/A) |
| 151 | Mocha and Math | 1559A | 900 | [Link](https://codeforces.com/problemset/problem/1559/A) |
| 152 | Exciting Bets | 1543A | 900 | [Link](https://codeforces.com/problemset/problem/1543/A) |
| 153 | Bad Boy | 1537B | 900 | [Link](https://codeforces.com/problemset/problem/1537/B) |
| 154 | Add and Divide | 1485A | 1000 | [Link](https://codeforces.com/problemset/problem/1485/A) |
| 155 | Searching Local Minimum | 1479A | 1700 | [Link](https://codeforces.com/contest/1479/problem/A) |
| 156 | Strange Partition | 1471A | 900 | [Link](https://codeforces.com/problemset/problem/1471/A) |
| 157 | Row GCD | 1458A | 1600 | [Link](https://codeforces.com/problemset/problem/1458/A) |
| 158 | Buying Torches | 1418A | 1000 | [Link](https://codeforces.com/problemset/problem/1418/A) |
| 159 | Three Indices | 1380A | 900 | [Link](https://codeforces.com/problemset/problem/1380/A) |
| 160 | 01 Game | 1373B | 900 | [Link](https://codeforces.com/problemset/problem/1373/B) |
| 161 | Johnny and Ancient Computer | 1362A | 1000 | [Link](https://codeforces.com/problemset/problem/1362/A) |
| 162 | Orac and LCM | 1349A | 1600 | [Link](https://codeforces.com/problemset/problem/1349/A) |
| 163 | Sum of Odd Integers | 1327A | 1100 | [Link](https://codeforces.com/contest/1327/problem/A) |
| 164 | Heating | 1260A | 1000 | [Link](https://codeforces.com/problemset/problem/1260/A) |
| 165 | Balanced Tunnel | 1237B | 1300 | [Link](https://codeforces.com/contest/1237/problem/B) |
| 166 | TV Subscriptions (Hard Version) | 1225B2 | 1300 | [Link](https://codeforces.com/problemset/problem/1225/B2) |
| 167 | Badges | 1214B | 1100 | [Link](https://codeforces.com/problemset/problem/1214/B) |
| 168 | Ehab Fails to Be Thanos | 1174A | 1000 | [Link](https://codeforces.com/problemset/problem/1174/A) |
| 169 | Reverse a Substring | 1155A | 1000 | [Link](https://codeforces.com/problemset/problem/1155/A) |
| 170 | Alyona and a Narrow Fridge | 1119B | 1300 | [Link](https://codeforces.com/problemset/problem/1119/B) |
| 171 | Digits Sequence Dividing | 1107A | 900 | [Link](https://codeforces.com/problemset/problem/1107/A) |
| 172 | Palindrome Dance | 1040A | 1000 | [Link](https://codeforces.com/problemset/problem/1040/A) |
| 173 | Packets | 1037A | 1300 | [Link](https://codeforces.com/contest/1037/problem/A) |
| 174 | New Building for SIS | 1020A | 1000 | [Link](https://codeforces.com/problemset/problem/1020/A) |
| 175 | Row | 982A | 1200 | [Link](https://codeforces.com/problemset/problem/982/A) |
| 176 | Fafa and his Company | 935A | 800 | [Link](https://codeforces.com/problemset/problem/935/A) |
| 177 | Cloning Toys | 922A | 1300 | [Link](https://codeforces.com/problemset/problem/922/A) |
| 178 | Diversity | 844A | 1000 | [Link](https://codeforces.com/problemset/problem/844/A) |
| 179 | Average Sleep Time | 808B | 1300 | [Link](https://codeforces.com/problemset/problem/808/B) |
| 180 | k-Factorization | 797A | 1100 | [Link](https://codeforces.com/problemset/problem/797/A) |
| 181 | Anastasia and pebbles | 789A | 1100 | [Link](https://codeforces.com/problemset/problem/789/A) |
| 182 | The Monster | 787A | 1200 | [Link](https://codeforces.com/problemset/problem/787/A) |
| 183 | k-th divisor | 762A | 1400 | [Link](https://codeforces.com/problemset/problem/762/A) |
| 184 | Vladik and flights | 743A | 1200 | [Link](https://codeforces.com/contest/743/problem/A) |
| 185 | Anton and Digits | 734B | 800 | [Link](https://codeforces.com/problemset/problem/734/B) |
| 186 | Jumping Ball | 725A | 1000 | [Link](https://codeforces.com/problemset/problem/725/A) |
| 187 | Vacations | 698A | 1400 | [Link](https://codeforces.com/problemset/problem/698/A) |
| 188 | Elephant | 617A | 800 | [Link](https://codeforces.com/contest/617/problem/A) |
| 189 | Saitama Destroys Hotel | 608A | 1000 | [Link](https://codeforces.com/problemset/problem/608/A) |
| 190 | Olesya and Rodion | 584A | 1000 | [Link](https://codeforces.com/contest/584/problem/A) |
| 191 | Vasya and Petya's Game | 576A | 1500 | [Link](https://codeforces.com/problemset/problem/576/A) |
| 192 | Bear and Poker | 573A | 1300 | [Link](https://codeforces.com/contest/573/problem/A) |
| 193 | Chewbaсca and Number | 514A | 1200 | [Link](https://codeforces.com/contest/514/problem/A) |
| 194 | Anton and currency you all know | 508B | 1300 | [Link](https://codeforces.com/problemset/problem/508/B) |
| 195 | Amr and Music | 507A | 1000 | [Link](https://codeforces.com/contest/507/problem/A) |
| 196 | Bits | 484A | 1700 | [Link](https://codeforces.com/problemset/problem/484/A) |
| 197 | Dreamoon and Stairs | 476A | 1000 | [Link](https://codeforces.com/problemset/problem/476/A) |
| 198 | I Wanna Be the Guy | 469A | 800 | [Link](https://codeforces.com/problemset/problem/469/A) |
| 199 | Appleman and Card Game | 462B | 1300 | [Link](https://codeforces.com/problemset/problem/462/B) |
| 200 | Pashmak and Garden | 459A | 1200 | [Link](https://codeforces.com/problemset/problem/459/A) |
| 201 | Boredom | 455A | 1500 | [Link](https://codeforces.com/problemset/problem/455/a) |
| 202 | Kitahara Haruki's Gift | 433A | 1100 | [Link](https://codeforces.com/problemset/problem/433/A) |
| 203 | Mashmokh and Numbers | 414A | 1500 | [Link](https://codeforces.com/problemset/problem/414/A) |
| 204 | Fox and Box Accumulation | 388A | 1400 | [Link](https://codeforces.com/contest/388/problem/A) |
| 205 | New Year Candles | 379A | 1000 | [Link](https://codeforces.com/contest/379/problem/A) |
| 206 | TL | 350A | 1200 | [Link](https://codeforces.com/problemset/problem/350/A) |
| 207 | Alice and Bob | 346A | 1600 | [Link](https://codeforces.com/problemset/problem/346/A) |
| 208 | Rational Resistance | 343A | 1600 | [Link](https://codeforces.com/problemset/problem/343/A) |
| 209 | Xenia and Divisors | 342A | 1200 | [Link](https://codeforces.com/problemset/problem/342/A) |
| 210 | Candy Bags | 334A | 1000 | [Link](https://codeforces.com/problemset/problem/334/A) |
| 211 | Sereja and Bottles | 315A | 1400 | [Link](https://codeforces.com/problemset/problem/315/A) |
| 212 | Yaroslav and Sequence | 301A | 1800 | [Link](https://codeforces.com/problemset/problem/301/A) |
| 213 | Greg and Array | 295A | 1400 | [Link](https://codeforces.com/problemset/problem/295/A) |
| 214 | Lights Out | 275A | 900 | [Link](https://codeforces.com/problemset/problem/275/A) |
| 215 | Fancy Fence | 270A | 1100 | [Link](https://codeforces.com/problemset/problem/270/A) |
| 216 | Stones on the Table | 266A | 800 | [Link](https://codeforces.com/problemset/problem/266/A) |
| 217 | Adding Digits | 260A | 1400 | [Link](https://codeforces.com/problemset/problem/260/A) |
| 218 | Cards with Numbers | 254A | 1200 | [Link](https://codeforces.com/problemset/problem/254/A) |
| 219 | Boys and Girls | 253A | 1100 | [Link](https://codeforces.com/contest/253/problem/A) |
| 220 | Two Bags of Potatoes | 239A | 1200 | [Link](https://codeforces.com/problemset/problem/239/A) |
| 221 | Little Elephant and Problem | 220A | 1300 | [Link](https://codeforces.com/contest/220/problem/A) |
| 222 | Cut Ribbon | 189A | 1300 | [Link](https://codeforces.com/problemset/problem/189/A) |
| 223 | Phone Code | 172A | 800 | [Link](https://codeforces.com/problemset/problem/172/A) |
| 224 | Cifera | 114A | 1000 | [Link](https://codeforces.com/contest/114/problem/A) |
| 225 | Testing Pants for Sadness | 103A | 1100 | [Link](https://codeforces.com/problemset/problem/103/A) |
| 226 | Magical Array | 83A | 1300 | [Link](https://codeforces.com/problemset/problem/83/A) |
| 227 | Where Are My Flakes? | 60A | 1300 | [Link](https://codeforces.com/contest/60/problem/A) |
| 228 | Bar | 56A | 1000 | [Link](https://codeforces.com/problemset/problem/56/A) |
| 229 | Reconnaissance | 32A | 800 | [Link](https://codeforces.com/problemset/problem/32/A) |
| 230 | Worms Evolution | 31A | 1200 | [Link](https://codeforces.com/problemset/problem/31/A) |
| 231 | Almost Prime | 26A | 900 | [Link](https://codeforces.com/contest/26/problem/A) |
| 232 | Watermelon | 4A | 800 | [Link](https://codeforces.com/problemset/problem/4/A) |
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
