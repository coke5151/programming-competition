#include <bits/stdc++.h>

#define LL long long
#define MODDER 1000000007

using namespace std;

LL dp[1000010];
bool visited[1000010];

LL fabb(LL n)
{
    if (n == 1 || n == 2)
        return 1;
    if (visited[n])
        return dp[n];
    else
    {
        visited[n] = true;
        dp[n] = ((fabb(n - 1) % MODDER) + (fabb(n - 2) % MODDER)) % MODDER;
        return dp[n];
    }
}

int main()
{
    LL n;
    while (cin >> n)
    {
        cout << fabb(n) << "\n";
    }
    return 0;
}
