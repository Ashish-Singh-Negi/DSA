#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];

    // take user input
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << nums[i] << " ";
        }
    }
}
