#include <bits/stdc++.h>

using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

int main()
{
    int testcases;
    cin >> testcases;

    for (int z = 0; z < testcases; z++)
    {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int d;
        cin >> d;

        if (d == 0)
        {
            printArray(A, n);
            continue; // skip to next testcase
        }

        // Rotate array d times left

        int i = d;
        int j = 0;

        // print from [d, n]
        while (i < n)
        {
            cout << A[i] << " ";
            i++;
        }

        // print from [0, d]
        while (j < d)
        {
            cout << A[j] << " ";
            j++;
        }

        cout << endl;
    }
}