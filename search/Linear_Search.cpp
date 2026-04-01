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

    // Linear search
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            isFound = true;
            break;
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