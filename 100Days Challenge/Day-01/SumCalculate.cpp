//This program will take three integer as input. And check that the sum of two number is equal to another one.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,c;
        cin >>a>>b>>c;
        if(a+b == c || b+c == a || a + c == b){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}