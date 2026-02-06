#include <bits/stdc++.h>
using namespace std;

int countZeros(int n)
{
    int count = 0;

    // edge case
    if (n == 0)
    {
        count++;
    }

    while (n != 0)
    {
        int digit = n % 10;

        if (digit == 0)
        {
            count++;
        }

        n = n / 10;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;

    cout << countZeros(n);
}
