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
        vector<LL> v;
        while (n--)
        {
            LL k;
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(), v.end());
        for (LL e : v)
        {
            cout << e << " ";
        }
    }
    return 0;
}