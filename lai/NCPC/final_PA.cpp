#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    string s;
    long long p = 0;
    vector<long long> v;
    int tmp;
    for (long long i = 0; i < n; i++)
    {
        cin >> s;
        cin >> tmp;
        if (s == "pig")
        {
            if (tmp > p)
            {
                p = tmp;
            }
        }
        else
        {
            v.push_back(tmp);
        }
    }
    long long ans = p;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < p)
        {
            ans += v[i];
        }
    }
    cout << ans;
    return 0;
}