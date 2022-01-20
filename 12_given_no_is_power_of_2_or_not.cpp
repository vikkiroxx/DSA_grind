#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter number to check:";
    cin >> n;

    while (n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
    {
        cout << "Power of 2 confirmed.";
    }
    else
    {
        cout << "Not power of 2.";
    }
}