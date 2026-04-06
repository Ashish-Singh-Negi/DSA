#include <bits/stdc++.h>

using namespace std;

int main()
{
    string password;
    cin >> password;

    int n = password.length();

    bool hasLowercaseChar = false;
    bool hasUppercaseChar = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    for (int i = 0; i < n; i++)
    {
        if (password[i] >= 'a' && password[i] <= 'z')
        {
            hasLowercaseChar = true;
        }
        else if (password[i] >= 'A' && password[i] <= 'Z')
        {
            hasUppercaseChar = true;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            hasDigit = true;
        }
        else
        {
            hasSpecialChar = true;
        }
    }

    // calc password strength
    int passwordStrength = hasLowercaseChar + hasUppercaseChar + hasDigit + hasSpecialChar;

    // check password strength
    if (passwordStrength == 4)
    {
        cout << "Strong";
    }
    else if (passwordStrength == 3)
    {
        cout << "Moderate";
    }
    else
    {
        cout << "Weak";
    }
}
