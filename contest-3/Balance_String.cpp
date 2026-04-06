#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int n = str.length();

    int aCount = 0, bCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a')
        {
            aCount++;
        }
        else
        {
            bCount++;
        }
    }

    if (aCount == bCount)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}