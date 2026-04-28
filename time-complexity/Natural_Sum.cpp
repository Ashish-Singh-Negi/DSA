#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long n;
    cin >> n;

    // sum of n Natural numbers
    // int sum = 0;

    // for (int i = 1; i <= n; i++) // TC : O(n)
    // {
    //     sum += i;
    // }

    long long sum = (n * (n + 1)) / 2;

    cout << sum;
}