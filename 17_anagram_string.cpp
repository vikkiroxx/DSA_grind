#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    if (n1 != n2)
    {
        return false;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (int i = 0; i < n1; i++)
    {
        if (s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char s1[100], s2[100];
    cout << "Enter both strings to compare for anagram:\n";
    gets(s1);
    gets(s2);

    if (anagram(s1, s2))
    {
        cout << "Both are Anagram to each other.";
    }
    else
    {
        cout << "No anagram.";
    }
    return 0;
}