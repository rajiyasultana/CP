#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> v;
        int n, count = 0, temp;
        cin >> n;

        if (n % 10 != 0)
        {
            v.push_back(n % 10);
        }
        temp = n % 10;
        n -= temp;
        if (n % 100 != 0)
        {
            v.push_back(n % 100);
        }
        temp = n % 100;
        n -= temp;
        if (n % 1000 != 0)
        {
            v.push_back(n % 1000);
        }
        temp = n % 1000;
        n -= temp;
        if (n % 10000 != 0)
        {
            v.push_back(n % 10000);
        }
        if (n >= 10000 && n % 10000 == 0)
        {
            v.push_back(n);
        }
        cout << v.size() << endl;

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}