#include <bits/stdc++.h>

using namespace std;

void printReverse(int n)
{
    if (n == 0)
        return;

    cout << n % 10;
    printReverse(n / 10);
}

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    printReverse(n);
}