#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> height;
    int mxAmount = INT_MIN;
    int left = 0;
    int right = height.size() - 1;

    while (left < right)
    {
        int diff = right - left;
        int minH = min(height[left], height[right]);
        int width = minH * diff;
        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        };
        mxAmount = max(width, mxAmount);
    };

    return mxAmount;
    return 0;
}
