# IBM OA — Tier 1 & 2 Practice Sheet

**Target:** 2 questions / ~60 min / LeetCode Easy–Medium. Goal is *pattern recognition + speed*, not coverage.

**How to use**
- Do each topic top→bottom (E before M). Time yourself (~20 min/M, ~10 min/E).
- **★ = core.** If short on time, do only the ★ problems (~2 per topic ≈ 28 total). That's your minimum viable prep.
- `(premium)` = LeetCode paywall; skip or find the same problem free elsewhere.
- These are canonical Blind-75 / NeetCode-150 problems. If a link ever 404s, search the **#number + title** on leetcode.com — numbers are stable.

---

## TIER 1 — Core (the OA is mostly this)

### 1. Arrays
*In-place manipulation, scanning, the O(n) hash trick vs the sort-first trick, subarray sums.*
- [ ] ★ [#1 Two Sum](https://leetcode.com/problems/two-sum/) · E · complement + hashing
- [ ] [#217 Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) · E · hash set
- [ ] ★ [#53 Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) · M · Kadane
- [ ] ★ [#238 Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) · M · prefix/suffix
- [ ] [#128 Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence/) · M · hash set, O(n)
- [ ] [#152 Maximum Product Subarray](https://leetcode.com/problems/maximum-product-subarray/) · M · track min+max

### 2. Strings
*Char counting, frequency maps, anagram/palindrome checks, parsing with messy spacing.*
- [ ] ★ [#242 Valid Anagram](https://leetcode.com/problems/valid-anagram/) · E · freq map
- [ ] ★ [#49 Group Anagrams](https://leetcode.com/problems/group-anagrams/) · M · sorted-string key
- [ ] [#125 Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) · E · two pointers
- [ ] [#5 Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) · M · expand-around-center
- [ ] [#14 Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) · E · vertical scan
- [ ] [#58 Length of Last Word](https://leetcode.com/problems/length-of-last-word/) · E · parsing (IBM asks this exact shape)
- [ ] [#271 Encode and Decode Strings](https://leetcode.com/problems/encode-and-decode-strings/) · M · length-prefix `(premium)`

### 3. Hashing / hash maps
*Trade space for O(1) lookup: counting, seen-set, complement.*
- [ ] ★ [#347 Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) · M · count + bucket sort
- [ ] ★ [#560 Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) · M · prefix-sum + map
- [ ] [#383 Ransom Note](https://leetcode.com/problems/ransom-note/) · E · freq map
- [ ] [#438 Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) · M · fixed window + count
- [ ] [#146 LRU Cache](https://leetcode.com/problems/lru-cache/) · M · hashmap + doubly-linked list (stretch)

### 4. Prefix sums
*Precompute cumulative sums → range queries / subarray conditions become O(1). Pair with a map for "count subarrays with property."*
- [ ] ★ [#724 Find Pivot Index](https://leetcode.com/problems/find-pivot-index/) · E · left vs right sum
- [ ] [#303 Range Sum Query - Immutable](https://leetcode.com/problems/range-sum-query-immutable/) · E · 1D prefix
- [ ] ★ [#560 Subarray Sum Equals K](https://leetcode.com/problems/subarray-sum-equals-k/) · M · prefix + map
- [ ] [#525 Contiguous Array](https://leetcode.com/problems/contiguous-array/) · M · map first-seen index
- [ ] [#304 Range Sum Query 2D - Immutable](https://leetcode.com/problems/range-sum-query-2d-immutable/) · M · 2D prefix

### 5. Two pointers
*Opposite-ends (sorted arrays, palindromes) and fast/slow. Converts many O(n²) into O(n).*
- [ ] ★ [#15 3Sum](https://leetcode.com/problems/3sum/) · M · sort + two pointers
- [ ] ★ [#11 Container With Most Water](https://leetcode.com/problems/container-with-most-water/) · M · shrink inward
- [ ] [#167 Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) · M · opposite ends
- [ ] [#283 Move Zeroes](https://leetcode.com/problems/move-zeroes/) · E · write pointer
- [ ] [#26 Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) · E · slow/fast
- [ ] [#42 Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) · H · two pointers (stretch)

### 6. Sorting + custom comparators
*Sort as preprocessing; write comparators for non-default orders; interval sorting.*
- [ ] ★ [#56 Merge Intervals](https://leetcode.com/problems/merge-intervals/) · M · sort by start
- [ ] ★ [#179 Largest Number](https://leetcode.com/problems/largest-number/) · M · custom comparator
- [ ] [#57 Insert Interval](https://leetcode.com/problems/insert-interval/) · M · scan intervals
- [ ] [#75 Sort Colors](https://leetcode.com/problems/sort-colors/) · M · Dutch-flag / counting sort
- [ ] [#451 Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) · M · count then sort
- [ ] [#88 Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) · E · merge from the back
- [ ] [#252 Meeting Rooms](https://leetcode.com/problems/meeting-rooms/) · E · sort by start `(premium)`

### 7. Binary Search
*Search on sorted arrays AND "binary search on the answer" (min/max feasible value). Watch `mid` overflow and loop boundaries; the predicate must be monotonic.*
- [ ] ★ [#704 Binary Search](https://leetcode.com/problems/binary-search/) · E · the template
- [ ] ★ [#875 Koko Eating Bananas](https://leetcode.com/problems/koko-eating-bananas/) · M · binary search on answer
- [ ] [#33 Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) · M · pivot logic
- [ ] [#153 Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) · M
- [ ] [#34 Find First and Last Position](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) · M · boundary search
- [ ] [#74 Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/) · M · flatten index
- [ ] [#981 Time Based Key-Value Store](https://leetcode.com/problems/time-based-key-value-store/) · M · bsearch on timestamps
- [ ] [#4 Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) · H · partition (stretch)

### 8. Constraint → complexity reading *(meta-skill — no grind set)*
Before writing any solution above, state your target complexity **out loud** from the constraints:

| Constraint on n | What fits |
|---|---|
| n ≤ 10–12 | exponential OK — backtracking, 2ⁿ, n! |
| n ≤ 100–500 | O(n³) OK |
| n ≤ 2,000–5,000 | O(n²) OK |
| n ≤ 10⁵–10⁶ | **need O(n log n) or O(n)** — reject O(n²) on sight |
| n ≤ 10⁹ or huge value range | O(log n) / math / binary-search-on-answer |

Two problems that *force* this reasoning: **#875 Koko** and **#33 Search Rotated**.

---

## TIER 2 — High value

### 9. Sliding window
*Variable vs fixed window; expand right, shrink left while a condition breaks; keep a running count/map.*
- [ ] ★ [#3 Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) · M · variable window
- [ ] ★ [#121 Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) · E · min-so-far
- [ ] [#424 Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/) · M · window − maxfreq
- [ ] [#567 Permutation in String](https://leetcode.com/problems/permutation-in-string/) · M · fixed window + count
- [ ] [#209 Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/) · M · shrink for min length
- [ ] [#643 Maximum Average Subarray I](https://leetcode.com/problems/maximum-average-subarray-i/) · E · fixed window
- [ ] [#904 Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/) · M · ≤2 distinct
- [ ] [#76 Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) · H · window + need-map (stretch)

### 10. Greedy (sorting-based)
*Prove local optimal → global; usually sort first, then one pass. Intervals, jumps, allocation.*
- [ ] ★ [#55 Jump Game](https://leetcode.com/problems/jump-game/) · M · farthest reach
- [ ] ★ [#134 Gas Station](https://leetcode.com/problems/gas-station/) · M · running tank + reset
- [ ] [#45 Jump Game II](https://leetcode.com/problems/jump-game-ii/) · M · BFS-style layers
- [ ] [#435 Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) · M · sort by end
- [ ] [#763 Partition Labels](https://leetcode.com/problems/partition-labels/) · M · last-index map
- [ ] [#846 Hand of Straights](https://leetcode.com/problems/hand-of-straights/) · M · count + consume
- [ ] [#455 Assign Cookies](https://leetcode.com/problems/assign-cookies/) · E · sort both, greedy match

### 11. Recursion (basic)
*Base case + reduce; subsets/permutations skeleton; divide & conquer. Don't over-reach into hard backtracking for the OA.*
- [ ] ★ [#78 Subsets](https://leetcode.com/problems/subsets/) · M · include/exclude template
- [ ] [#46 Permutations](https://leetcode.com/problems/permutations/) · M · swap/used-set
- [ ] [#39 Combination Sum](https://leetcode.com/problems/combination-sum/) · M · reuse allowed
- [ ] [#22 Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) · M · open/close counts
- [ ] [#17 Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) · M · digit map
- [ ] [#50 Pow(x, n)](https://leetcode.com/problems/powx-n/) · M · fast exponentiation
- [ ] [#509 Fibonacci Number](https://leetcode.com/problems/fibonacci-number/) · E · recursion → memo bridge

### 12. Stacks & Queues
*LIFO for matching/parsing; monotonic stack = "next greater/smaller"; queue for order.*
- [ ] ★ [#20 Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) · E · match pairs
- [ ] ★ [#739 Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) · M · monotonic stack
- [ ] [#155 Min Stack](https://leetcode.com/problems/min-stack/) · M · aux min stack
- [ ] [#150 Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation/) · M · operand stack
- [ ] [#496 Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) · E · monotonic + map
- [ ] [#232 Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/) · E · two stacks
- [ ] [#853 Car Fleet](https://leetcode.com/problems/car-fleet/) · M · sort + stack
- [ ] [#84 Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) · H · monotonic stack (stretch)

### 13. Simulation / implementation
*No trick — translate the spec exactly, manage indices/state/edge cases. IBM loves these; the difficulty is usually one hidden condition.*
- [ ] ★ [#54 Spiral Matrix](https://leetcode.com/problems/spiral-matrix/) · M · boundary shrink
- [ ] [#48 Rotate Image](https://leetcode.com/problems/rotate-image/) · M · transpose + reverse
- [ ] [#73 Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/) · M · in-place markers
- [ ] [#289 Game of Life](https://leetcode.com/problems/game-of-life/) · M · encode two states
- [ ] [#66 Plus One](https://leetcode.com/problems/plus-one/) · E · carry
- [ ] [#43 Multiply Strings](https://leetcode.com/problems/multiply-strings/) · M · grade-school multiply
- [ ] [#657 Robot Return to Origin](https://leetcode.com/problems/robot-return-to-origin/) · E · net displacement

### 14. Linked List
*Pointer manipulation, dummy head, fast/slow, reversal. Draw it before coding.*
- [ ] ★ [#206 Reverse Linked List](https://leetcode.com/problems/reverse-linked-list/) · E · iterative reverse
- [ ] [#21 Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) · E · dummy head
- [ ] [#141 Linked List Cycle](https://leetcode.com/problems/linked-list-cycle/) · E · fast/slow
- [ ] [#19 Remove Nth Node From End of List](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) · M · two-pointer gap
- [ ] [#143 Reorder List](https://leetcode.com/problems/reorder-list/) · M · mid + reverse + merge
- [ ] [#2 Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) · M · carry across nodes
- [ ] [#876 Middle of the Linked List](https://leetcode.com/problems/middle-of-the-linked-list/) · E · fast/slow
- [ ] [#138 Copy List with Random Pointer](https://leetcode.com/problems/copy-list-with-random-pointer/) · M · hashmap old→new
- [ ] [#23 Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) · H · heap / divide & conquer (stretch)

---

**Minimum viable set:** the ~28 ★ problems. Do those first, then fill in the rest by tier.
**Then:** two full timed mocks on HackerRank's editor (2 problems / 60 min) — review by error *cause*, not problem name.
