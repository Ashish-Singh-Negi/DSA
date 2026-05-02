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

    map<long long, long long> mp;

    long long pairCount = 0;

    for (int i = n - 1; i >= 0; i--)
    {

        if (mp.count((long long)A[i] * k))
        {
            pairCount += mp[(long long)A[i] * k];
        }

        mp[A[i]]++;
    }

    cout << pairCount;
}