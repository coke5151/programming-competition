// nikkei2019_qual_a: A - Subscribers
// https://atcoder.jp/contests/nikkei2019-qual/tasks/nikkei2019_qual_a

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int at_least = (a + b) > n ? (a + b - n) : 0;
    cout << min(a, b) << " " << at_least;
    return 0;
}