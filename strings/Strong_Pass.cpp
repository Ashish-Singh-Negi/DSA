
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    // It consists of exactly 10 characters.
    // It contains at least one lowercase English letter.
    // It contains at least one uppercase English letter.
    // It contains at least one digit.
    // It contains at least one special character.

    int charCount = 0;
    int lowercaseCount = 0;
    int uppercaseCount = 0;
    int digitCount = 0;
    int specialCount = 0;

    if (n < 10 || n > 10)
    {
        cout << "Weak";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
        {
            digitCount++;
        }
        else if (s[i] >= 65 && s[i] <= 90)
        {
            uppercaseCount++;
        }
        else if (s[i] >= 97 && s[i] <= 122)
        {
            lowercaseCount++;
        }
        else
        {
            specialCount++;
        }
    }

    if (digitCount > 0 && uppercaseCount > 0 && lowercaseCount > 0 && specialCount > 0)
    {
        cout << "Strong";
    }
    else
    {
        cout << "Weak";
    }
}