#include <bits/stdc++.h>

using namespace std;

long long f(int A[], int n)
{
    if (n == 1)
    {
        return A[n - 1];
    }

    long long smallAns = f(A, n - 1);
    smallAns += A[n - 1];

    return smallAns;
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

    long long ans = f(A, n);

    cout << ans;
}