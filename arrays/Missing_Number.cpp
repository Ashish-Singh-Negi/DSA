
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int z = 1; z <= t; z++)
    {
        // take array length
        int n;
        cin >> n;

        // declare n size array
        int nums[n];

        // take array element
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int ans;

        for (int i = 0; i < n; i++)
        {
            int count = 0;
            int target = nums[i];

            for (int i = 0; i < n; i++)
            {
                if (nums[i] == target)
                {
                    count++;
                }
            }

            if (count == 1)
            {
                ans = nums[i];
                break;
            }
        }

        cout << ans << endl;
    }
}
