#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[1000];
    int i, vowels = 0, consonants = 0;

    cout << "Enter the string: ";
    gets(s);
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    cout << "Vowels = ";
    cout << vowels << endl;
    cout << "Consonants =";
    cout << consonants;
}