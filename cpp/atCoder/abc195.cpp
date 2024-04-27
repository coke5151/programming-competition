// abc195: B - Many Oranges
// https://atcoder.jp/contests/abc195/tasks/abc195_b

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;
    int max_num;
    int min_num;
    for (int i = a; i <= b; i++)
    {
        if (w % i == 0)
        {
            max_num = w / i;
            break;
        }
    }
    for (int i = b; i >= a; i--)
    {
        if (w % i == 0)
        {
            min_num = w / i;
            break;
        }
    }
    cout << min_num << " " << max_num;
    return 0;
}