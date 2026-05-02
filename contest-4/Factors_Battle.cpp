#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;

    long long countA = 0;

    for (long long i = 1; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            long long j = a / i;

            if (i == j)
            {
                countA++;
            }
            else
            {
                countA += 2;
            }
        }
    }

    long long countB = 0;

    for (long long i = 1; i * i <= b; i++)
    {
        if (b % i == 0)
        {
            long long j = b / i;

            if (i == j)
            {
                countB++;
            }
            else
            {
                countB += 2;
            }
        }
    }

    if (countA == countB)
    {
        cout << "DRAW";
    }
    else if (countA > countB)
    {
        cout << 'A';
    }
    else
    {
        cout << 'B';
    }
}