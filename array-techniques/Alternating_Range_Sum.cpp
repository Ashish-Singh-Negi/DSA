#include <iostream>

using namespace std;

int main()
{
    // int n, q;
    // cin >> n >> q;

    // int A[n];

    // // O(n)
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // // O(q)
    // for (int i = 0; i < q; i++)
    // {
    //     int L, R;
    //     cin >> L >> R;

    //     L--;
    //     R--;

    //     bool isMinus = true;
    //     int ans = A[L];

    //     for (int j = L + 1; j <= R; j++)
    //     {
    //         if (isMinus)
    //         {
    //             ans -= A[j];
    //         }
    //         else
    //         {
    //             ans += A[j];
    //         }
    //     }

    //     cout << ans << endl;
    // }

    // TC : O(q * n)
    // -----------------

    int n, m;
    cin >> n >> m;
    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long p[n], sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += a[i];
        }
        else
        {
            sum -= a[i];
        }

        p[i] = sum;
    }

    for (int i = 0; i < m; i++)
    {
        long long L, R, ans;
        cin >> L >> R;

        L--;
        R--;

        if (L == 0)
        {
            ans = p[R];
        }
        else
        {
            ans = p[R] - p[L - 1];
        }

        if (L % 2 == 1)
        {
            cout << -ans << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
}