
##  Valid Perfect Square

### 📌 Problem

Check if a number is a perfect square **without using sqrt()**

---

### 🧠 Key Observations

* A number is a perfect square if:

  ```
  mid * mid == num
  ```
* Brute force is slow → use Binary Search

---

### ⚡ Approach: Binary Search

* Search space: `[1, num]`
* Calculate:

  * `mid = low + (high - low) / 2`
* Compare:

  * `mid * mid == num` → return true
  * `< num` → move right
  * `> num` → move left

---

### ⏱ Complexity

* Time: **O(log n)**
* Space: **O(1)**

---

### 🎯 Pattern Learned

* Binary Search on Answer
* Used when:

  * Searching in a range
  * Condition-based checking

---

### ❗ Mistakes to Avoid

* Using `int` → can cause overflow
  ✅ Use `long long`
* Wrong mid calculation (avoid overflow)

