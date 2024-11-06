#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        bool isSame = false;
        for(int i = 0; i<n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i<n; i++){
            int value = arr[i] - 1;
            if(arr[value] - 1 == i){
                isSame = true;
                break;
            }
        }
        if(isSame){
            cout << 2 << endl;
        }
        else{
            cout << 3 << endl;
        }
    }
    return 0;
}