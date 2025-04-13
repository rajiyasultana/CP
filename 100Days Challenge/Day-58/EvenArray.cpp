#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Length of the array
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int odd_mismatch = 0, even_mismatch = 0;

        // Check mismatches
        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0)
                    even_mismatch++;  // Mismatch at even index
                else
                    odd_mismatch++;   // Mismatch at odd index
            }
        }

        // If number of mismatches at even and odd indices are equal, it's possible
        if (even_mismatch == odd_mismatch) {
            cout << even_mismatch << endl;  // Minimum number of swaps
        } else {
            cout << -1 << endl;  // Not possible to fix the array
        }
    }

    return 0;
}
