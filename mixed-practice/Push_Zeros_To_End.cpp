#include <bits/stdc++.h>

using namespace std;

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

        for (int i = 0; i < n - 1; i++)
        {

            if (A[i] != 0)
                continue;

            int j = i;

            // loop till first non zero index is found
            while (j < n - 1 and A[j] == 0)
            {
                j++;
            }

            // swap Zero with non zero
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }

        cout << endl;
    }
}