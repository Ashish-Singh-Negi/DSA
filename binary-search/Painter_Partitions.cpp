#include <bits/stdc++.h>

using namespace std;

bool possible(int A[], int n, long long timeLimit, int p)
{
    int painterPlaced = 1;

    int timeTaken = 0;

    int j = 0;

    for (int i = 0; i < n; i++)
    {
        timeTaken += A[i];

        if (timeTaken > timeLimit)
        {
            painterPlaced++;
            j = i;
            timeTaken = 0;
        }
    }

    return painterPlaced >= p;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    long long max = -1;
    int min = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[i] > min)
        {
            min = A[i];
        }
        max += A[i];
    }

    int L = min;
    int R = max;

    int ans = 0;

    while (L < R)
    {
        long long mid = (L + R) / 2;

        if (possible(A, n, mid, k))
        {
            ans = mid;
            R = mid - 1;
        }
        else
        {
            L = mid + 1;
        }
    }

    cout << ans;
}