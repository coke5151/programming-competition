#include <bits/stdc++.h>

#define LL long long

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
        LL G = gcd(a, b);
        LL L = lcm(a, b, G);

        double k = ((double)G / (double)L);
        if (k % 1 != 0)
        {
        }
    }
    return 0;
}