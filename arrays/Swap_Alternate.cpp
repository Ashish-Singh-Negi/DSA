
#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int t;
    cin >> t;

    for (int z = 1; z <= t; z++)
    {
        // take array length
        int n;
        cin >> n;

        // declare n size array
        int nums[n];

        // take array element
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        for (int i = 1; i < n; i += 2)
        {
            swap(nums[i], nums[i - 1]);
        }

        // print swapped array elements
        for (int i = 0; i < n; i++)
        {
            cout << nums[i] << " ";
        }

        cout << endl;
    }
}
