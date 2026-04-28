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

    int P[n];
    long long sum = 0;

    // TC : O(n^3)
    for (int L = 0; L < n; L++)
    {
        for (int R = L; R < n; R++)
        {
            // [L, R]
            for (int i = L; i <= R; i++)
            {
                sum += A[i];
            }
        }
    }

    cout << sum;
}