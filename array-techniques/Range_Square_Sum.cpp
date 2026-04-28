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

    //     // 1 based index -> 0 based index
    //     L--;
    //     R--;

    //     long long sum = 0;

    //     // O(n)
    //     for (int j = L; j <= R; j++)
    //     {
    //         sum += (long long) A[j] * A[j];
    //     }

    //     cout << sum << "\n";
    // }

    // // TC : O(q * n)

    int n, q;
    cin >> n >> q;

    int A[n];

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    long long P[n];
    long long sum = 0;

    // O(n) prefix sum
    for (int i = 0; i < n; i++)
    {
        sum += (long long)A[i] * A[i];
        P[i] = sum;
    }

    // O(q)
    for (int i = 0; i < q; i++)
    {
        int L, R;
        cin >> L >> R;

        // 1 based index -> 0 based index
        L--;
        R--;

        if (L == 0)
        {
            cout << P[R] << "\n";
        }
        else
        {
            cout << P[R] - P[L - 1] << "\n";
        }
    }

    // TC : O(q + n)
}