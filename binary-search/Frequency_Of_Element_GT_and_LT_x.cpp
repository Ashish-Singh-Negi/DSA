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
        int x, y;
        cin >> x >> y;

        int first = -1;

        int L = 0, R = n - 1;

        // O(logn)
        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (A[mid] >= x)
            {
                first = mid;
                R = mid - 1; // Left
            }
            else
            {
                L = mid + 1; // right
            }
        }

        L = 0, R = n - 1;

        int last = -1;

        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (A[mid] <= y)
            {
                last = mid;
                L = mid + 1; // Right
            }
            else
            {
                R = mid - 1; // Left
            }
        }

        if (first == -1 or first > last)
        {
            cout << 0 << "\n";
        }
        else
        {
            // 1 base index
            first++;
            last++;
            cout << last - first + 1 << "\n";
        }
    }
}