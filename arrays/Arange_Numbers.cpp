
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

        int i = 1;

        // print odd
        for (int i = 1; i <= n; i = i + 2)
        {
            cout << i << " ";
        }

        if (n % 2 != 0)
            n = n - 1;

        // print even in revese
        for (int i = n; i > 1; i = i - 2)
        {
            cout << i << " ";
        }

        cout << endl;
    }
}
