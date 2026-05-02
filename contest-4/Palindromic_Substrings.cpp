#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string str;
    cin >> str;

    for (int L = 0; L < n; L++)
    {
        for (int R = L; R < n; R++)
        {
            // [L, R]

            bool isPalindrom = false;

            int j = L, k = R;

            while (j <= k)
            {
                if (str[j] == str[k])
                {
                    isPalindrom = true;
                }
                else
                {
                    isPalindrom = false;
                    break;
                }
                j++;
                k--;
            }

            if (isPalindrom)
            {
                for (int i = L; i <= R; i++)
                {
                    cout << str[i];
                }

                cout << endl;
            }
        }
    }
}