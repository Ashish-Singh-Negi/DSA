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

    // O(nlogn)
    sort(A, A + n);

    // O(q * logn)
    while (q--)
    {
        int x;
        cin >> x;

        int firstOccuranceIndex = -1;

        int L = 0, R = n - 1;

        // O(logn)
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

        // O(logn)
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
            cout << 0 << "\n";
        }
        else
        {
            firstOccuranceIndex++;
            lastOccuranceIndex++;

            // R - L + 1
            cout << lastOccuranceIndex - firstOccuranceIndex + 1 << "\n";
        }
    }
}