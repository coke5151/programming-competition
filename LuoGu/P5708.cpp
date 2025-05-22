// P5708 【深基2.习2】三角形面积
// https://www.luogu.com.cn/problem/P5708

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b >> c;

    double p = 0.5 * (a + b + c);
    cout << fixed << setprecision(1) << sqrt(p * (p - a) * (p - b) * (p - c));

    return 0;
}