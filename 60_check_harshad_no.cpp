#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int i = n; i > 0; i /= 10)
    {
        sum = sum + i % 10;
    }
    if (n % sum == 0)
    {
        cout << "Yes, the number is Harshad Number";
    }
    else
    {
        cout << "No, the number is not Harshad Number";
    }
}