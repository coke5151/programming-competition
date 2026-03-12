#include <bits/stdc++.h>

#define LL long long
#define ULL unsigned long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ULL n, tmp, ans = 0;
    cin >> n;

    while (n--)
    {
        cin >> tmp;
        ans += tmp;
    }

    cout << ans;
    return 0;
}