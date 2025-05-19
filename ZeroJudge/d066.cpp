// d066. 上學去吧！
// https://zerojudge.tw/ShowProblem?problemid=d066

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hh, mm;
    cin >> hh >> mm;
    int start = 7 * 60 + 30;
    int end = 17 * 60;
    int now = hh * 60 + mm;
    if (start <= now && now < end)
    {
        cout << "At School";
    }
    else
    {
        cout << "Off School";
    }
    return 0;
}