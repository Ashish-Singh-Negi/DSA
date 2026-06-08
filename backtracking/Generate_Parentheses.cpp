#include <bits/stdc++.h>

using namespace std;

void f(int open, int close, int n, string &path, vector<string> &paths)
{
    // base case
    if (close == n)
    {
        paths.push_back(path);
        return;
    }

    if (open < n)
    {
        path.push_back('(');
        f(open + 1, close, n, path, paths);
        path.pop_back();
    }

    if (open > close)
    {
        path.push_back(')');
        f(open, close + 1, n, path, paths);
        path.pop_back();
    }
}

int main()
{
    int n;
    cin >> n;

    string path;
    vector<string> paths;

    f(0, 0, n, path, paths);

    cout << paths.size() << endl;

    for (int i = 0; i < paths.size(); i++)
    {
        cout << paths[i] << endl;
    }
}