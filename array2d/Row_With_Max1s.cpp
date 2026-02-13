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

    int max1sRowIndex = -1;
    int max1sCount = 0;

    for (int i = 0; i < n; i++) // i -> row
    {
        int ctn1 = 0;
        for (int j = 0; j < m; j++) // j -> col
        {
            if (matrix[i][j] == 1)
            {
                ctn1++;
            }
        }
        if (ctn1 > max1sCount)
        {
            max1sCount = ctn1;
            max1sRowIndex = i;
        }
    }

    cout << max1sRowIndex;
}