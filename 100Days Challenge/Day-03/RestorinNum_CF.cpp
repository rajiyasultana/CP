#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4]; //Initialize an arrray for store input.
    for(int i =0; i<4;i++){
        cin >> arr[i]; //Taking input in arr.
    }
    sort(arr,arr+4); //Sorting the array using sort Function directly.
    int c = arr[3] - arr[0];
    int b = arr[3] - arr[1];
    int a = arr[3] - arr[2];

    cout << a << "\n" << b << "\n" << c << endl; //Printing the output.
    return 0;
}