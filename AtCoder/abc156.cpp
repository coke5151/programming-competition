// abc156: C - Rally
// https://atcoder.jp/contests/abc156/tasks/abc156_c

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // input
    int n;
    cin >> n;
    int x[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    // main logic
    int ans = 0;
    for (int j = 1; j <= n; j++)
    {
        ans += pow((x[j] - 1), 2);
    }
    int temp = 0;
    for (int i = 2; i <= 100; i++)
    {
        temp = 0;
        for (int j = 1; j <= n; j++)
        {
            temp += pow((x[j] - i), 2);
        }
        ans = min(temp, ans);
    }
    cout << ans;
    return 0;
}