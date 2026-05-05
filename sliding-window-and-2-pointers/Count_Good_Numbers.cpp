#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    set<int> st;

    for (int i = 0; i < m; i++)
    {
        int number;
        cin >> number;

        st.insert(number);
    }

    int count = 0;

    for (int i = 0; i < k; i++)
    {
        if (st.count(A[i]))
        {
            count++;
        }
    }

    cout << count << ' ';

    for (int i = k; i < n; i++)
    {
        if (st.count(A[i]))
        {
            count++;
        }

        if (st.count(A[i - k]))
        {
            count--;
        }

        cout << count << ' ';
    }
}