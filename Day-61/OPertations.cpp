//CF - 2020A
#include<iostream>
using namespace std;

int main(){
    int n, k, count = 0;
    cin >> n >> k;

    while (n > 0) {
        if (n % k != 0) {
            // Subtract the remainder to make n divisible by k
            count += n % k;
            n -= n % k;
        }
        else {
            // If divisible by k, divide by k
            n /= k;
            count++; // One operation for division
        }
    }
    
    cout << count << endl;
    return 0;
}
