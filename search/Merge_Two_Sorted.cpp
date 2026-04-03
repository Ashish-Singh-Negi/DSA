#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    int C[n + m];

    // Merge two sorted array
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }

        k++;
    }

    // add remaining element form A[]
    while (i < n)
    {
        C[k] = A[i];
        i++;
        k++;
    }

    // add remaining element form B[]
    while (j < m)
    {
        C[k] = B[j];
        j++;
        k++;
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << C[i] << " ";
    }
}