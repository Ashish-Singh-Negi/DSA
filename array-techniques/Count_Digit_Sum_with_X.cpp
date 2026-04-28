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
    //         // digits sum
    //         int digitSum = 0;
    //         int number = A[j];

    //         while (number != 0)
    //         {
    //             int digit = number % 10;
    //             digitSum += digit;
    //             number = number / 10;
    //         }

    //         if (digitSum == x)
    //         {
    //             count++;
    //         }
    //     }

    //     cout << count << "\n";
    // }

    // // TC : O(q * n)
    // ---------------------

    int n, q, x;
    cin >> n >> q >> x;

    int A[n];

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int P[n];

    // O(n) - digit sums
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int number = A[i];

        while (number != 0)
        {
            int digit = number % 10;
            sum += digit;
            number = number / 10;
        }

        P[i] = sum;
    }

    int C[n];
    int count = 0;

    // O(n) prefix sum
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

    // TC : O(q + n)
}