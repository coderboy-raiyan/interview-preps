#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        nums.push_back(val);
    };
    sort(nums.begin(), nums.end());
    int change = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= change + 1)
        {
            change += nums[i];
        }
        else
        {
            change += 1;
            break;
        }
    };
    cout << change << " ";

    return 0;
}
