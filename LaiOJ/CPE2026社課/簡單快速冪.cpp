#include <bits/stdc++.h>

#define LL long long
#define MODDER 1000000007
using namespace std;

LL ksm(LL a, LL b)
{
    if (b == 0)
        return 1;

    LL half = ksm(a, b / 2);
    if (b % 2 == 0)
    {
        return ((half % MODDER) * (half % MODDER)) % MODDER;
    }
    else
    {
        return (a * (((half % MODDER) * (half % MODDER)) % MODDER)) % MODDER;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL a, b;
    while (cin >> a >> b)
    {
        cout << ksm(a, b) << "\n";
    }

    return 0;
}