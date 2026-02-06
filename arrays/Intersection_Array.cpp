#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 1; z <= t; z++)
    {
        // first array

        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // second array

        int m;
        cin >> m;

        int b[m];

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++)
        {
            int target = a[i];
            int count = 0;

            for (int i = 0; i < m; i++)
            {
                if (b[i] == target)
                {
                    count++;
                    b[i] = -10000;
                    break;
                }
            }

            if (count == 1)
            {
                cout << a[i] << " ";
            }
        }

        cout << endl;
    }
}