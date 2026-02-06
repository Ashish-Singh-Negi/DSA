#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n, x;
    cin >> n >> x;

    int nums[n];

    // take user input
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    bool isFound = false;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == x)
        {
            isFound = true;
        }
    }

    if (isFound)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
