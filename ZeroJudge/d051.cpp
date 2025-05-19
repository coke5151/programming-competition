// d051. 糟糕，我發燒了！
// https://zerojudge.tw/ShowProblem?problemid=d051

#include <bits/stdc++.h>

using namespace std;

int main()
{
    double f;
    cin >> f;
    double c = (f - 32) * 5 / 9;
    cout << fixed << setprecision(3) << c;
    return 0;
}