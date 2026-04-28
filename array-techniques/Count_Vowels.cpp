#include <iostream>

using namespace std;

int main()
{
    // int n;
    // cin >> n;

    // char A[n];

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

    //     L--;
    //     R--;

    //     int count = 0;

    //     // O(n)
    //     for (int j = L; j <= R; j++)
    //     {
    //         if (A[j] == 'a' || A[j] == 'e' || A[j] == 'i' || A[j] == 'o' || A[j] == 'u')
    //         {
    //             count++;
    //         }
    //     }

    //     cout << count << "\n";
    // }

    // TC : O(q * n)
    // ----------------

    int n;
    cin >> n;

    char A[n];

    // O(n)
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int C[n];

    // O(n) contribution array
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            C[i] = 1;
        }
        else
        {
            C[i] = 0;
        }
    }

    int P[n];
    int sum = 0;

    // O(n) prefix sum
    for (int i = 0; i < n; i++)
    {
        sum += C[i];
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