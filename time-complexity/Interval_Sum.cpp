#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        int L, R;
        cin >> L >> R;

        long long sum = 0;

        // for (int i = L; i <= R; i++) // O(n)
        // {
        //     sum += i;
        // }

        // rSum = R * (R + 1) / 2
        // lSum = L * (L + 1) / 2
        // sum = rSum - lSum

        sum = (R * (R + 1) / 2) - ((L - 1) * (L - 1 + 1) / 2);

        cout << sum << endl;
    }
}