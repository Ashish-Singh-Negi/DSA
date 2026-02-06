#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];
    int i = 0;

    // take user input
    while (i != n)
    {
        cin >> nums[i];

        i++;
    }

    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }

    cout << sum;
}
