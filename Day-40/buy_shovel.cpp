#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin >> k >> r;

    for(int i = 1; ;i++ ){
        int n = k*i;
        if((n%10) == 0 || (n%10) == r){
            cout << i << endl;
            break;
        }
    }
    return 0;
}