#include <bits/stdc++.h>

using namespace std;

vector<int> main()
{
    vector<int> nums;
    vector<int> result(nums.size());
    int l = 0;
    int r = nums.size() - 1;
    int trackIdx = nums.size() - 1;

    while (l <= r)
    {
        int leftPow = pow(nums[l], 2);
        int rightPow = pow(nums[r], 2);

        if (leftPow < rightPow)
        {
            result[trackIdx] = rightPow;
            r--;
        }
        else
        {
            result[trackIdx] = leftPow;
            l++;
        }
        trackIdx--;
    };
    return result;
}
