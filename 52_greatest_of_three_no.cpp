#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three number to compare: ";
    cin >> a >> b >> c;

    int m;
    m = max(a, b);
    m = max(m, c);
    cout << "Max of these three is: ";
    cout << m;
}