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

    int P1[n];

    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        pre += A[i];
        P1[i] = pre;
    }

    int P2[n];

    int pre2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        pre2 += A[i];

        P2[i] = pre2;
    }

    int epCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (P1[i] == P2[i])
        {
            epCount++;
        }
    }

    cout << epCount;
}