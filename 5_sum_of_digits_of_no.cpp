#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0, sum = 0, a;
    cout << "Enter Number:";
    cin >> n;

    while (n != 0)
    {
        a = n % 10;
        sum += a;
        n = n / 10;
    }
    cout << sum;
    return 0;
}