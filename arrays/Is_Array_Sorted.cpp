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
    }

    bool isSorted = true;

    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        cout << "YES";
    else
        cout << "NO";
}
