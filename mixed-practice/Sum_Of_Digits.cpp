#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;

    // Sum of digit (for larger then INT(10^9), LONG LONG(10^18) numbers)

    long long sum = 0;

    for (int i = 0; i < n.length(); i++)
    {
        sum += n[i] - '0'; // '0' -> 48 and so on...
    }

    cout << sum;
}