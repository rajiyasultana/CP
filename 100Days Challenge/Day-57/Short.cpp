#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        int count = 0;
        cin >> s;
        if(s == "abc" || s == "cba" || s == "acb" || s == "bac"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    
    return 0;
}