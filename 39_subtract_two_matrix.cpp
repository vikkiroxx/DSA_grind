#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, a[100][100], b[100][100], sub[100][100], i, j;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    cout << "Enter elements of first matrix:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter elements of second matrix:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Subtraction of matrices is: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << sub[i][j] << " ";
            if (j == c - 1)
            {
                cout << endl;
            }
        }
    }
    return 0;
}