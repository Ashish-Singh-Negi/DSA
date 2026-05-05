#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    long long ans = 0;

    for (int i = 0; i < k; i++)
    {
        ans += A[i];
    }

    long long max = ans;

    for (int i = k; i < n; i++)
    {
        // include A[i]
        max += A[i];

        // exclude A[i-k]
        max -= A[i - k];

        if (max > ans)
        {
            ans = max;
        }
    }

    cout << ans;
}