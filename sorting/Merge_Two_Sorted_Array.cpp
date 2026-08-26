#include <bits/stdc++.h>

using namespace std;

void mergeTwoSortedArray(int A[], int n, int B[], int m, vector<int> &C)
{
    int i = 0;
    int j = 0;

    while (i < n and j < m)
    {
        if (A[i] < B[j])
        {
            C.push_back(A[i]);
            i++;
        }
        else
        {
            C.push_back(B[j]);
            j++;
        }
    }

    // push pending elements in A
    while (i < n)
    {
        C.push_back(A[i]);
        i++;
    }

    // push pending elements in B
    while (j < m)
    {
        C.push_back(B[j]);
        j++;
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    int A[n];
    int B[m];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    vector<int> C;

    mergeTwoSortedArray(A, n, B, m, C);

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }
}