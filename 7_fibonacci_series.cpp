#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter Range:";
    cin >> n;

    int arr[900];
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}