#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long arr[n + 5] = {0};
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ml, mr, mx = 0, l, r, tmp = 0;
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            // cout << tmp << ' ';
            if (tmp == 0)
            {
                l = i;
            }
            tmp += arr[i];
            if (tmp > mx)
            {
                // cout << arr[i] << ' ';
                mx = tmp;
                mr = i;
                ml = l;
            }
        }
        else
        {
            if (tmp + arr[i] * 3 > 0)
            {
                tmp += arr[i];
            }
            else
            {
                tmp = 0;
            }
        }
    }
    int ans = mx * 2;
    // cout << mx << ' ';
    for (int i = 0; i < n; i++)
    {
        if (i >= ml && i <= mr)
        {
            continue;
        }
        ans += abs(arr[i]);
    }
    cout << ans;
}