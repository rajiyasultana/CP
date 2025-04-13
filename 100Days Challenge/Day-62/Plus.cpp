//CF-1624A
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int maxvalue = *max_element(arr, arr + n);
        int minvalue = *min_element(arr, arr + n);

        cout << maxvalue - minvalue << endl;
    }
    return 0;
}