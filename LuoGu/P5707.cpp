// P5707 【深基2.例12】上学迟到
// https://www.luogu.com.cn/problem/P5707

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, v;
    cin >> s >> v;
    int cost = 10 + (s / v) + int(s % v != 0);
    int ans_minutes = ((8 * 60) - cost + 1440) % 1440;
    cout << setw(2) << setfill('0') << (ans_minutes / 60) << ':' << setw(2) << setfill('0') << (ans_minutes % 60);

    return 0;
}