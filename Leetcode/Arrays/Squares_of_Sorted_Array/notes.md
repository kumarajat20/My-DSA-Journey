
## 🔹 1. Squares of a Sorted Array

### 📌 Problem

Given a sorted array (may contain negative numbers), return an array of squares in sorted order.

### 🧠 Key Observations

* Squaring negative numbers makes them positive
* Largest square will be from either:

  * Leftmost (large negative)
  * Rightmost (large positive)

---

### ⚡ Approach: Two Pointer Technique

* Initialize:

  * `left = 0`
  * `right = n - 1`
  * `pos = n - 1` (to fill result from end)

* Compare:

  * `abs(nums[left])` vs `abs(nums[right])`

* Place larger square at `result[pos]` and move pointer

---

### ⏱ Complexity

* Time: **O(n)**
* Space: **O(n)**

---


