#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n; 
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];  
        }

        sort(arr.begin(), arr.end());

        int score = 0;
        for (int i = n - 1; i <= 0; i--) {
            score += max(arr[0], arr[i]) - min(arr[0], arr[i]);
        }

        cout << score << endl;
    }

    return 0;
}
//not completed

