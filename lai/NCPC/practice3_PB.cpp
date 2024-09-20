// 2的次方
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    set<unsigned int> power_set;
    unsigned long long for_insert = 1;
    while (for_insert <= 4294967295)
    {
        power_set.insert(for_insert);
        for_insert *= 2;
    }
    int n;
    while (cin >> n)
    {
        if (power_set.count(n) == 1)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
}