#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, bills, reminder;

    cin >> a;

    bills = a / 100;
    reminder = a % 100;

    bills += reminder / 20;
    reminder = reminder % 20;

    bills += reminder / 10;
    reminder = reminder % 10;

    bills += reminder / 5;
    reminder = reminder % 5;

    bills += reminder / 1;

    cout << bills << endl;

    return 0;
}