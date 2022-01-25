#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number to check for its sign: ";
    cin >> n;

    if (n >= 0)
    {
        cout << n << " is positive.";
    }
    else
    {
        cout << n << " is negative.";
    }
}