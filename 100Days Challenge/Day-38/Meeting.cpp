#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, Distance = 0;
    cin >> a >> b >> c;

    int maxValue = max({a,b,c});
    int minValue = min({a,b,c});

    Distance = maxValue - minValue;

    cout << Distance << endl;
    return 0;
}