// abc262_c - C - Min Max Pair
// https://atcoder.jp/contests/abc262/tasks/abc262_c

#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((min(arr[i], arr[j]) == i) && (max(arr[i], arr[j]) == j))
            {
                // cout << "i = " << i << ", j = " << j << "\n";
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}