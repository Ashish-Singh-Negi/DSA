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

    for (int i = 0; i < m; i++) // i -> col
    {
        if (i % 2 == 0) // LEFT -> RIGHT (even row)
        {
            for (int j = 0; j < n; j++) // j -> row
            {
                cout << matrix[j][i] << " ";
            }
        }
        else // RIGHT -> LEFT (odd row)
        {
            for (int j = n - 1; j >= 0; j--) // j -> row
            {
                cout << matrix[j][i] << " ";
            }
        }
    }
}