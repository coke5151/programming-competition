// d069. 格瑞哥里的煩惱 (t 行版)
// https://zerojudge.tw/ShowProblem?problemid=d069

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, y;
    cin >> t;
    while (t--)
    {
        cin >> y;
        if (y % 4 != 0 || ((y % 400 != 0) && (y % 100 == 0)))
        {
            cout << "a normal year\n";
        }
        else
        {
            cout << "a leap year\n";
        }
    }
    return 0;
}