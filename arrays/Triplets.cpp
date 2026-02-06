#include <bits/stdc++.h>
using namespace std;

int main()
{
    // take testcases count
    int t;
    cin >> t;

    for (int z = 0; z < t; z++)
    {
        // take array size
        int n;
        cin >> n;

        // declare n size array
        int a[n];

        // input for array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int target;
        cin >> target;

        int tripletCount = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (i != j)
                {
                    for (int k = j; k < n; k++)
                    {
                        if (j != k && a[i] + a[j] + a[k] == target)
                        {
                            tripletCount++;
                        }
                    }
                }
            }
        }

        cout << tripletCount << endl;
    }
}