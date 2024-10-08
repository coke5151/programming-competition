// SORT
#include <bits/stdc++.h>

#define int long long

using namespace std;

struct group
{
    int first;
    int second;
    int third;
};

bool cmp(group g1, group g2)
{
    if (g1.first * g1.second > g2.first * g2.second)
        return true;
    else if (g1.first * g1.second < g2.first * g2.second)
        return false;
    else
    {
        if (g1.second + g1.third < g2.second + g2.third)
            return true;
        else if (g1.second + g1.third > g2.second + g2.third)
            return false;
        else
        {
            if (g1.first > g2.first)
                return true;
            else if (g1.first < g2.first)
                return false;
            else
            {
                if (g1.second > g2.second)
                    return true;
                else if (g1.second < g2.second)
                    return false;
                else
                    return g1.third < g2.third;
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<group> gps;
    for (int i = 0; i < n; i++)
    {
        group gp;
        cin >> gp.first >> gp.second >> gp.third;
        gps.push_back(gp);
    }
    sort(gps.begin(), gps.end(), cmp);
    for (group gp : gps)
    {
        cout << gp.first << " " << gp.second << " " << gp.third << "\n";
    }
    return 0;
}