//This problem is solved using selection sort algoritm.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s; //Getting string input from user.
    for(int i = 0; i < s.size(); i+=2) //loop for travers the string 
    {
        int min = i; // initializing i th value to min
        for(int j=i+2; j<s.size(); j+=2) // loop for compering from next value.
        {
            if(s[min] > s[j])
            {
                min = j;
            }

        }
        if(min != i)
        {
            swap(s[i], s[min]); //swaping old value with new one. if the old value is greatter than new one.
        }

    }
    cout << s << endl;

    return 0;
}