#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &A, int L, int R)
{

    int mid = (L + R) / 2;

    // first half ->  [L, mid]
    // second half -> [mid + 1, R]

    int i = L, j = mid + 1;

    vector<int> C;

    while (i <= mid and j <= R)
    {

        if (A[i] < A[j])
        {
            C.push_back(A[i]);
            i++;
        }
        else
        {
            C.push_back(A[j]);
            j++;
        }
    }

    // push remaining
    while (i <= mid)
    {
        C.push_back(A[i]);
        i++;
    }

    while (j <= R)
    {
        C.push_back(A[j]);
        j++;
    }

    // write back
    for (int k = L; k <= R; k++)
        A[k] = C[k - L];
}

void mergeSort(vector<int> &A, int L, int R)
{
    if (L == R)
        return;

    int mid = (L + R) / 2;

    // print Divide trace
    cout << "Divide: [" << L << " " << R << "]" << endl;

    // sort first half
    mergeSort(A, L, mid);

    // sort second half
    mergeSort(A, mid + 1, R);

    merge(A, L, R);

    // print Merge trace
    cout << "Merge: [" << L << " " << R << "]" << " -> ";
    for (int k = L; k <= R; k++)
        cout << A[k] << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> A;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        A.push_back(num);
    }

    mergeSort(A, 0, n - 1);
}