#include <bits/stdc++.h>

using namespace std;

void f(int n, long long &ans)
{
    if (n == 0)
        return;

    ans *= n;
    f(n - 1, ans);
}

int main()
{
    int n;
    cin >> n;

    long long ans = 1;

    f(n, ans);

    cout << ans;
}