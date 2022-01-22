#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[100];
    cout << "Emter size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag, i, j;
    for (i = 1; i < n; i++)
    {
        flag = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > flag)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = flag;
    }

    while (i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}