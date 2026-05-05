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

    map<int, int> mp;

    int count = 0;

    for (int i = 0; i < k; i++)
    {
        if (mp.count(A[i]))
        {
            mp[A[i]]++;
        }
        else
        {
            mp[A[i]]++;
        }
    }

    cout << mp.size() << " ";

    for (int i = k; i < n; i++)
    {
        // include
        if (mp.count(A[i]))
        {
            mp[A[i]]++;
        }
        else
        {
            mp[A[i]]++;
        }

        // exclude
        if (mp[A[i - k]] > 1)
        {
            mp[A[i - k]]--;
        }
        else
        {
            mp.erase(A[i - k]);
        }

        cout << mp.size() << " ";
    }
}