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

    sort(A, A + n);

    while (q--)
    {
        int x;
        cin >> x;

        int ans = -1;

        int L = 0, R = n - 1;

        while (L <= R)
        {
            int mid = (L + R) / 2;

            if (A[mid] <= x)
            {
                ans = mid;
                L = mid + 1; // right
            }
            else
            {
                R = mid - 1; // left
            }
        }

        if (ans > -1)
        {
            cout << A[ans] << "\n";
        }
        else
        {
            cout << ans << "\n";
        }
    }
}