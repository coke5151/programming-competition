// P3954 [NOIP 2017 普及组] 成绩
// https://www.luogu.com.cn/problem/P3954

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    cout << (a / 5) + (b / 10) * 3 + c / 2;

    return 0;
}