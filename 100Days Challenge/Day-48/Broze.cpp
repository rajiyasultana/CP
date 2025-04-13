#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string b, result = "";
    cin >> b;

    for (int i = 0; i<b.length(); i++){
        if(b[i] == '.'){
            result += "0";
        }
        else if(b[i] == '-'){
            if(i + 1 < b.length() && b[i+1]=='.'){
                result += "1";
                i++;
            }
            else if(i + 1 < b.length() && b[i+1] == '-'){
                result += "2";
                i++;
            }
        }
    }

    cout << result << endl;
    return 0;
}
