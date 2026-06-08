#include <bits/stdc++.h>

using namespace std;

void f(int idx, long long sum, vector<int> &A, vector<int> &path, int k, vector<vector<int>> &paths)
{
    if (idx == A.size())
    {
        if (sum == k)
        {
            paths.push_back(path);
        }
        return;
    }

    path.push_back(A[idx]);
    f(idx + 1, sum + A[idx], A, path, k, paths);
    path.pop_back();

    f(idx + 1, sum, A, path, k, paths);
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> A;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        A.push_back(input);
    }

    long long sum = 0;

    vector<int> path;
    vector<vector<int>> paths;

    f(0, sum, A, path, k, paths);

    cout << paths.size() << endl;

    for (int i = 0; i < paths.size(); i++)
    {
        for (int j = 0; j < paths[i].size(); j++)
        {
            cout << paths[i][j] << " ";
        }

        cout << endl;
    }
}