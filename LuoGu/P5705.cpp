// P5705 【深基2.例7】数字反转
// https://www.luogu.com.cn/problem/P5705

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}