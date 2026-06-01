#include <bits/stdc++.h>

using namespace std;

int f(int A[], int n)
{
    if (n == 1)
    {
        return A[n - 1];
    }

    int smallAns = f(A, n - 1);
    if (smallAns > A[n - 1])
    {
        return smallAns;
    }

    return A[n - 1];
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

    int ans = f(A, n);

    cout << ans;
}