#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, a[100][100], i, j;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    cout << "Enter elements of matrix: ";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "The Upper Triangular Matrix is: " << endl;
    for (i = 0; i < r; i++)
    {
        cout << "\n";
        for (j = 0; j < c; j++)
        {
            if (i > j)
            {
                cout << "\t"
                     << "0";
            }
            else
            {
                cout << "\t" << a[i][j];
            }
        }
    }
}