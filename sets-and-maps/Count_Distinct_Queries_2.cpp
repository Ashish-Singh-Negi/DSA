#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    // <number, occuranceCount>
    map<int, int> mp;

    while (Q--)
    {
        int t;
        cin >> t;

        if (t == 1) // insert or update a value
        {
            int n;
            cin >> n;

            if (mp.count(n))
            {
                mp[n]++;
            }
            else
            {
                mp.insert({n, 1});
            }
        }
        else if (t == 2) // removes one occurrence
        {
            int n;
            cin >> n;

            int occurrence = mp[n];
            if (occurrence > 1)
            {
                mp[n]--;
            }
            else
            {
                mp.erase(n);
            }
        }
        else if (t == 3) // print distinct elements present in map
        {
            cout << mp.size() << "\n";
        }
        else if (t == 4) // print YES or NO if element present or not
        {
            int n;
            cin >> n;

            if (mp.count(n))
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
}