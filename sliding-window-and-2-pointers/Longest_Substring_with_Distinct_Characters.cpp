#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    unordered_set<char> st;

    int maxLength = 0;

    int L = 0;
    for (int R = L; R < n; R++)
    {
        while (st.count(str[R]))
        {
            st.erase(str[L]);
            L++;
        }

        st.insert(str[R]);

        maxLength = max(maxLength, R - L + 1);
    }

    cout << maxLength;
}