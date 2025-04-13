//CF- 9A
#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void findProbability(int Y, int W) {
    int maxRoll = max(Y, W);
    
    int favorable = 6 - maxRoll + 1;
    int total = 6;
    
    int divisor = gcd(favorable, total);
    cout << (favorable / divisor) << "/" << (total / divisor) << endl;
}

int main() {
    int Y, W;
    cin >> Y >> W;
    
    findProbability(Y, W);
    
    return 0;
}
