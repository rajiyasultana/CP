#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        // Extract the digit d and the number of times it's repeated k
        int d = x % 10;  // This gives the digit (since x is boring, all digits are the same)
        int k = 0;       // This will count the number of digits in x
        
        int temp = x;
        while (temp > 0) {
            k++;
            temp /= 10;
        }
        
        // Calculate the number of keypresses
        // For all numbers from 1 to (d-1) (full sequences of 1, 11, 111, 1111)
        int result = 10 * (d - 1); // Each digit 1 to (d-1) contributes 10 keypresses
        
        // For the current digit d, add the keypresses up to k digits
        result += (k * (k + 1)) / 2;  // This is 1 + 2 + 3 + ... + k
        
        cout << result << endl;
    }
    
    return 0;
}
