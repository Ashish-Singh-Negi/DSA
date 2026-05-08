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

        int ans = -1;

        int L = 0, R = n - 1;

        // O(logn)
        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (A[mid] >= x)
            {
                ans = mid;
                R = mid - 1; // Left
            }
            else
            {
                L = mid + 1; // right
            }
        }

        if (ans == -1)
        {
            cout << 0 << "\n";
        }
        else
        {
            // 1 base index
            ans++;
            cout << n - ans + 1 << "\n";
        }
    }
}