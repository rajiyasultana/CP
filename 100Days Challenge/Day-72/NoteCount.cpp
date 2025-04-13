#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        bool isYes = true;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i<n - 1;i++){
            int dif = abs(arr[i] - arr[i+1]);
            if(dif != 5 && dif != 7){
                isYes = false;
                break;
            }
        }
        if(isYes){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}