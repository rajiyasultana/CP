#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> st(n);
    for(int i = 0; i<n; i++){
        cin >> st[i];
    }

    int eligible_st = 0;

    for(int i = 0; i<n;i++){
        if(st[i] <= 5-k){
            eligible_st++;
        }
    }

    cout << eligible_st / 3 << endl;
    return 0;
}