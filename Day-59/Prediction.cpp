#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    // Find the next prime after n
    int nextPrime = n + 1;
    while (!isPrime(nextPrime)) {
        nextPrime++;
    }
    
    // Check if the next prime is equal to m
    if (nextPrime == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
