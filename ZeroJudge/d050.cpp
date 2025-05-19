// d050. 妳那裡現在幾點了？
// https://zerojudge.tw/ShowProblem?problemid=d050

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h;
    cin >> h;
    cout << (h + 24 - 15) % 24 << "\n";
    return 0;
}