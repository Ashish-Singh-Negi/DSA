#include <bits/stdc++.h>

using namespace std;

int f(int n)
{
    if (n == 1)
    {
        return 0;
    }

    if (n == 2)
    {
        return 1;
    }

    int smallAns1 = f(n - 1);
    int smallAns2 = f(n - 2);

    int ans = smallAns1 + smallAns2;

    return ans;
}

int main()
{
    int n;
    cin >> n;

    int ans = f(n);

    cout << ans;
}