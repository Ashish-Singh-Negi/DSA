#include <iostream>

using namespace std;

int main()
{
    // int n, q, x;
    // cin >> n >> q >> x;

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

    //     int count = 0;

    //     // O(n)
    //     for (int j = L; j <= R; j++)
    //     {

    //         int factCount = 0;

    //         // O(n) - bcz 1 <= N, Q <= 10^4 , 1 <= k <= 10^4
    //         for (int k = 1; k <= A[j]; k++)
    //         {
    //             if (A[j] % k == 0)
    //             {
    //                 factCount++;
    //             }
    //         }

    //         if (factCount == x)
    //         {
    //             count++;
    //         }
    //     }

    //     cout << count << "\n";
    // }

    // TC : O(q * n * n)
    //---------------------

    // int n, q, x;
    // cin >> n >> q >> x;

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

    //     int count = 0;

    //     // O(n)
    //     for (int j = L; j <= R; j++)
    //     {

    //         int factCount = 0;

    //         // O(sqrt(A[j])) - here 1 <= A[j] <= N
    //         for (int k = 1; k * k <= A[j]; k++)
    //         {
    //             if (A[j] % k == 0)
    //             {
    //                 int l = A[j] / k;

    //                 if (l == k)
    //                 {
    //                     factCount++;
    //                 }
    //                 else
    //                 {
    //                     factCount += 2;
    //                 }
    //             }
    //         }

    //         if (factCount == x)
    //         {
    //             count++;
    //         }
    //     }

    //     cout << count << "\n";
    // }

    // TC : O(q * n * sqrt(n))
    // -----------------------

    int n, q, x;
    cin >> n >> q >> x;

    int A[n];

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int P[n];

    // O(n) - prefix sum
    for (int i = 0; i < n; i++)
    {
        int factCount = 0;

        // O(sqrt(A[j])) - here 1 <= A[j] <= N
        for (int k = 1; k * k <= A[i]; k++)
        {
            if (A[i] % k == 0)
            {
                int l = A[i] / k;

                if (l == k)
                {
                    factCount++;
                }
                else
                {
                    factCount += 2;
                }
            }
        }

        P[i] = factCount;
    }

    int C[n];

    int count = 0;

    // O(n) contribution array
    for (int i = 0; i < n; i++)
    {
        if (P[i] == x)
        {
            count++;
        }

        C[i] = count;
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
            cout << C[R] << "\n";
        }
        else
        {
            cout << C[R] - C[L - 1] << "\n";
        }
    }

    // TC : O(q + n * sqrt(n))
}
