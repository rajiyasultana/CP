#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
    cin >> n;
    int cow = n / 4;
    int leg = n - cow*4;
    int hen = leg / 2;

    int Total = cow + hen;

    cout << Total << endl;
    }
    
    return 0;
}