#include <bits/stdc++.h>

using namespace std;

int main()
{

    string strTime;
    cin >> strTime;

    // Check if hours match minutes
    if (strTime[0] == strTime[3] && strTime[1] == strTime[4])
    {
        cout << "Mogambo is happy";
    }
    else
    {
        cout << "Mogambo is sad";
    }
}