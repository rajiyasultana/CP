//Here I need to count the swap of coloum and row for make the matrix beautiful.
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v, n;
    for(int i = 1; i <=5; i++) //This loop will input value into the matrix.
    {
        for(int j =1; j <=5; j++)
        {
            cin >> v;
            if(v == 1) // If value is one then we need to find the number of swap.
            {
                cout << abs(3-i) + abs(3-j) << endl;
            }
        }
    }
  
    return 0;
}