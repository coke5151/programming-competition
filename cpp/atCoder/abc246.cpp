// abc246_a: A - Four Points
// https://atcoder.jp/contests/abc246/tasks/abc246_a

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[3];
    int y[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    sort(x, x + 3);
    sort(y, y + 3);
    int unique_x = (x[0] == x[1]) ? x[2] : x[0];
    int unique_y = (y[0] == y[1]) ? y[2] : y[0];
    cout << unique_x << " " << unique_y;
    return 0;
}
