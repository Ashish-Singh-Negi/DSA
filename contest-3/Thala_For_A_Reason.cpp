#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        long long sum = 0;

        while (n != 0)
        {
            int digit = n % 10;

            sum = sum + digit;

            n = n / 10;
        }

        if (sum == 7)
        {
            cout << "Thala for a reason" << endl;
        }
        else
        {
            cout << "Blocked for no reason" << endl;
        }
    }
}