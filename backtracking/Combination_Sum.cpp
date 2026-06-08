#include <bits/stdc++.h>

using namespace std;

void f(int A[], int idx, int n, int target, int sum, vector<int> &combination, vector<vector<int>> &combinationSum)
{

    if (sum > target)
    {
        return;
    }

    if (idx == n)
    {
        if (sum == target)
        {
            // store combinations
            combinationSum.push_back(combination);
        }
        return;
    }

    // Take
    combination.push_back(A[idx]);
    f(A, idx, n, target, sum + A[idx], combination, combinationSum);
    combination.pop_back();

    // Not take
    f(A, idx + 1, n, target, sum, combination, combinationSum);
}

int main()
{
    int n, target;
    cin >> n >> target;

    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    vector<int> combination;
    vector<vector<int>> combinationSum;

    int sum = 0;

    f(A, 0, n, target, sum, combination, combinationSum);

    cout << combinationSum.size() << endl;

    for (int i = 0; i < combinationSum.size(); i++)
    {
        cout << combinationSum[i].size() << " ";
        for (int j = 0; j < combinationSum[i].size(); j++)
        {
            cout << combinationSum[i][j] << " ";
        }
        cout << endl;
    }
}