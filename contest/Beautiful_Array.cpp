#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int prevNum = nums[0];
    bool isBeautiful = true;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != prevNum)
        {
            isBeautiful = false;
            break;
        }
    }

    if (isBeautiful)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
