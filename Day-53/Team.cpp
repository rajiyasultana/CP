//CF-490A
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int st;
    cin >> st;
    
    int skill;
    vector<int> programming, math, PE;

    for(int i = 1; i<=st; i++){
        cin >> skill;

        if(skill == 1)
        { 

            programming.push_back(i);
        }
        else if(skill == 2) {
            math.push_back(i);
        }
        else if(skill == 3) {
            PE.push_back(i);
        }
    }

    int p = programming.size();
    int m = math.size();
    int pe = PE.size();
    int w = min(p, min(m, pe));

    cout << w << endl;
    
        for(int i = 0; i < w; i++){
        cout << programming[i] << " " << math[i] << " " << PE[i] << endl;
    
    }
    
    return 0;
}