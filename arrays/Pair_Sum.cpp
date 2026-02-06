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

        int pairCount = 0;

        for (int i = 0; i < n; i++)
        {
            int element = a[i];

            for (int j = i; j < n; j++)
            {
                if (i != j && element + a[j] == target)
                {
                    pairCount++;
                }
            }
        }

        cout << pairCount << endl;
    }
}