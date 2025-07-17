# 📊 LeetCode Problem: Maximum Average Subarray I

## 🧩 Problem Statement

You are given an **integer array** `nums` consisting of `n` elements, and an integer `k`.
Find a **contiguous subarray** whose length is equal to `k` that has the **maximum average** value and return this value. 

> **Note :**
> - Any **answer** with a calculation error less than `10^-5` will be accepted.


## 🧠 Approach: Sliding Window + Prefix Sum

- Use **sliding window** of size `k` to track sum of subarrays.

- Maintain a **prefix sum** to quickly get subarray sums.

- On each step, **calculate average** and update the maximum.

- Stop when `i + k` exceeds bounds.



## ✅ Example Walkthrough

### Example 1

##### Input: nums = [1,12,-5,-6,50,3], k = 4
##### Output: 12.75000

##### Explanation: 
<pre> 
  
  Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
  
</pre>

### Example 2

##### Input: nums = [5], k = 1
##### Output: 5.00000



## 🛠️ Constraints

- `n == nums.length`
- `1 <= k <= n <= 10^5`
- `-10^4 <= nums[i] <= 10^4`
