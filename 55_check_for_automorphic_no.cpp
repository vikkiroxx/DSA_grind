#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number for checking: ";
    cin >> n;
    int square, flag = 1;
    square = pow(n, 2);

    while (n > 0)
    {
        if (n % 10 != square % 10)
        {
            flag = 0;
        }
        n /= 10;
        square /= 10;
    }
    if (flag == 1)
    {
        cout << "Automorphic Number";
    }
    else
    {
        cout << "Not automorphic number";
    }
    return 0;
}