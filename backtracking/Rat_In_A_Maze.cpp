#include <bits/stdc++.h>

using namespace std;

bool isBlocked(vector<vector<int>> &A, int i, int j)
{
    return A[i][j] == 0;
}

void f(vector<vector<int>> &A, int i, int j, int n, vector<vector<bool>> &Used, string &path, vector<string> &paths)
{
    if (i >= n or j >= n or i < 0 or j < 0)
    {
        return;
    }

    if (Used[i][j])
        return;

    if (isBlocked(A, i, j))
    {
        return;
    }

    if (i == n - 1 and j == n - 1)
    {
        paths.push_back(path);
        return;
    }

    Used[i][j] = true;

    // Down
    path.push_back('D');
    f(A, i + 1, j, n, Used, path, paths);
    path.pop_back();

    // Right
    path.push_back('R');
    f(A, i, j + 1, n, Used, path, paths);
    path.pop_back();

    // Left
    path.push_back('L');
    f(A, i, j - 1, n, Used, path, paths);
    path.pop_back();

    // Up
    path.push_back('U');
    f(A, i - 1, j, n, Used, path, paths);
    path.pop_back();

    Used[i][j] = false;
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> A(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;

            A[i].push_back(a);
        }
    }

    vector<vector<bool>> Used(n, vector<bool>(n, false));

    string path;
    vector<string> paths;

    f(A, 0, 0, n, Used, path, paths);

    if (paths.size())
    {
        sort(paths.begin(), paths.end());

        cout << paths.size() << endl;

        for (int i = 0; i < paths.size(); i++)
        {
            cout << paths[i] << endl;
        }
    }
    else
    {
        cout << 0 << endl;
    }
}