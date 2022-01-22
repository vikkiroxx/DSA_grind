#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, sum = 0, a[100][100], b[100][100], product[100][100], i, j, k;
    cout << "Enter rows number: ";
    cin >> r;
    cout << "Emetr column number: ";
    cin >> c;

    cout << "Enter first matrix:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter second matrix:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "Multiplying of given two matrices:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            product[i][j] = sum;
        }
    }
    cout << "Multiplication of two matrices:" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "\t" << product[i][j];
        }
        printf("\n\n");
    }
    return 0;
}