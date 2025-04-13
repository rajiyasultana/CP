#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string word = "codeforces";
        int count = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != word[i]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}