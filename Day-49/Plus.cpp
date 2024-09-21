#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,c;
        cin >> a >> b >> c;
        int add = a + b;
        int sub = a - b;

        if(add == c){
            cout << "+" << endl;
        }
        else{
            cout << "-" << endl;
        }
    }
    return 0;
}