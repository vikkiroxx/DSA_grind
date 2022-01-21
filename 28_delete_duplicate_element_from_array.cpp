#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[100], i, j, k;
    cout << "Enter number of elements in the array: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                j--;
                n--;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}