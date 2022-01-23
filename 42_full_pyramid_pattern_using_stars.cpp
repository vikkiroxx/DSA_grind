#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, space;
    cout << "Enter number of rows for pyramid: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (space = i; space < n; space++)
        {
            cout << " ";
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}