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

        for (int i = 1; i <= d; i++)
        {

            // store element at 0 index
            int temp = A[0];

            int j = 1; // shift from [1, n-1]
            while (j < n)
            {
                A[j - 1] = A[j];
                j++;
            }

            // put A[0] at last
            A[n - 1] = temp;
        }

        printArray(A, n);
    }
}