#include<iostream>
using namespace std;
int main()
{
    int n, k, next = 0;
    cin >> n >> k;

    int num[100];
    for(int i = 0; i< n; i++)
    {
        cin >> num[i];
    }

    for(int i = 0; i<n; i++)
    {
        if(num[i] >= num[k-1] && num[i]>0)
        {
            next++;
        }
        
    }
    cout << next << endl;
        
    return 0;
}