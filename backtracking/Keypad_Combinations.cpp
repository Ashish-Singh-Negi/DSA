#include <bits/stdc++.h>

using namespace std;

map<char, string> keypad = {
    {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}};

void f(string s, int idx, string &path, vector<string> &pathCombinations)
{
    if (idx == s.size())
    {
        pathCombinations.push_back(path);
        return;
    }

    char digit = s[idx];

    string choices = keypad[digit];

    for (char ch : choices)
    {
        path.push_back(ch);
        f(s, idx + 1, path, pathCombinations);
        path.pop_back();
    }
}

int main()
{
    string s;
    cin >> s;

    string path;

    vector<string> pathCombinations;

    f(s, 0, path, pathCombinations);

    cout << pathCombinations.size() << endl;

    for (string path : pathCombinations)
    {
        cout << path << "\n";
    }
}