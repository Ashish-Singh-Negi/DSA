#include <bits/stdc++.h>

using namespace std;

long long f(int n)
{
    if (n == 1)
        return 1;

    long long smallAns = f(n - 1);

    long long ans = smallAns + n;

    return ans;
}

int main()
{
    int n;
    cin >> n;

    long long ans = f(n);

    cout << ans;
}