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

    long long count = 0;
    long long sum = 0;

    int L = 0;
    for (int R = 0; R < n; R++)
    {
        // include A[R]
        sum += A[R];

        while (sum >= k)
        {
            // exclude A[L]
            sum -= A[L];
            L++;
        }

        count += R - L + 1;
    }

    cout << count;
}