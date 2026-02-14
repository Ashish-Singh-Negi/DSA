#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if ((int)c >= 65 && (int)c <= 90)
    {
        cout << (char)((int)c + 32);
    }
    else
    {
        cout << c;
    }
}
