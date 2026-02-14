
#include <iostream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int n = s.size();

    int spaceCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            spaceCount++;
        }
    }

    cout << spaceCount + 1;
}