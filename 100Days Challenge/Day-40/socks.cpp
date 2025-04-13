#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int Max = max(a, b);
    int Min = min(a, b);

    int d = Min; // different collour pair
    int s = (Max - Min) / 2; //Same collour pair

    cout << d << " " << s << endl;

    return 0;
}