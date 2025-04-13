//CF-431A
#include<iostream>
#include<string>
using namespace std;
int main(){
    int f, s, th, fth, calories = 0;
    string n;
    cin >> f >> s >> th >> fth;
    cin >> n;

    for(int i = 0; i< n.size(); i++){
        if(n[i] == '1') calories += f;
        else if(n[i] == '2') calories += s;
        else if(n[i] == '3') calories += th;
        else if(n[i] == '4') calories += fth;
    }

    cout << calories << endl;

    return 0;
}