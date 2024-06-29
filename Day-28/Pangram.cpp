#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfCharecters, countLetters = 0;
    string letters;
    cin >> numberOfCharecters;
    cin >> letters;
    for (int i = 0; i < numberOfCharecters; i++)
    {
        letters[i] = tolower(letters[i]);
    }

    sort(letters.begin(), letters.end());

    for (int i = 0; i < numberOfCharecters; i++)
    {
        if (letters[i] != letters[i + 1])
        {
            countLetters++;
        }
    }
    if (countLetters == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}