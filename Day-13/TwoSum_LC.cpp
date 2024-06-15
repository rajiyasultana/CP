#include <bits/stdc++.h>
using namespace std;
int main()
{
    string nums;
    int target;
    cin >> nums;
    cin >> target;
    for (int i = 0; i < nums.size(); i++)
    {
        for(int j= i+1; j<nums.size(); j++){
            if(nums[i] == nums[j]){
                cout << i << " " << j;
            }
        }
        
    }
    return 0;
}