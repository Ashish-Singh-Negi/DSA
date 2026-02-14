#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            cout << char((int)s[i] + 32);
        }
        else
        {
            cout << char((int)s[i] - 32);
        }
    }
}