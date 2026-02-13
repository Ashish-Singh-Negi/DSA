#include <bits/stdc++.h>
using namespace std;

void printTillN(int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        cout << element << " ";
    }
}

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

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            zeroCount++;
        }
        else if (nums[i] == 1)
        {
            oneCount++;
        }
        else
        {
            twoCount++;
        }
    }

    printTillN(twoCount, 2);
    printTillN(oneCount, 1);
    printTillN(zeroCount, 0);
}
