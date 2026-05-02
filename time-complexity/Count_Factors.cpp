#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long count = 0;

    if (n <= 0)
    {
        cout << 0;
        return 0;
    }

    // TC : O(n)
    // for (long long i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         count++;
    //     }
    // }

    // TC : sqrt(n)
    for (long long i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            long long j = n / i;

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