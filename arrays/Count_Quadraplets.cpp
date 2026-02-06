#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int quadrapletCount = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                for (int l = k; l < n; l++)
                {
                    if ((i != j && j != k && k != l) && (a[i] - (2 * a[j]) + (3 * a[k]) - (4 * a[l]) == target))
                    {
                        quadrapletCount++;
                    }
                }
            }
        }
    }

    cout << quadrapletCount;
}