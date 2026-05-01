#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    map<int, int> mp;

    long long count = 0;

    for (int i = 0; i < n; i++)
    {
        int requiredNumber = x - A[i];

        if (mp.count(requiredNumber))
        {
            count += mp[requiredNumber];
        }

        if (mp.count(A[i]))
        {
            mp[A[i]]++;
        }
        else
            mp[A[i]] = 1;
    }

    cout << count;
}