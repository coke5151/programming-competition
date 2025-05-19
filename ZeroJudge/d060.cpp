// d060. 還要等多久啊？
// https://zerojudge.tw/ShowProblem?problemid=d060

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;
    cin >> m;
    cout << (25 - m + 60) % 60;
    return 0;
}