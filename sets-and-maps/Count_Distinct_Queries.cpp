#include <bits/stdc++.h>
#include <set>

using namespace std;

int main()
{

    int Q;
    cin >> Q;

    set<int> st;

    while (Q--)
    {
        int t;
        cin >> t;

        if (t == 1)
        {
            int n;
            cin >> n;

            st.insert(n);
        }
        else if (t == 2)
        {
            int n;
            cin >> n;

            st.erase(n);
        }
        else if (t == 3)
        {
            cout << st.size() << "\n";
        }
        else if (t == 4)
        {
            int n;
            cin >> n;

            if (st.count(n))
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
}