#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, b, c;
        int sum = 0;
        cin >> n >> k;
        map<int, int> brand;
        while (k--)
        {
            cin >> b >> c;
            brand[b] += c;
        }

        if (brand.size() <= n)
        {
            for (const auto &entry : brand)
            {
                sum += entry.second;
            }
            cout << sum << endl;
        }
        else
        {
            vector<int> cost;
            for (const auto &entry : brand)
            {
                cost.push_back(entry.second);
            }
            sort(cost.rbegin(), cost.rend());

            for (int i = 0; i < n; i++)
            {
                sum += cost[i];
            }

            cout << sum << endl;
        }
    }

    return 0;
}