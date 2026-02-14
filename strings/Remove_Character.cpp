#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    char c;
    cin >> c;

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (c != s[i])
        {
            cout << s[i];
        }
    }
}