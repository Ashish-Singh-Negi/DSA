// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int nums[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> nums[i];
//     }

//     int i = 0;
//     int j = n - 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (nums[i] == 1)
//         {
//             int j = i;
//             int swapIndex = i;
//             // search remaining 0 in array
//             while (j < n)
//             {
//                 if (nums[j] == 0)
//                 {
//                     swapIndex = j;
//                     break;
//                 }
//                 j++;
//             }

//             // swap
//             int temp = nums[i];
//             nums[i] = nums[swapIndex];
//             nums[swapIndex] = temp;
//         }
//     }

//     for (int k = 0; k < n; k++)
//     {
//         cout << nums[k] << " ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    for (int z = 1; z <= t; z++)
    {
        int n;
        cin >> n;

        int nums[n];

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        int count0 = 0;
        int count1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }

        // print all 0s
        for (int i = 1; i <= count0; i++)
        {
            cout << 0 << " ";
        }

        for (int i = 1; i <= count1; i++)
        {
            cout << 1 << " ";
        }

        cout << endl;
    }
}
