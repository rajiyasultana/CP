#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int left = 0, right = n-1; //index number for picable cards.
    int s = 0, d = 0;
    bool serejaTurn = true;

    while(left <= right) //counting the pickable cards
    {
        if(arr[left] > arr[right])
        {
            if (serejaTurn)
            {
                s += arr[left];
            }
            else
            {
                d += arr[left];
            }
            left++;
        }
        else
        {
            if (serejaTurn)
            {
                s+= arr[right];
            }
            else{
                d += arr[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn;

    }

    cout << s << " " << d << endl;

    return 0;
}