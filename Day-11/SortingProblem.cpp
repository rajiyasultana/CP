#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i =0; i<t;i++){
    int x, y;
    cin >> x >> y;
    if (x > y)
    {
        swap(x, y);
        cout << x << " " << y << endl;
    }
    else
    {
        cout << x << " " << y << endl;
    }
    }
    return 0;
}