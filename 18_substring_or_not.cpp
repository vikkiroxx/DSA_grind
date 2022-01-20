#include <bits/stdc++.h>
using namespace std;

int substring(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    for (int i = 0; i <= (n2 - n1); i++)
    {
        int j;
        for (j = 0; j <= n1; j++)
        {
            if (s2[i + j] != s1[j])
                break;
        }
        if (j == n1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    char s1[100], s2[100];
    cout << "Enter strings for checking:\n";
    cout << "Substring: ";
    gets(s1);
    cout << "String: ";
    gets(s2);

    int res = substring(s1, s2);
    if (res == -1)
    {
        cout << "Not Substring.";
    }
    else
    {
        cout << "Substring ♥";
    }
    return 0;
}