#include<iostream>
using namespace std;
int main(){
    int round, M_count = 0, C_count = 0;
    cin >> round;
    for(int i= 0; i< round; i++){
        int m, c;
        cin >> m >> c;
        if(m > c) M_count++;
        else if (c > m) C_count++;
        else continue;
    }

    if(M_count > C_count) cout << "Mishka" << endl;
    else if (M_count < C_count) cout << "Chris" << endl;
    else if(M_count == C_count) cout << "Friendship is magic!^^" << endl;
    return 0;
}