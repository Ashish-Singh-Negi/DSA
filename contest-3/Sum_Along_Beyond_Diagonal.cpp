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

    long long diagonalSum = 0;
    long long nonDiagonalSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Main Diagonal     [0][0] -> [n-1][n-1]    (i and j must be equal)
            // second Diagonal   [0][n-1] -> [n-1][0]    (i and j sum must be n-1)
            if (i == j or i + j == n - 1)
            {
                diagonalSum += A[i][j];
            }
            else
            {
                nonDiagonalSum += A[i][j];
            }
        }
    }

    cout << diagonalSum << " " << nonDiagonalSum;
}