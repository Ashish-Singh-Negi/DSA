#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int A[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    // search in boundry

    // row n-1...0  ,  col 0
    // row 0 AND  ,  0...n-1
    // row 1...n-1  ,  col n-1
    // row n-1  ,  col n-2...1

    int sr = 0, er = n - 1;
    int sc = 0, ec = m - 1;

    for (int i = er; i >= sr; i--)
    {
        if (A[i][sc] == -1)
        {
            return 0;
        }

        cout << A[i][sc] << " ";
    }

    for (int j = sc + 1; j <= ec; j++)
    {
        if (A[sr][j] == -1)
        {
            return 0;
        }
        cout << A[sr][j] << " ";
    }

    for (int i = sr + 1; i <= er; i++)
    {
        if (A[i][ec] == -1)
        {
            return 0;
        }
        cout << A[i][ec] << " ";
    }

    for (int j = ec - 1; j > sc; j--)
    {
        if (A[er][j] == -1)
        {
            return 0;
        }
        cout << A[er][j] << " ";
    }
}