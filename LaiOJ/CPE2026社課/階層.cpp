#include <bits/stdc++.h>
#define LL long long

using namespace std;

LL frac(LL n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * frac(n - 1);
}

int main()
{
    LL n;
    while (cin >> n)
    {
        cout << frac(n) << "\n";
    }
    return 0;
}
