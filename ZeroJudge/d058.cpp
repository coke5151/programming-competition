// d058. BASIC 的 SGN 函數
// https://zerojudge.tw/ShowProblem?problemid=d058

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << ((n == 0) ? 0 : ((n > 0) ? 1 : -1));
    return 0;
}