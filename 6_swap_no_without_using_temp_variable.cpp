#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, sum;
    cout << "Enter Numbers:";
    cin >> a >> b;

    sum = a + b;
    a = sum - a;
    b = sum - b;

    cout << a << " " << b;
}