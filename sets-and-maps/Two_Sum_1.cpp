#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    set<int> st;

    for (int i = 0; i < n; i++)
    {
        int reqNum = x - A[i];

        if (st.count(reqNum))
        {
            cout << "TRUE";
            return 0;
        }
        else
        {
            st.insert(A[i]);
        }
    }

    cout << "FALSE";
}