#include <bits/stdc++.h>

using namespace std;

char getAlpabet(int num)
{
    return 'a' + num - 1;
}

void f(int idx, string s, string &encoding, vector<string> &encodings)
{
    if (idx == s.size())
    {
        encodings.push_back(encoding);
        return;
    }

    if (s[idx] == '0')
    {
        return;
    }

    int num1 = stoi(s.substr(idx, 1));
    if (num1 > 0)
    {
        char encodedChar = getAlpabet(num1);
        encoding.push_back(encodedChar);
        f(idx + 1, s, encoding, encodings);
        encoding.pop_back();
    }

    int num2 = stoi(s.substr(idx, 2));
    if (num2 >= 10 and num2 <= 26)
    {
        int encodedChar = getAlpabet(num2);
        encoding.push_back(encodedChar);
        f(idx + 2, s, encoding, encodings);
        encoding.pop_back();
    }
}

int main()
{
    string s;
    cin >> s;

    string encoding;
    vector<string> encodings;

    f(0, s, encoding, encodings);
    cout << encodings.size() << endl;

    for (string i : encodings)
    {
        cout << i << endl;
    }
}
