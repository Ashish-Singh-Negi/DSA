#include <bits/stdc++.h>

using namespace std;

bool checkGap(long long A[], int n, long long gap, int c)
{
    int cowPlaced = 1;
    int j = 0;

    for (int i = 1; i < n; i++)
    {
        if ((A[i] - A[j]) >= gap)
        {
            cowPlaced++;
            j = i;
        }
    }

    return cowPlaced >= c;
}

int main()
{
    int n, x;
    cin >> n >> x;

    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    long long L = 1;
    long long R = A[n - 1] - A[0];

    int ans = 0;

    while (L <= R)
    {
        long long mid = L + (R - L) / 2;

        if (checkGap(A, n, mid, x))
        {
            ans = mid;
            L = mid + 1;
        }
        else
        {
            R = mid - 1;
        }
    }

    cout << ans;
}