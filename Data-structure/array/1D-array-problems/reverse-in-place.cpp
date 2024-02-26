#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    };
    // 1st method
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        swap(nums[i], nums[j]);
        i++;
        j--;
    }

    // 2nd method
    for (int i = 0; i < n / 2; i++)
    {
        int lastIdx = n - i - 1;
        swap(nums[i], nums[lastIdx]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
