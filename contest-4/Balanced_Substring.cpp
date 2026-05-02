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
    int n, q;
    cin >> n >> q;

    string str;
    cin >> str;

    int P[n];
    int pre = 0;

    // O(str.length)
    for (int i = 0; i < n; i++)
    {
        if (isVowel(str[i]))
        {
            pre++;
        }
        P[i] = pre;
    }

    // O(q)
    while (q--)
    {
        int L, R;
        cin >> L >> R;

        int ans = 0;
        int substringLength = R - L + 1;

        // edge case
        if (substringLength % 2 == 1)
        {
            cout << "NO" << "\n";
            continue;
        }

        L--;
        R--;

        if (L == 0)
        {
            ans = P[R];
        }
        else
        {
            ans = P[R] - P[L - 1];
        }

        // check substring balanced or not
        if (substringLength / 2 == ans)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}