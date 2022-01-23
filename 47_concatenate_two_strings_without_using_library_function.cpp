#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s1[100], s2[100], s3[200];
    int i, j;
    cout << "Enter first string: ";
    gets(s1);
    cout << "Enter second string: ";
    gets(s2);

    for (i = 0; s1[i] != '\0'; i++)
    {
        s3[i] = s1[i];
    }
    for (j = 0; j < s2[j] != '\0'; j++)
    {
        s3[i + j] = s2[j];
    }
    s3[i + j] = '\0';
    cout << "The concatenated string is: " << s3;
    return 0;
}