#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    if (n <= 0)
    {
        cout << 0;
        return 0;
    }

    // TC : O(n)
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //     }
    // }

    // TC : sqrt(n)
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int j = n / i;

            if (i == j)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }

    cout << count;
}