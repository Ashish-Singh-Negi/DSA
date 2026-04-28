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

    long long P[n];
    long long prefixSum = 0;

    // O(n) - prefix sum
    for (int i = 0; i < n; i++)
    {
        prefixSum += A[i];
        P[i] = prefixSum;
    }

    long long sum = 0;

    // TC : O(n^2)
    for (int L = 0; L < n; L++)
    {
        for (int R = L; R < n; R++)
        {
            // [L -> R]
            if (L == 0)
            {
                sum += P[R];
            }
            else
            {
                sum += P[R] - P[L - 1];
            }
        }
    }

    cout << sum;
}