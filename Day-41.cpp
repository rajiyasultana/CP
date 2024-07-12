#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drinks = k * l;
    drinks /= nl;
    int limes = c * d;
    int salt = p / np;

    int ans = min(min(drinks, limes), salt) / n;
    cout << ans << endl;
    return 0;
}