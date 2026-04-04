#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    for (int z = 0; z < testcases; z++)
    {

        int n;
        cin >> n;

        int A[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        // check Array rotation

        int min_element_index = 0;

        for (int i = 1; i < n; i++)
        {
            if (A[i] < A[i - 1])
            {
                min_element_index = i;
            }
        }

        cout << min_element_index << endl;
    }
}