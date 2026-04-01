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

    int target;
    cin >> target;

    bool isFound = false;

    // Binary Search

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (nums[mid] == target)
        {
            isFound = true;
            break;
        }
        else if (nums[mid] > target)
        {
            // search in left space
            r = mid - 1;
        }
        else
        {
            // search in right space
            l = mid + 1;
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