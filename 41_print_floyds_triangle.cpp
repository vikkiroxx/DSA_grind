#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, a = 1;
    ;
    cout << "Emter number of rows for Floyds Triangle: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}