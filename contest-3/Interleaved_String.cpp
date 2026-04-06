#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    int n = str1.length(), m = str2.length();

    int i = 0;

    // edge case
    if (n == m)
    {
        while (i < n)
        {
            cout << str1[i] << '-' << str2[i];

            if (i < n - 1)
            {
                cout << '-';
            }

            i++;
        }

        return 0;
    }

    // n and m is not equal
    while (i < n && i < m)
    {
        cout << str1[i] << '-' << str2[i] << '-';

        i++;
    }

    while (i < n)
    {
        cout << str1[i];

        // no '-' at end
        if (i < n - 1)
        {
            cout << '-';
        }

        i++;
    }

    while (i < m)
    {
        cout << str2[i];

        // no '-' at end
        if (i < m - 1)
        {
            cout << '-';
        }

        i++;
    }
}
