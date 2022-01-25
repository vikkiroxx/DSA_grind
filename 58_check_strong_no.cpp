#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int n1, s1 = 0;
    long fact;
    n1 = n;
    for (int i = n; i > 0; i = i / 10)
    {
        fact = 1;
        for (int j = 1; j <= i % 10; j++)
        {
            fact = fact * i;
        }
        s1 = s1 + fact;
    }
    if (s1 == n1)
    {
        cout << n1 << " is strong number" << endl;
    }
    else
    {
        cout << n1 << " is not strong number";
    }
    return 0;
}