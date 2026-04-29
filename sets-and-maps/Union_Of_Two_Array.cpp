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

    while (n--)
    {
        st.insert(A[n]);
    }

    while (m--)
    {
        st.insert(B[m]);
    }

    cout << st.size() << "\n";

    for (auto &s : st)
    {
        cout << s << " ";
    }
}