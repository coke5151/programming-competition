#include <bits/stdc++.h>

#define LL long long
#define MODDER 1000000007

using namespace std;

LL gcd(LL a, LL b)
{
    while (a % b != 0)
    {
        LL tmp = a % b;
        a = b;
        b = tmp;
    }
    return b;
}

LL lcm(LL a, LL b, LL their_gcd)
{
    a /= their_gcd;
    b /= their_gcd;
    return a * b * their_gcd;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL a, b;
    while (cin >> a >> b)
    {
        LL tmp_gcd = gcd(a, b);
        cout << tmp_gcd << " " << lcm(a, b, tmp_gcd) << "\n";
    }

    return 0;
}