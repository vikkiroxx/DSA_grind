#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100], i, j;
    cout << "Enter number of elements for array: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[0];
    for (i = 0; i < n; i++)
    {
        if (temp > arr[i])
        {
            temp = arr[i];
        }
    }
    cout << temp;
    return 0;
}