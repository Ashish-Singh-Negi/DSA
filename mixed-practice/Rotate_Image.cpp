#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int A[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }

    // i -> row and j -> column
    for (int j = 0; j < n; j++) // col [0, n-1]
    {
        for (int i = n - 1; i >= 0; i--) // row [n-1, 0]
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}