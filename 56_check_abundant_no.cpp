#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, div, sum = 0;
    cout << "Emter number to check: ";
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        div = n % i;
        if (div == 0)
        {
            sum += i;
        }
    }
    if (sum > n)
    {
        cout << n << " is Abundant Number";
    }
    else
        cout << n << " is not Abundant Number";
}