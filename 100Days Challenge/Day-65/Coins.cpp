#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int c2 = n / 3;
        int c1 = n - 2 * c2;

        if (c1 > c2 + 1) {
            c2++;
            c1 = n - 2 * c2;
        }

        cout << c1 << " " << c2 << endl;
    }
    return 0;
}