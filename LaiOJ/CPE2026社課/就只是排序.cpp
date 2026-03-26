// 就只是排序
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
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (auto e : arr)
        {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}