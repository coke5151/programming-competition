// a003. 兩光法師占卜術
// https://zerojudge.tw/ShowProblem?problemid=a003

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int month, day;
    cin >> month >> day;
    int s = (month * 2 + day) % 3;
    if (s == 2)
    {
        cout << "大吉";
    }
    else if (s == 1)
    {
        cout << "吉";
    }
    else
    {
        cout << "普通";
    }
    return 0;
}