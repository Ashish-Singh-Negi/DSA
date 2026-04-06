#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // Total Max Min Average

    int total = 0;
    int max = A[0];
    int min = A[0];
    int average = 0;

    for (int i = 0; i < n; i++)
    {

        if (A[i] > max)
        {
            max = A[i];
        }

        if (A[i] < min)
        {
            min = A[i];
        }

        total += A[i];

        if (i == n - 1)
        {
            average = (total) / n;
        }
    }

    cout << total << " " << max << " " << min << " " << average;
}