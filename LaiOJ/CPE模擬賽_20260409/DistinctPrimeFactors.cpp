#include <bits/stdc++.h>
#define LL long long

using namespace std;

bool is_not_prime[10000000];

LL detected_to = 2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    is_not_prime[0] = true;
    is_not_prime[1] = true;
    LL n;
    while (cin >> n)
    {
        if (detected_to <= n)
        {
            for (LL i = detected_to; i <= n; i++)
            {
                LL j = i * 2;
                while (j <= n + 10)
                {
                    is_not_prime[j] = true;
                    j += i;
                }
            }
            detected_to = n;
        }
        // for (LL i = 0; i < n; i++)
        // {
        //     if (!is_not_prime[i])
        //         cout << i << " ";
        // }
        LL ans = 0;
        for (LL i = 0; i <= n; i++)
        {
            if (!is_not_prime[i] && (n % i) == 0)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}