#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a[100], j, temp;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Sorting array using Bubble Sort...." << endl;
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Sorted element in ascending order: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}