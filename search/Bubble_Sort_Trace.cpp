#include <bits/stdc++.h>

using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    // Bubble Sort trace
    for (int i = n - 1; i >= 0; i--)
    {
        int swaps = 0;

        for (int j = 0; j < i; j++)
        {

            if (A[j] > A[j + 1])
            {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;

                swaps++;
            }
        }

        cout << "Pass " << n - i << ": ";
        printArray(A, n);
        cout << ", swaps = " << swaps << endl;

        if (swaps == 0)
            break;
    }
}