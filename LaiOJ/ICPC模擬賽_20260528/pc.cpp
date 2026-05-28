#include <bits/stdc++.h>

#define LL long long
#define MODER 1000000007
using namespace std;

string mp[1010];
LL steps[1010][1010];
LL n, m;
LL total = 0;

int main()
{
    while (cin >> n >> m)
    {
        total = 0;
        for (LL i = 0; i < n; i++)
        {
            cin >> mp[i];
        }

        if (mp[0][0] == '*')
        {
            cout << 0;
            continue;
        }

        steps[0][0] = 1;

        for (LL i = 0; i < n; i++)
        {
            for (LL j = 0; j < m; j++)
            {
                if ((i == 0 && j == 0))
                    continue;

                LL up;
                LL left;
                // up
                if ((i - 1) >= 0)
                {
                    if (mp[i][j] == '*')
                    {
                        up = 0;
                    }
                    else
                    {
                        up = steps[i - 1][j] % MODER;
                    }
                }
                else
                {
                    up = 0;
                }
                // left
                if ((j - 1) >= 0)
                {
                    if (mp[i][j] == '*')
                    {
                        left = 0;
                    }
                    else
                    {
                        left = steps[i][j - 1] % MODER;
                    }
                }
                else
                {
                    left = 0;
                }

                steps[i][j] = (left + up) % MODER;
            }
        }
        // for (LL i = 0; i < n; i++)
        // {
        //     for (LL j = 0; j < m; j++)
        //     {
        //         cout << steps[i][j];
        //     }
        //     cout << "\n";
        // }
        cout << steps[n - 1][m - 1] << "\n";
    }
    return 0;
}