#include <bits/stdc++.h>

using namespace std;

long long f(int x, int n)

{
    if (n == 0)
    {
        return 1;
    }

    long long smallAns = f(x, n - 1);

    long long ans = smallAns * x;

    return ans;
}

int main()
{
    int x, n;
    cin >> x >> n;

    long long ans = f(x, n);

    cout << ans;
}