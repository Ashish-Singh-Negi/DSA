#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long A, B;
    cin >> A >> B;

    if (A == B || (A == 0 && B == 1) || (A == 1 && B == 0))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
