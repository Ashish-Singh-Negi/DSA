#include <bits/stdc++.h>

using namespace std;

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
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

    // Selection Sort trace

    for (int i = 0; i < n - 1; i++)
    {
        int min_selected = i;

        // search min element
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[min_selected])
            {
                min_selected = j;
            }
        }

        // swap them
        int temp = A[i];
        A[i] = A[min_selected];
        A[min_selected] = temp;

        // print trace
        cout << "Pass " << i + 1 << ": ";
        printArray(A, n);
        cout << ", min_selected = " << A[i] << endl;
    }
}