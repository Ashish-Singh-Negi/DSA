#include <bits/stdc++.h>
using namespace std;

int findHCF(int n, int m)
{
    int hcf = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 and m % i == 0)
        {
            hcf = i;
        }
    }

    return hcf;
}

int main()
{
    int n, m;
    cin >> n >> m;

    cout << findHCF(n, m) << endl;
}
