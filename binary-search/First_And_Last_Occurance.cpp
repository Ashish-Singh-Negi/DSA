#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    while (q--)
    {
        int x;
        cin >> x;

        int firstOccuranceIndex = -1;

        int L = 0, R = n - 1;

        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (A[mid] >= x)
            {
                if (A[mid] == x)
                    firstOccuranceIndex = mid;
                R = mid - 1; // Left
            }
            else
            {
                L = mid + 1; // right
            }
        }

        L = 0;
        R = n - 1;

        int lastOccuranceIndex = -1;

        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (A[mid] <= x)
            {
                if (A[mid] == x)
                    lastOccuranceIndex = mid;
                L = mid + 1; // Right
            }
            else
            {
                R = mid - 1; // Left
            }
        }

        if (firstOccuranceIndex == -1 || lastOccuranceIndex == -1)
        {
            cout << -1 << "\n";
        }
        else
        {
            cout << firstOccuranceIndex + 1 << " " << lastOccuranceIndex + 1 << "\n";
        }
    }
}