#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char operation;
    cout << "Enter operation: '+','-','*','/'\n";
    cin >> operation;

    cout << "Enter number for operation:";
    cin >> a >> b;

    switch (operation)
    {
    case '+':
        cout << a << " + " << b << " = " << (a + b);
        break;

    case '-':
        cout << a << " - " << b << " = " << (a - b);
        break;

    case '*':
        cout << a << " * " << b << " = " << (a * b);
        break;

    case '/':
        cout << a << " / " << b << " = " << float(a / b);
        break;

    default:
        cout << "Error!!! Wrong operation.";
        break;
    }
    return 0;
}
