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

    // print matrix elements
    for (int i = 0; i < n; i++) // i -> row
    {
        for (int j = 0; j < m; j++) // j -> col
        {

            cout << matrix[i][j] << " ";
        }
    }
}