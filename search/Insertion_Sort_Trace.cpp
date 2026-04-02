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

    // Insertion Sort Trace

    int pass = 0;

    for (int i = 1; i < n; i++)
    {

        int shift = 0;

        int temp = A[i];
        int j = i - 1;

        while (j >= 0 and A[j] > temp)
        {
            // shift
            A[j + 1] = A[j];

            j--;

            shift++;
        }

        A[j + 1] = temp;

        // Print format (Pass 1: 1 5 4 2 3 , 1 5 | 4 2 3 , shifts = 1)

        cout << "Pass " << ++pass << ": ";
        printArray(A, n);
        cout << ", ";

        int k = 0;
        // print sorted region [0 -> i]
        while (k <= i)
        {
            cout << A[k] << " ";
            k++;
        }

        cout << "| ";

        // print unsorted region [i -> n]
        while (k < n)
        {
            cout << A[k] << " ";
            k++;
        }

        cout << ", shifts = " << shift << endl;
    }
}