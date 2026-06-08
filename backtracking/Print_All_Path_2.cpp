#include <bits/stdc++.h>

using namespace std;

bool isBlocked(int i, int j, vector<vector<int>> &A)
{
    return A[i][j] == 1;
}

void f(int i, int j, int n, int m, vector<vector<int>> &A, string path)
{

    if (i == n - 1 and j == m - 1)
    {
        cout << path << endl;
        return;
    }

    if (i >= n or j >= m)
    {
        return;
    }

    if (isBlocked(i, j, A))
    {
        return;
    }

    // Right
    path.push_back('R');
    f(i, j + 1, n, m, A, path);
    path.pop_back();

    // Down
    path.push_back('D');
    f(i + 1, j, n, m, A, path);
    path.pop_back();
}

int main()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    string path;

    f(0, 0, n, m, A, path);
}