#include <bits/stdc++.h>

using namespace std;

int f(int A[], int n, int target)
{
    if (n == 0)
    {
        return -1;
    }

    int smallAns = f(A, n - 1, target);

    if (smallAns != -1)
        return smallAns;

    if (A[n - 1] == target)
        return n;

    return -1;
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

    int target;
    cin >> target;

    int ans = f(A, n, target);

    cout << ans;
}