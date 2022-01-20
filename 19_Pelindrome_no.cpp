#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, reverse = 0;
    cout << "Enter number to check for pelindrome: ";
    cin >> n;
    a = n;
    while (n != 0)
    {

        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    if (a == reverse)
    {
        cout << a << " is pelindrome number.";
    }
    else
    {
        cout << "Not Pelindrome.";
    }
}