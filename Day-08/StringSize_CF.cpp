// there wil be a string. if the number of "distinct" character is odd then he is male. Otherwise female.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;                          // taking input of the string;
    int n = 0;                         // n varriable for storing the number of distinct number.
    sort(s.begin(), s.end());          // sorting the string for gather the same ch serialy.
    for (int i = 0; i < s.size(); i++) // loop for traverse the sorted string.
    {
        if (s[i] != s[i + 1]) // condition for checking if there are any simillar ch
        {
            n++; // if not then count the ch.
        }
    }
    if (n % 2 != 0) // checking for male and female.
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0; // The END. (^D^).
}