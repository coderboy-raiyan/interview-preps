#### 977. Squares of a Sorted Array

---

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

---

```cpp
Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
```

---

##### Solution 1 :

1. Traverse from 1 to N and **pow(nums[i], 2)**
2. Sort them asc order

---

##### Solution 2 :

1. Take an empty array **result[]** of same size of the input array
2. Then take two pointer **left = 0** and **right = nums.size() - 1**. Also take an **trackIdx** of nums array starting from the end **trackIdx = nums.size() - 1**
3. Now just traverse the two pointer until l <= r
4. Inside the loop **leftPow = pow(nums[l], 2)** and **rightPow = pow(nums[r], 2)**
5. if **leftPow** smaller than **rightPow** surely rightPow is bigger we can assign it to the last **result[trackIdx] = rightPow** and **right--** move to left;
6. if **rightPow** smaller than **leftPow** we can assign it to the last **result[trackIdx] = leftPow** and **left++** move to right;
