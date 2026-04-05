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

    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = m - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // 0 row AND 0 -> m-1 col
        for (int j = startCol; j <= endCol; j++)
        {
            cout << A[startRow][j] << " ";
        }

        // 1 -> n -1 row AND m-1 col
        for (int i = startRow + 1; i <= endRow; i++)
        {
            cout << A[i][endCol] << " ";
        }

        if (startRow != endRow)
        {
            // m-2 -> 0 col AND n-1 row
            for (int j = endCol - 1; j >= startCol; j--)
            {
                cout << A[endRow][j] << " ";
            }
        }

        if (startCol != endCol)
        {
            // n-2-> 1 row AND 0 col
            for (int i = endRow - 1; i >= startRow + 1; i--)
            {
                cout << A[i][startCol] << " ";
            }
        }

        startRow++;
        endRow--;

        startCol++;
        endCol--;
    }
}