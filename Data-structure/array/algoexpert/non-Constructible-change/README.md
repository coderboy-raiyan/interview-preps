Given an array of positive integers representing the values of coins in your possession, write a function that returns the minimum amount of change (the minimum sum of money) that you cannot create. The given coins can have any positive integer value and aren't necessarily unique (i.e., you can have multiple coins of the same value).

##### For example, if you're given coins = [1, 2, 5] the minimum amount of change that you can't create is 4. If you're given no coins, the minimum amount of change that you can't create is 1.

```cpp
Sample Input :
coins = [5, 7, 1, 1, 2, 3, 22]
Sample Output :
20
```

---

#### Solution

1. Traverse 0 to last index
2. take change variable to track **(change = 0)**
3. Sort the array in asc order
4. if **nums[i] <= change + 1** then we can add the change value **change+=nums[i]** which means we can make the change
5. if **nums[i] > change+1** then we cannot make the change and therefore we can find the change that cannot be created
6. return the **change+1**
