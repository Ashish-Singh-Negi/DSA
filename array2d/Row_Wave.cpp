#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++) // i -> row
    {
        for (int j = 0; j < m; j++) // j -> col
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    { // i -> row index

        if (i % 2 == 0) // even row LEFT -> RIGHT
        {
            for (int j = 0; j < m; j++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else // odd row RIGHT -> LEFT
        {
            for (int j = m - 1; j >= 0; j--)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
}