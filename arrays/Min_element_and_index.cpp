#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n;
    cin >> n;

    int nums[n];

    // take user input
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int min = nums[0];
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < min)
        {
            min = nums[i];
            index = i;
        }
    }

    cout << min << " " << index + 1;
}
