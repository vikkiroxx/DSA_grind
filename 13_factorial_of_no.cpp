#include <bits/stdc++.h>
using namespace std;

int fact(int);
int main()
{
    int n;
    cout << "Enter number for factorial:";
    cin >> n;

    cout << fact(n);
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}