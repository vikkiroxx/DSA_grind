#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[100], i;
    cout << "Enter number of elements in array: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (i == j)
        {
            cout << arr[i] << " ";
        }
    }
}