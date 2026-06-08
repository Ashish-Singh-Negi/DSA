#include <bits/stdc++.h>

using namespace std;

void f(int curr, int n, vector<int> path)
{
    if (curr == n)
    {
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

    // jump 1
    path.push_back(1);
    f(curr + 1, n, path);
    path.pop_back();

    // jump 2
    path.push_back(2);
    f(curr + 2, n, path);
    path.pop_back();
}

int main()
{
    int n;
    cin >> n;

    vector<int> path;

    f(0, n, path);
}