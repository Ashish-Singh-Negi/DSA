#include <bits/stdc++.h>

using namespace std;

void f(int A[], int n, int x, vector<int> &res)
{

    if (n == 0)
    {
        return;
    }

    f(A, n - 1, x, res);

    if (A[n - 1] == x)
    {
        res.push_back(n);
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

    int x;
    cin >> x;

    vector<int> res;

    f(A, n, x, res);

    if (res.size() == 0)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
    }
}