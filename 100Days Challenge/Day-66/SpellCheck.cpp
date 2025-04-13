#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s , name = "Timur";

        cin >> n >> s;
        sort(s.begin(), s.end());
        sort(name.begin(), name.end());

        if (n > 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (s == name)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}