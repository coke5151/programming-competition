// sumitb2019_b: B - Tax Rate
// https://atcoder.jp/contests/sumitrust2019/tasks/sumitb2019_b

#include <bits/stdc++.h>

using namespace std;

// I AM NOT DONE

int main()
{
    const double TAX_RATE = 1.08;
    int n;
    cin >> n;
    int near = (int)((double)n / TAX_RATE - 1);
    while (true)
    {
        if ((int)((double)near * TAX_RATE) == n)
        {
            cout << (int)((double)near * TAX_RATE);
            break;
        }
        if ((int)((double)near * TAX_RATE) > n)
        {
            cout << ":(";
            break;
        }
        near++;
    }
    return 0;
}