#include <bits/stdc++.h>
#define LL long long
using namespace std;

string mp[10000000];

int main()
{
    LL n;
    while (cin >> n)
    {
        vector<char> people(n);
        for (LL i = 0; i < n; i++)
            cin >> people[i];
        cin.ignore();
        LL length = 0;
        while (getline(cin, mp[length++]))
            ;

        // for (LL i = 0; i < n; i++)
        // {
        //     cout << mp[i] << "\n";
        // }
        for (LL i = 0; i < length - 1; i++)
        {
            for (LL j = 1; j < 2 * n - 1; j += 2)
            {
                if (mp[i][j] == '-')
                {
                    swap(people[(j + 1) / 2 - 1], people[(j + 1) / 2]);
                }
            }
        }
        for (char c : people)
        {
            cout << c << " ";
        }
    }
    return 0;
}