#include <bits/stdc++.h>

using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    int count = 0;

    for (int i = 0; i < k; i++)
    {
        if (isVowel(str[i]))
        {
            count++;
        }
    }

    cout << count << ' ';

    for (int i = k; i < n; i++)
    {
        if (isVowel(str[i]))
        {
            count++;
        }

        if (isVowel(str[i - k]))
        {
            count--;
        }

        cout << count << ' ';
    }
}