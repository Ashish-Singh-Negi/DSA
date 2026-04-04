#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // 4 3 10 9 2
    // sort
    // 2 3 4 9 10
    // A[n-2] is second largest element

    for (int i = 0; i < n; i++)
    {
        int min_selected = i;

        // search min element index
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min_selected])
            {
                min_selected = j;
            }
        }

        // swap
        int temp = A[i];
        A[i] = A[min_selected];
        A[min_selected] = temp;
    }

    int secondLargest = -1;

    // search in reverse [n-1, 0]
    for (int i = n - 1; i > 0; i--)
    {
        // check is alternate element equal
        if (A[i] == A[i - 1])
        {
            continue;
        }
        else
        {
            secondLargest = A[i - 1];
            break;
        }
    }

    cout << secondLargest;
}