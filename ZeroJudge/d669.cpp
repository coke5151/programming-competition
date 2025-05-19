// d669. 11677 - Alarm Clock
// https://zerojudge.tw/ShowProblem?problemid=d669

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2)
    {
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            return 0;
        cout << (((h2 * 60 + m2) - (h1 * 60 + m1)) + 1440) % 1440 << "\n";
    }
    return 0;
}