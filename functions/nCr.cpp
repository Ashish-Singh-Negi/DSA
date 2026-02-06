#include <bits/stdc++.h>
using namespace std;

long long factorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int n, r;
    cin >> n >> r;

    // n factorial
    long long nFact = factorial(n);

    // r factorial
    long long rFact = factorial(r);

    // (n - r) factorial
    long long nrFact = factorial(n - r);

    long long nCr = nFact / (rFact * nrFact);

    cout << nCr;
}
