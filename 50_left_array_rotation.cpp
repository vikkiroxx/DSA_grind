#include <bits/stdc++.h>
using namespace std;
void leftRotate(int[], int, int);
int main()
{
    int a[100], n, i;
    cout << "Emter size of array: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int d;
    cout << "Enter number of rotations: ";
    cin >> d;

    leftRotate(a, n, d);
}

void leftRotate(int arr[], int n, int k)
{
    int mod = k % n;

    for (int i = 0; i < n; i++)
    {
        cout << (arr[(mod + i) % n]) << " ";
    }
    cout << "\n";
}