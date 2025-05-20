// c039. 00100 - The 3n + 1 problem
// https://zerojudge.tw/ShowProblem?problemid=c039

#include <bits/stdc++.h>

using namespace std;

int cycle_length(int n)
{
    int len = 1;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n /= 2;
        }
        len++;
    }
    return len;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i, j;
    while (cin >> i >> j)
    {
        int ans = 0;
        if (i > j)
        {
            for (int k = j; k <= i; k++)
            {
                ans = max(ans, cycle_length(k));
            }
        }
        else
        {
            for (int k = i; k <= j; k++)
            {
                ans = max(ans, cycle_length(k));
            }
        }
        cout << i << " " << j << " " << ans << "\n";
    }

    return 0;
}