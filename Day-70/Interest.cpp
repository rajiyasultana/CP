#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b;
    cin >> a >> b;

    if (a * 2 < b)
    {
        cout << 0 << endl;
    }

    else if (a >= b)
    {
        cout << a << endl;
    }
    else
    {
        for(int x = 1; ;x++){
            int decrease_diposit = b - 2*x;
            int decrease_coin = a - x;

            if(decrease_diposit == decrease_coin){
                cout << decrease_coin << endl;
                break;
            }
        }
    }
    }
    
    return 0;
}