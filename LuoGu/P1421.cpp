// P1421 小玉买文具
// https://www.luogu.com.cn/problem/P1421

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int total = 10 * a + b;
    cout << total / 19;

    return 0;
}