### 1D Array related Problems and Explanation

---

#### 1. Reverse in Place

There given a N size of Array. Reverse the array
<br/>
Input : <br/>
5
<br/>
1 2 3 4 5
<br/>
Output :
5 4 3 2 1

**Solving technics [code](./1D-array-problems/reverse-in-place.cpp)**

##### 1st Approach

1. Two pointer i = 0, j = n-1

##### 2nd Approach

1. Take a loop
   1. traverse it till n/2 : i < n/2
   2. find the last index : n - i - 1
   3. swap it : (nums[i], nums[lastIdx])

---

#### 2. Find the most frequent Array number and Value

There given a N size of Array. Find the most frequent Array number and Value
<br/>
Input : <br/>
5
<br/>
1 1 2 2 2
<br/>
Output :
<br/>
number 2 : Value 3

**Solving technics [code](./1D-array-problems/find-the-most-freq-number.cpp)**

1. Take a frequency array based on the max size
2. Then count all the numbers like : freq[nums[i]]++
3. Then just track the greater
