
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    string reverse = s;

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        char temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;
        i++;
        j--;
    }

    if (s == reverse)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}