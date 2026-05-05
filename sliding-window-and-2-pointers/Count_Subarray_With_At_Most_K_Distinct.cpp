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

    long long count = 0;

    int L = 0;
    for (int R = L; R < n; R++)
    {
        mp[A[R]]++;

        while (mp.size() > k)
        {
            if (mp[A[L]] > 1)
            {
                mp[A[L]]--;
            }
            else
            {
                mp.erase(A[L]);
            }
            L++;
        }

        count += R - L + 1;
    }

    cout << count;
}