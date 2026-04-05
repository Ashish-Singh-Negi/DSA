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

    int sum = 0;

    // i -> row and j -> column
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                sum += A[i][j];
            }
        }
    }

    cout << sum;
}