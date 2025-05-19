// d827. 買鉛筆
// https://zerojudge.tw/ShowProblem?problemid=d827

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << 50 * (n / 12) + 5 * (n % 12);
    return 0;
}