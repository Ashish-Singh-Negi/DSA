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

        int ans = -1;

        int L = 0, R = n - 1;

        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (A[mid] == x)
            {
                ans = mid;
                break;
            }
            else if (A[mid] > x)
            {
                // Right
                L = mid + 1;
            }
            else
            {
                // Left
                R = mid - 1;
            }
        }

        // 1 based index
        if (ans == -1)
        {
            cout << ans << "\n";
        }
        else
        {
            cout << ans + 1 << "\n";
        }
    }
}