#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, faces = 0;
    string s;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> s;
        if(s == "Tetrahedron"){
            faces += 4;
        }
        if(s == "Cube"){
            faces += 6;
        }
        if(s == "Octahedron"){
            faces += 8;
        }
        if(s == "Dodecahedron"){
            faces += 12;
        }
        if(s == "Icosahedron"){
            faces += 20;
        }
    }
    cout << faces << endl;
    return 0;
}