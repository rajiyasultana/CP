#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int num;
        cin >> num;
        int r = num / 10;
        int sum = (num % 10) + (r % 10);
        cout << sum << endl;
    }
    return 0;
}