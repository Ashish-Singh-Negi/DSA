#include <bits/stdc++.h>

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

    int m;
    cin >> m;

    int B[m];
    for (int i = 0; i < m; i++)
    {
        cin >> B[i];
    }

    set<int> st;
    set<int> resultSet;

    while (n--)
    {
        st.insert(A[n]);
    }

    while (m--)
    {
        if (st.count(B[m]))
        {
            resultSet.insert(B[m]);
        }
    }

    cout << resultSet.size() << endl;

    for (auto &s : resultSet)
    {
        cout << s << " ";
    }
}