// d072. 格瑞哥里的煩惱 (Case 版)
// https://zerojudge.tw/ShowProblem?problemid=d072

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, y;
    cin >> t;
    int i = 1;
    while (t--)
    {
        cin >> y;
        cout << "Case " << i++ << ": ";
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