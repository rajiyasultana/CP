// For 4, combinations: 0000, 0001, 0010, 0101,
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        for (int i = 0; i < n; i++)
        {
            if(i == 0){
                s += "1";
            }
            else{
                s += "0";
            }
            
        }
        cout << s << endl;
    }
    return 0;
}