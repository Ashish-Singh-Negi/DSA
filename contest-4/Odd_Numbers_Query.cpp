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

    int P[n];

    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        pre += A[i];
        P[i] = pre;
    }

    int max = P[n - 1];

    while (q--)
    {
        int L, R;
        cin >> L >> R;

        L--;
        R--;

        int ans = 0;

        if (L == 0)
        {
            ans = max - P[R];
        }
        else
        {
            ans = max - (P[R] - P[L - 1]);
        }

        if (ans % 2 == 0)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }
}