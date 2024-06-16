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
        if (s[i] != t[t_size - (i+1)])
        {
            count ++;
        }
    }
    if(count > 0){
        cout << "NO" << endl;
    }
    if(count == 0){
        cout << "YES" << endl;
    }
    return 0;
}