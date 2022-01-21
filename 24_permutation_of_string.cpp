#include <bits/stdc++.h>
using namespace std;
void permutate(string);
int main()
{
    string str = 'ABC';
    permutate(str);
    return 0;
}

void permutate(string str)
{
    sort(str.begin(), str.end());

    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}