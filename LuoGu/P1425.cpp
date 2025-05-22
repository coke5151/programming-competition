// P1425 小鱼的游泳时间
// https://www.luogu.com.cn/problem/P1425

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int all_minutes = (c * 60 + d) - (a * 60 + b);
    cout << all_minutes / 60 << " " << all_minutes % 60;

    return 0;
}