#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}
