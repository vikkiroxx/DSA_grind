#include <bits/stdc++.h>
using namespace std;

int GCD(int, int);

int main()
{
    int a, b;

    cout << "Enter two numbers:";
    cin >> a >> b;

    cout << GCD(a, b);
    return 0;
}

int GCD(int a, int b)
{
    int x, y, r;

    if (a > b)
    {
        x = a;
        y = b;
    }
    else
    {
        x = b;
        y = a;
    }
    while (y != 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}