#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int n = str.length();
    int i = 0;

    int ans = 0;

    while (i < n)
    {
        int ctn = 0;

        while (i < n and str[i] != ' ')
        {
            ctn++;
            i++;
        }

        if (ctn > ans)
        {
            ans = ctn;
        }

        i++;
    }

    cout << ans;
}