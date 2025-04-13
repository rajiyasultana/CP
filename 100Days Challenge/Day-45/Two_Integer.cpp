#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b, count = 0;
        cin >> a >> b;
        int sub = abs(a - b);

        if(sub == 0){
            cout << 0 << endl;
        }
        else {
            count = sub /10;
            if (sub%10 != 0){
                count ++;
            }
            cout << count << endl;
        }
    }
    

    
    return 0;
}