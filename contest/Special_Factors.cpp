#include <bits/stdc++.h>
using namespace std;

bool isSpecial(int n)
{
    if (n % 10 == 2 || n % 10 == 7)
    {
        return true;
    }

    return false;
}

int main()
{
    // your code goes here
    int n;
    cin >> n;

    int isSpecialExist = false;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isSpecial(i))
            {
                isSpecialExist = true;
                cout << i << " ";
            }
        }
    }

    if (!isSpecialExist)
    {
        cout << -1;
    }
}
