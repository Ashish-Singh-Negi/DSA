#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    unordered_map<char, int> mp;

    int maxLength = 0;

    int L = 0;
    for (int R = L; R < n; R++)
    {
        // include
        mp[str[R]]++;

        // exclude
        while (mp.size() > k)
        {

            if (mp[str[L]] > 1)
            {
                mp[str[L]]--;
            }
            else
            {
                mp.erase(str[L]);
            }
            L++;
        }

        maxLength = max(maxLength, R - L + 1);
    }

    cout << maxLength;
}