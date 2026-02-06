#include <bits/stdc++.h>
using namespace std;

int countFators(int n)
{
    int count;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    return count;
}

bool isPrime(int n)
{
    return (countFators(n) == 2);
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
}
