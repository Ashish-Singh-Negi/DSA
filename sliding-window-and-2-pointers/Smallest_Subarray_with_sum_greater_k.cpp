#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long k;
    cin >> k;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int minLength = INT32_MAX;
    long long sum = 0;

    int L = 0;
    for (int R = 0; R < n; R++)
    {
        // include A[R]
        sum += A[R];

        while (sum > k)
        {
            minLength = min(minLength, R - L + 1);

            // exclude A[L]
            sum -= A[L];
            L++;
        }
    }

    if (minLength == INT32_MAX)
    {
        cout << -1;
    }
    else
    {
        cout << minLength;
    }
}