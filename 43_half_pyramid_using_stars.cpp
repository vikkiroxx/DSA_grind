#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter number of rows for pyramid: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}