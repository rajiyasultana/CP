#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.rbegin(), arr.rend());
        int happy = 0;
        int rowsUsed = 0;

        for (int i = 0; i < n && rowsUsed < r; i++) {
            int rc = arr[i] / 2; //row complete
            int mL = arr[i] % 2; //member left

            int pairs_to_seat = min(rc, r - rowsUsed);
            happy += pairs_to_seat * 2;
            rowsUsed += pairs_to_seat;

            if (mL && rowsUsed < r) {
                happy++;
                rowsUsed++;
            }
        }

        cout << happy << endl;
    }
    return 0;
}
