#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    string str;
    cin >> n;   // Taking the number of stone.
    cin >> str; // Taking the stone color as a string.

    for (int i = 0; i < str.size(); i++) // Loop for travel the string
    {
        if (str[i] == str[i + 1]) // if the neibouring coloure are same then count 1.
        {
            count++;
        }
    }
    cout << count;
    return 0;
}