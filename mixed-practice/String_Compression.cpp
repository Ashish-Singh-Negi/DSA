#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    for (int z = 0; z < testcases; z++)
    {
        string str;
        cin >> str;

        int n = str.length();

        int i = 0;

        while (i < n)
        {

            int j = i;
            int ctn = 0;

            while (j < n and str[i] == str[j])
            {
                j++;
                ctn++;
            }

            cout << str[i];

            if (ctn > 1)
                cout << ctn;

            i = j;
        }

        cout << endl;
    }
}