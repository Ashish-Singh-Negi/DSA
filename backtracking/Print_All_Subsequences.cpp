#include <bits/stdc++.h>

using namespace std;

void f(int idx, vector<int> &A, vector<int> &path)
{

    if (idx == A.size())
    {
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i] << " ";
        }
        cout << endl;
        return;
    }

    path.push_back(A[idx]);
    f(idx + 1, A, path);
    path.pop_back();

    f(idx + 1, A, path);
}

int main()
{

    int n;
    cin >> n;

    vector<int> A;

    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;

        A.push_back(input);
    }

    vector<int> path;

    f(0, A, path);
}