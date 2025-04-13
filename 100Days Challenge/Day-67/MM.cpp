// CF - 2021A
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int r = arr[0];

        for (int i = 1; i < n; i++)
        {
            r = (r + arr[i]) / 2;
        }

        cout << r << endl;
    }

    return 0;
}