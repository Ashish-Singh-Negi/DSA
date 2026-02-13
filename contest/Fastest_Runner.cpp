#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n;
    cin >> n;

    int times[n];

    // take user input
    for (int i = 0; i < n; i++)
    {
        cin >> times[i];
    }

    int minIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (times[i] <= times[minIndex])
        {
            minIndex = i;
        }
    }

    cout << minIndex + 1;
}
