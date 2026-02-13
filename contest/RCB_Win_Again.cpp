#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    int nums[n];

    // take user input
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int mid = n / 2;

    int i = mid - 1;
    int j = mid;

    while (i != -1)
    {
        cout << nums[i] << " " << nums[j] << " ";
        i--;
        j++;
    }
}
