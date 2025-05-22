// P5706 【深基2.例8】再分肥宅水
// https://www.luogu.com.cn/problem/P5706

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    double t;
    cin >> t >> n;
    cout << fixed << setprecision(3) << t / n << "\n";
    cout << n * 2;

    return 0;
}