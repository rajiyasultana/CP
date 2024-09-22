#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        char c;
        string s = "codeforces";
        cin >> c;
        bool found = false;

        for(int i = 0; i<s.size(); i++){
            if(c == s[i]){
                found = true;
                break;
            }
        }
        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    

    return 0;
}