#include <iostream>

using namespace std;

int main()
{

    // int n;
    // cin >> n;

    // int A[n];

    // // O(n)
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> A[i];
    // }

    // int q;
    // cin >> q;

    // // O(q)
    // for (int i = 0; i < q; i++)
    // {
    //     int L, R;
    //     cin >> L >> R;

    //     long long sum = 0;

    //     // 1 based index -> 0 based index
    //     L--;
    //     R--;

    //     // O(n)
    //     for (int j = L; j <= R; j++)
    //     {
    //         // even index only
    //         if ((j + 1) % 2 == 0)
    //         {
    //             sum += A[j];
    //         }
    //     }

    //     cout << sum << endl;
    // }

    // TC : O(q * n)
    // --------------------

    int n;
    cin >> n;

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
        if (i % 2 == 1)
        {
            sum += A[i];
        }

        P[i] = sum;
    }

    int q;
    cin >> q;

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