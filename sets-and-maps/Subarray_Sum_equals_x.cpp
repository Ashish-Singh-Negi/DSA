#include <bits/stdc++.h>

using namespace std;

bool isSubarraySumEqualToX()
{
    long long n, x;
    cin >> n >> x;

    long long A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    set<long long> st;

    long long pre = 0;

    for (int i = 0; i < n; i++)
    {
        pre += A[i];

        if (pre == x)
        {
            return true;
        }

        if (st.count(pre - x))
        {
            return true;
        }

        st.insert(pre);
    }

    return false;
}

int main()
{
    if (isSubarraySumEqualToX())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}