#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "Enter number to check:";
    cin >> n;

    while (i < n)
    {
        if (n % i == 0)
        {
            sum += i;
        }
        i++;
    }

    if (sum == n)
    {
        cout << n << " is perfect number.";
    }
    else
    {
        cout << n << " is not perfect number.";
    }
    return 0;
}