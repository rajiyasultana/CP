#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int light, count = 0;
        cin >> light;

        vector<int> Switch(2 * light);

        for (int i = 0; i < 2 * light; i++) {
            cin >> Switch[i];
            count += Switch[i];
        }

        int maxOn = min(count, 2 * light - count);
        int minOn = count % 2;

        cout << minOn << " " << maxOn << endl;
    }
    return 0;
}