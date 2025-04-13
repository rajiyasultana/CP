#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int maxn = max(a, b);
        int minn = min(a, b);
        if (minn * 2 > maxn)
        {
            int sl = minn * 2;
            cout << sl * sl << endl;
        }
        else
        {
            cout << maxn * maxn << endl;
        }
    }

    return 0;
}