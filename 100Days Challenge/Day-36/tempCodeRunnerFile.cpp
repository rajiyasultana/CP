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
            count++;
        }
        temp = n % 10;
        n -= temp;
        if (n % 100 != 0)
        {
            v.push_back(n % 100);
            count++;
        }
        temp = n % 100;
        n -= temp;
        if (n % 1000 != 0)
        {
            v.push_back(n % 1000);
            count++;
        }
        temp = n % 1000;
        n -= temp;
        if (n % 10000 != 0)
        {
            v.push_back(n % 10000);
            count++;
        }
        if (n % 10000 == 0)
        {
            v.push_back(n);
            count++;
        }
        cout << v.size() << endl;

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}