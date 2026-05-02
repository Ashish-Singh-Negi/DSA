#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];

    for (auto &x : A)
        cin >> x;

    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(A[i]);
        cout << st.size() << " ";
    }
}