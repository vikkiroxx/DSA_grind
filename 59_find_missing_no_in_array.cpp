#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp;
    temp = ((n + 1) * (n + 2) / 2);
    for (int i = 0; i < n; i++)
    {
        temp = temp - a[i];
    }
    cout << "Missing Number is: ";
    cout << temp;
    return 0;
}