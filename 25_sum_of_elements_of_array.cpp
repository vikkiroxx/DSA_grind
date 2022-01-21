#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {12, 25, 27, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of given array is " << sum(arr, n);
    return 0;
}

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        return sum;
    }
}