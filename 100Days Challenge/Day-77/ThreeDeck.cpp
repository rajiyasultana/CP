#include<iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--){
        long long a, b, c;
        cin >> a >> b >> c;
        long long sum = a+b+c;
        long long Avg = sum / 3;

        if(sum%3 != 0){
            cout << "NO" << endl;
            continue;
        }

        //i cannot make all decks equal if any of deck is gretter than the average.SO...
        if(Avg >= a && Avg >= b && Avg <= c) 
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

}