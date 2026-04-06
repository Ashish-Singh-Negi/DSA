#include <bits/stdc++.h>

using namespace std;

int main()
{

    string strTime;
    cin >> strTime;

    int hh = strTime[0] + strTime[1];
    int mm = strTime[3] + strTime[4];

    cout << hh << endl;
    cout << mm;

    if (hh == mm)
    {
        cout << "Mogambo is happy";
    }
    else
    {
        cout << "Mogambo is sad";
    }
}