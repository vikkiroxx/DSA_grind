#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, s1 = 0, s2 = 0;
    cout << "Enter two numbers to check: ";
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        if (n % 1 == 0)
        {
            s1 = s1 + i;
        }
    }
    for (int i = 1; i < m; i++)
    {
        if (m % 1 == 0)
        {
            s2 = s2 + i;
        }
    }
    if ((n / m) == (s1 / s2))
    {
        cout << "Yes, the numbers are friendly pair";
    }
    else
    {
        cout << "No, not in friendly pair";
    }
    return 0;
}