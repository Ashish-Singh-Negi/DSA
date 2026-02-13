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

    if (n == 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout << matrix[0][i] << " ";
        }
    }
    else if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout << matrix[i][0] << " ";
        }
    }
    else
    {
        // print 1st row elements
        for (int i = 0; i < m; i++)
        {
            cout << matrix[0][i] << " ";
        }

        // print last col elements;
        for (int i = 1; i < n; i++)
        {
            cout << matrix[i][m - 1] << " ";
        }

        // print last row elements (right -> left)
        for (int i = m - 2; i >= 0; i--)
        {
            cout << matrix[n - 1][i] << " ";
        }

        // print first colomn elements
        for (int i = n - 2; i > 0; i--)
        {
            cout << matrix[i][0] << " ";
        }
    }
}