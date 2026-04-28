#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // long long A[n];

    // for (int i = 0; i < n; i++) // O(n)
    // {
    //     cin >> A[i];
    // }

    // int q;
    // cin >> q;

    // for (int i = 0; i < q; i++) // O(q)
    // {
    //     int l, r;
    //     cin >> l >> r;

    //     // 1 base index to 0 base index
    //     l--;
    //     r--;

    //     long long sum = 0;

    //     for (int j = l; j <= r; j++) // O(n)
    //     {
    //         sum += A[j];
    //     }

    //     cout << sum << endl;
    // }

    // TC : O(q * n)

    // =========================

    int n;
    cin >> n;

    long long A[n];

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    long long P[n];
    long long sum = 0;

    // O(n) Prefix sum
    for (int i = 0; i < n; i++)
    {
        sum += A[i];
        P[i] = sum;
    }

    int q;
    cin >> q;

    // O(q)
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        // 1 base index to 0 base index
        l--;
        r--;

        if (l == 0)
        {
            cout << P[r] << endl;
        }
        else
        {
            cout << P[r] - P[l - 1] << endl;
        }
    }

    // TC: O(q + m)
}