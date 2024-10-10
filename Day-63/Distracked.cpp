#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> solvedTask;
    bool suspicious = false;

    for(int i = 0; i < s.size(); i++){
        if(solvedTask.count(s[i]) && s[i] != s[i-1]){
            suspicious = true;
            break;
        }
        else{
            solvedTask.insert(s[i]);
        }
    }
    
    if(suspicious) cout << "NO" << endl;
    else cout << "YES" << endl;
    }
    return 0;
}