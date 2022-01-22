#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void selectionsort(int a[], int size)
{
    for (int step = 0; step < (size - 1); step++)
    {
        int max_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (a[i] > a[max_idx])
            {
                max_idx = i;
            }
        }
        swap(&a[max_idx], &a[step]);
    }
}

int main()
{
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);
    selectionsort(data, size);
    cout << "Sorted array in Ascending Order: ";
    print(data, size);
}