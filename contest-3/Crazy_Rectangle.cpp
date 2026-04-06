#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    char letter = 'a';
    char number = '1';

    int ctn = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // ctn -> even  (print number)
            // ctn -> odd  (print letter)
            if (ctn % 2 == 0)
            {
                cout << number++;
            }
            else
            {
                cout << letter++;
            }

            ctn++;

            // '9' + 1 -> reset to '1'
            if (number == '9' + 1)
            {
                number = '1';
            }

            // 'z' + 1 -> reset to 'a'
            if (letter == 'z' + 1)
            {
                letter = 'a';
            }
        }
        cout << endl;
    }
}