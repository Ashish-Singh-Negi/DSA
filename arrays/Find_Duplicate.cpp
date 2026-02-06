#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 1; z <= t; z++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans;

        for (int i = 0; i < n; i++)
        {
            int target = a[i];
            int count = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] == target)
                {
                    count++;
                }
            }

            if (count == 2)
            {
                ans = a[i];
                break;
            }
        }

        cout << ans << endl;
    }
}