#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, sum1 = 0, sum2 = 0;
    cin >> n >> h;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= h)
        {
            sum1++;
        }
        else if (arr[i] >= h)
        {
            sum2 += 2;
        }
    }
    cout << sum1 + sum2 << endl;

    return 0;
}