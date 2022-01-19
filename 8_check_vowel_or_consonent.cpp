#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    bool VowelL, VowelU;

    cout << "Enter alphabet to check:";
    cin >> c;

    VowelL = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    VowelU = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    {
        cout << "Non-Alphabet!!!!";
    }
    else if (VowelL || VowelU)
    {
        cout << "Alphabet is Vowel";
    }
    else
    {
        cout << "Alphabet is Consonet";
    }
}