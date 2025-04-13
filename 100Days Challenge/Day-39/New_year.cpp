#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, count = 0;

    cin >> n >> k;
    int arr[n + 1];
    arr[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i * 5;
    }
    int check = k;

    for (int i = 1; i <= n; i++)
    {
        if (check <= 240)
        {
            check += arr[i];
            if (check > 240)
            {
                break;
            }
            count++;
        }
    }
    cout << count << endl;
    return 0;
}