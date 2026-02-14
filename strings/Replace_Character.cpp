#include <iostream>
using namespace std;

int main()
{
    string s;
    char c1, c2;

    cin >> s;
    cin >> c1 >> c2;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (c1 == s[i])
        {
            s[i] = c2;
        }
    }

    cout << s;
}
