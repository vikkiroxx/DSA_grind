#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, a, r, n = 0, power, result = 0;
    cout << "Enter number to check for armstrong:";
    cin >> num;

    a = num;

    while (a != 0)
    {
        a = a / 10;
        ++n;
    }

    while (a != 0)
    {
        r = a % 10;
        power = round(pow(r, n));
        result = result + power;
        a = a / 10;
    }

    if (result == num)
    {
        cout << "Number is Armstrong.";
    }
    else
    {
        cout << "Number is not Armstrong.";
    }
    return 0;
}
