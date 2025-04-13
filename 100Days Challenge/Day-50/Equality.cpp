#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n, need = 0;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    int max_well = *max_element(a.begin(), a.end());

    for(int i = 0; i<n; i++){
        need = need + (max_well - a[i]);
    }

    cout << need << endl;
    return 0;
}