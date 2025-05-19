// d067. 格瑞哥里的煩惱 (1 行版)
// https://zerojudge.tw/ShowProblem?problemid=d067

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y % 4 != 0 || ((y % 400 != 0) && (y % 100 == 0)))
    {
        cout << "a normal year";
    }
    else
    {
        cout << "a leap year";
    }
    return 0;
}