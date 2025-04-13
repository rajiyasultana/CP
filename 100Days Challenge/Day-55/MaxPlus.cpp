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
        
        int maxVal = *max_element(arr.begin(), arr.end()); //5
        
        int redCount = (n + 1) / 2;//2
        int score = maxVal + redCount - 1;
        
        cout << score << endl;
    }
    
    return 0;
}
