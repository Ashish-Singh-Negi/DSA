#include <iostream>

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

    // print all possible subarray

    // TC : O(n^3)
    for (int L = 0; L < n; L++)
    {
        for (int R = L; R < n; R++)
        {
            // [L, R]
            for (int i = L; i <= R; i++)
            {
                cout << A[i] << " ";
            }
            cout << "\n";
        }
    }
}