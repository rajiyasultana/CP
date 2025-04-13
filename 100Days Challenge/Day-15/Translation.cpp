#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    int count = 0;
    cin >> s;
    cin >> t;
    int t_size = t.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[t_size - (i + 1)])
        {
            count++; // Here we are counting the miss match of the reverse charecter. if there is any missmatch then count will increase.
        }
    }
    if (count > 0) // if count is not 0 that means we dont have the rebverse string.
    {
        cout << "NO" << endl;
    }
    if (count == 0)
    {
        cout << "YES" << endl;
    }
    return 0;
}