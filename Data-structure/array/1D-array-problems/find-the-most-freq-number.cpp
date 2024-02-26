#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    int frq[100] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        frq[nums[i]]++;
    };

    int maxVal = INT_MIN, mx_idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (frq[i] > maxVal)
        {
            maxVal = frq[i];
            mx_idx = i;
        }
    };
    cout << mx_idx << " " << maxVal << " ";
    return 0;
}
