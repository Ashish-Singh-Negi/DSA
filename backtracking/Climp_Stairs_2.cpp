#include <bits/stdc++.h>

using namespace std;

void f(int curr, int n, int k, vector<int> path)
{

    if (curr == n)
    {
        // print path
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    if (curr > n)
    {
        return;
    }

    for (int i = 1; i <= k; i++)
    {
        path.push_back(i);
        f(curr + i, n, k, path);
        path.pop_back();
    }
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> path;

    f(0, n, k, path);
}