#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n;
    cin >> n;

    int marks[n];

    // take user input
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    int requiredMarks;
    cin >> requiredMarks;

    int passStudentCtn = 0;
    int failStudentCtn = 0;

    for (int i = 0; i < n; i++)
    {
        if (marks[i] >= requiredMarks)
        {
            passStudentCtn++;
        }
        else
        {
            failStudentCtn++;
        }
    }

    cout << "Pass: " << passStudentCtn << endl;
    cout << "Fail: " << failStudentCtn;
}
