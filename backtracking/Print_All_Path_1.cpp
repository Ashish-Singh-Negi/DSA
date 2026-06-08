#include <bits/stdc++.h>

using namespace std;

void f(int i, int j, int n, int m, string path)
{

    if (i == n - 1 and j == m - 1)
    {
        cout << path << endl;
        return;
    }

    // Outside the grid
    if (i >= n or j >= m)
    {
        return;
    }

    // Right
    path.push_back('R');
    f(i, j + 1, n, m, path);
    path.pop_back();

    // Down
    path.push_back('D');
    f(i + 1, j, n, m, path);
    path.pop_back();
}

int main()
{
    int n, m;
    cin >> n >> m;

    string path;

    f(0, 0, n, m, path);
}