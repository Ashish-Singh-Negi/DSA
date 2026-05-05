#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q;
    cin >> Q;

    while (Q--)
    {

        long long T, L, R;
        cin >> T >> L >> R;

        long long ctn = 0;

        // edge case
        if (L > R)
        {
            cout << ctn << endl;
            continue;
        }

        if (T == 1) // exclusive on both ends
        {
            ctn = R - L - 1;
        }
        else if (T == 4) // inclusive on both ends
        {
            ctn = R - L + 1;
        }
        else // inclusive on left, exclusive on right  AND  exclusive on left, inclusive on right
        {
            ctn = R - L;
        }

        cout << ctn << endl;
    }
}