#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        // x - element, i - index (store 1 based index)
        mp.insert({x, i});
    }

    while (q--)
    {
        int x;
        cin >> x;

        if (mp[x] > 0)
        {
            cout << mp[x] << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }
}