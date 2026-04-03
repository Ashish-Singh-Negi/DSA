#include <bits/stdc++.h>

using namespace std;

int main()
{
    int noOfTestcases;
    cin >> noOfTestcases;

    // Selection vs Insertion Sort which is Optimum

    for (int i = 0; i < noOfTestcases; i++)
    {
        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int B[n];
        copy(A, A + n, B);

        // Selection Sort

        int totalSwaps = 0;

        for (int i = 0; i < n - 1; i++)
        {
            int selected_min = i;

            // search min element
            for (int j = i + 1; j < n; j++)
            {
                if (A[j] < A[selected_min])
                {
                    selected_min = j;
                }
            }

            if (selected_min == i)
                continue;

            // swap
            int temp = A[i];
            A[i] = A[selected_min];
            A[selected_min] = temp;

            // increment
            totalSwaps++;
        }

        // Insertion Sort

        int totalShifts = 0;

        for (int i = 1; i < n; i++)
        {

            int shiftCount = 0;

            int temp = B[i];

            int j = i - 1;

            while (j >= 0 and B[j] > temp)
            {
                // shift
                B[j + 1] = B[j];

                j--;

                shiftCount++;
            }

            B[j + 1] = temp;

            totalShifts += shiftCount;
        }

        // check who is better
        if (totalSwaps == totalShifts)
        {
            cout << "Tie" << endl;
        }
        else if (totalSwaps < totalShifts)
        {
            cout << "Selection Sort" << endl;
        }
        else
        {
            cout << "Insertion Sort" << endl;
        }
    }
}