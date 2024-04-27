// aising2020: A - Number of Multiples
// https://atcoder.jp/contests/aising2020/tasks/aising2020_a

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, d;
    int total_multipliers = 0;
    cin >> l >> r >> d;
    for (int i = l; i <= r; i++)
    {
        if (i % d == 0)
            total_multipliers++;
    }
    cout << total_multipliers;
    return 0;
}