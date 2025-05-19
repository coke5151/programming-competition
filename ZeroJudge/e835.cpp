// e835. p2.表演座位 (Seats)
// https://zerojudge.tw/ShowProblem?problemid=e835

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 7500) // 第三區
    {
        cout << "3 ";
        n -= 7500;
        cout << ((n - 1) / 25) + 1 << " " << (n % 25 == 0 ? 25 : n % 25);
    }
    else if (n >= 2500) // 第二區
    {
        cout << "2 ";
        n -= 2500;
        cout << ((n - 1) / 50) + 1 << " " << (n % 50 == 0 ? 50 : n % 50);
    }
    else // 第一區
    {
        cout << "1 ";
        cout << ((n - 1) / 25) + 1 << " " << (n % 25 == 0 ? 25 : n % 25);
    }
    return 0;
}