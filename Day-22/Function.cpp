#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << (n / 2 - n) << endl;
    }
    /* Time limit exceed
    for (int i = 1; i <= n; i++)
    {
        int function = pow(-1, i) * i;
        sum += function;
    }
    cout << sum;*/

    /*Time limit exceed
    for (int i = 1; i <= n; i++)
    {
        if(i%2 != 0){
            sum = sum - i;
        }
        else{
            sum = sum + i;
        }
    }
    cout << sum << endl;*/

    return 0;
}