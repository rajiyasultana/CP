#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        
        if ((n / 2) % 2 != 0) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
            vector<int> a;
            for (int i = 1; i <= n / 2; ++i) {
                a.push_back(2 * i);
            }
            for (int i = 1; i < n / 2; ++i) {
                a.push_back(2 * i - 1);
            }
            a.push_back(n + n / 2 - 1);

            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
