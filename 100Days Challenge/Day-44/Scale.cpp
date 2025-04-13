#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<string> g(n);
        for (int i = 0; i < n; ++i) {
            cin >> g[i];
        }

        int reducedSize = n / k;
        vector<string> reducedGrid(reducedSize, string(reducedSize, '0'));

    
        for (int i = 0; i < n; i += k) {
        for (int j = 0; j < n; j += k) {
            char blockValue = g[i][j];
            int reducedI = i / k;
            int reducedJ = j / k;
            reducedGrid[reducedI][reducedJ] = blockValue;
        }
        }
        for (const string& row : reducedGrid) {
            cout << row << endl;
        }
    }

    return 0;
}
