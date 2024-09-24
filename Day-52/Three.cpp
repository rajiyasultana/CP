//CF-1560A
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<int> list; //creating the list of liked numbers.
        for(int i = 1; i <= 1666; i++){
            if(i % 3 != 0 && i % 10 != 3){
                list.push_back(i);
            }
        }

        int index;
        cin >> index;

        cout << list[index - 1] << endl; //printing the liked number from givern index.
    }

    return 0;
}