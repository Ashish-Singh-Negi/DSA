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

    int max = matrix[0][0];

    for (int i = 0; i < n; i++) // i -> row index
    {
        for (int j = 0; j < m; j++) // j -> col index
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }

    cout << max;
}