#include <bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cout << "Enter Year:";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << year << " is leap year";
    }
    else
    {
        cout << year << " is not leap year";
    }
}