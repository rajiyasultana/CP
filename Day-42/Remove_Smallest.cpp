#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        if (n > 1)
        {
            for (int i = 0; i < n - 1; i++)
            {
                int absulateValue = abs(arr[i] - arr[i + 1]);

                if (absulateValue > 1)
                {
                    count += 1;
                }
            }
            if (count > 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }

    return 0;
}