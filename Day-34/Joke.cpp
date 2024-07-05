#include <bits/stdc++.h>
using namespace std;
int main()
{
    string guest, host, letters, s1;
    cin >> guest;
    cin >> host;
    cin >> letters;

    s1 = guest + host;
    sort(s1.begin(), s1.end());

    sort(letters.begin(), letters.end());

    if (s1 == letters)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}