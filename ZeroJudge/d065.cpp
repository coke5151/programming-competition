// d065. 三人行必有我師 (1 行版)
// https://zerojudge.tw/ShowProblem?problemid=d065

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << max(max(a, b), c);
    return 0;
}