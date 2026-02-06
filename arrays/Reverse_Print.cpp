#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n;
    cin >> n;

    int nums[n];
    int i = 0;

    // take user input
    while (i != n)
    {
        cin >> nums[i];

        i++;
    }

    // reverse loop
    for (int i = n - 1; i >= 0; i--)
    {
        cout << nums[i] << " ";
    }
}
