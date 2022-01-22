#include <bits/stdc++.h>
using namespace std;
int main()
{
    int search(int[], int, int);
    int n, i, a[100], e, res;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter elements of array: ";
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter " << i + 1 << " elemnt: ";
        cin >> a[i];
    }
    cout << "Enter element to search: ";
    cin >> e;

    res = search(a, n, e);

    if (res != 1)
    {
        cout << "\nElement found at position " << res + 1 << "\n";
    }
    else
    {
        cout << "\nElement is not found!!!";
    }
    return 0;
}
int search(int a[], int n, int e)
{
    int f, l, m;
    f = 0;
    l = n - 1;

    while (f <= 1)
    {
        m = (f + 1) / 2;
        if (e == a[m])
        {
            return (m);
        }
        else
        {
            if (e > a[m])
            {
                f = m + 1;
            }
            else
            {
                l = m - 1;
            }
        }
    }
    return -1;
}