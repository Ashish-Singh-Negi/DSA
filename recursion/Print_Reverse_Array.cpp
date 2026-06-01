#include <bits/stdc++.h>

using namespace std;

void f(int A[], int n)
{
    if (n == 0)
        return;

    cout << A[n - 1] << " ";
    f(A, n - 1);
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

    f(A, n);
}