// pytree 開店囉！！！！

#include <bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n;
    while (cin >> n)
    {
        LL arr[n];
        for (LL i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        cout << arr[n / 2] << "\n";
    }
    return 0;
}