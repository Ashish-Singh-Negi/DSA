#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    string target;
    cin >> target;

    // Binary seach in string Array

    int l = 0;
    int r = n - 1;

    bool isFound = false;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (A[mid] == target)
        {
            isFound = true;
            break;
        }
        else if (A[mid] > target)
        {
            // search in left
            r = mid - 1;
        }
        else
        {
            // search in right
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