#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        int temp = i * k;
        sum += temp;
    }
    int borrow = sum - n;
    if (borrow < 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << borrow << endl;
    }

    return 0;
}