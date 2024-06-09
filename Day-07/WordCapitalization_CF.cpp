//This problem is to capitalize first charecter from a word.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; 
    cin >> s; //taking a string
    s[0] = toupper(s[0]); //cpitalizing first character into upper case using toupper() function. this is belongs to "cctype" headerfile.

    cout << s << endl;

    return 0;
}