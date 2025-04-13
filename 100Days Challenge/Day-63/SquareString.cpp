#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int size = s.size();
        if(size % 2 == 0){
        string FH = s.substr(0, size / 2);
        string LH = s.substr(size/2, size/2);
        if(FH == LH){
            cout << "YES" << endl;
        } 
        else{
            cout << "NO" << endl;
        }
        }
        else{
        cout << "NO" << endl;
        }
    }
    
    return 0;
}