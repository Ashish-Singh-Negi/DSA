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

    for (int i = 0; i < n; i++)
    {
        int reqNum = x - A[i];

        if (mp.count(reqNum))
        {
            cout << mp[reqNum] << " " << i + 1 << endl;
            return 0;
        }
        else
        {
            mp.insert({A[i], i + 1});
        }
    }

    cout << -1;
}