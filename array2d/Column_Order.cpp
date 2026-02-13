#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // print matrix in column order
    for (int i = 0; i < m; i++) // i -> col index
    {
        for (int j = 0; j < n; j++) // j -> row index
        {
            cout << matrix[j][i] << " ";
        }
    }
}