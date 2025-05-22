// B2029 大象喝水
// https://www.luogu.com.cn/problem/B2029

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h, r;
    cin >> h >> r;
    double water = r * r * 3.14 * h;
    cout << ceil(20000 / water);

    return 0;
}