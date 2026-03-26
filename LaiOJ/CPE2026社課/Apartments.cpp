// Apartments

#include <bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n, m, k;
    while (cin >> n >> m >> k)
    {
        vector<LL> applicants(n), apartments(m);
        for (LL i = 0; i < n; i++)
        {
            cin >> applicants[i];
        }
        for (LL j = 0; j < m; j++)
        {
            cin >> apartments[j];
        }

        sort(applicants.begin(), applicants.end());
        sort(apartments.begin(), apartments.end());

        LL ans = 0;
        // 人找公寓
        for (LL i = n - 1, j = m - 1; i >= 0 && j >= 0;)
        {
            // 可以
            if ((apartments[j] - k <= applicants[i]) && (applicants[i] <= apartments[j] + k))
            {
                ans++;
                i--;
                j--;
                continue;
            }

            // 人要求太大，但已經不可能滿足他了，換人
            if (applicants[i] > apartments[j] + k)
            {
                i--;
                continue;
            }

            // 公寓太大，沒人能住，換公寓
            if (applicants[i] < apartments[j] - k)
            {
                j--;
                continue;
            }
        }
        cout << ans;
    }
    return 0;
}