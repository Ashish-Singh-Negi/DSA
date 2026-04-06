#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    string ans;

    // 'A' => 65 to 'Z' => 90
    // 'a' => 97 to 'z' => 122

    for (int i = 0; i < str.length(); i++)
    {

        char toggleChar;

        // check char is Uppercase or Lower
        if (str[i] >= 65 and str[i] <= 90)
        {
            toggleChar = str[i] + 32; // convert to lower case
        }
        else
        {
            toggleChar = str[i] - 32; // covert to upper case
        }

        ans = ans + toggleChar;
    }

    cout << ans;
}