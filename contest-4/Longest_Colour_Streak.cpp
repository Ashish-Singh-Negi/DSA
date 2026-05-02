#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];

    for (auto &x : A)
        cin >> x;

    int maxLen = 1, cur = 1;

    for (int i = 1; i < n; i++)
    {
        if (A[i] == A[i - 1])
            cur++;
        else
            cur = 1;

        maxLen = max(maxLen, cur);
    }

    cout << maxLen << endl;
}