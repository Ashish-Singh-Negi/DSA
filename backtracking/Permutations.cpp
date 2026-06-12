#include <bits/stdc++.h>

using namespace std;

void f(int A[], int n, vector<bool> &Used, vector<int> &Path, vector<vector<int>> &Paths)
{
    if (Path.size() == n)
    {
        Paths.push_back(Path);
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!Used[i])
        {
            Path.push_back(A[i]);
            Used[i] = true;

            f(A, n, Used, Path, Paths);

            Path.pop_back();
            Used[i] = false;
        }
    }
}

int main()
{

    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> Path;
    vector<vector<int>> Paths;

    vector<bool> Used(n, false);

    f(A, n, Used, Path, Paths);

    // print size
    cout << Paths.size() << endl;

    // print all possible permutations
    for (int i = 0; i < Paths.size(); i++)
    {
        for (int j = 0; j < Paths[i].size(); j++)
        {
            cout << Paths[i][j] << " ";
        }
        cout << endl;
    }
}