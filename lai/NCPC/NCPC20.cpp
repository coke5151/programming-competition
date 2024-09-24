// 排序好簡單
// TODO: 數字太大所以要改用字串排序
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<long long> v;
    for (long long i = 0; i < n; i++)
    {
        long long temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for (long long e : v)
    {
        cout << e << "\n";
    }
    return 0;
}