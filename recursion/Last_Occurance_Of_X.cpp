#include <bits/stdc++.h>

using namespace std;

int f(int A[], int n, int x)
{
    if (n == 0)
    {
        return -1;
    }

    if (x == A[n - 1])
    {
        return n;
    }

    return f(A, n - 1, x);
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

    int ans = f(A, n, x);

    cout << ans;
}