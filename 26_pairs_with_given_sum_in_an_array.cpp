#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], sum, n, flag = 0, i = 0;
    cout << "Enter number of elements in array: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the required sum for pairs: ";
    cin >> sum;

    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << "," << arr[j] << endl;
                flag = 1;
            }
        }
    }
    if (flag = 0)
    {
        cout << "No pairs found";
    }
}