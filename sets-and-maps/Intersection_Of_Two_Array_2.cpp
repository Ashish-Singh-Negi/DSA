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

    // ---------------------

    map<int, int> mp1;
    map<int, int> mp2;

    while (n--)
    {
        if (mp1.count(A[n]))
        {
            mp1[A[n]]++;
        }
        else
        {
            mp1.insert({A[n], 1});
        }
    }

    while (m--)
    {
        if (mp2.count(B[m]))
        {
            mp2[B[m]]++;
        }
        else
        {
            mp2.insert({B[m], 1});
        }
    }

    map<int, int> resultMap;

    for (auto &m : mp1)
    {
        // check element exist on both map or not
        if (mp2.count(m.first))
        {
            int multipleIntersectionCount = min(mp1[m.first], mp2[m.first]);
            resultMap.insert({m.first, multipleIntersectionCount});
        }
    }

    int size = 0;

    for (auto &m : resultMap)
    {
        size += m.second;
    }

    cout << size << "\n";

    for (auto &m : resultMap)
    {

        while (m.second--)
        {
            cout << m.first << " ";
        }
    }
}