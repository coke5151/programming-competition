#include <bits/stdc++.h>

using namespace std;

bool is_prime(long long n)
{
    if (n == 1)
    {
        return false;
    }
    for (long long i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if ((b - a) != 2)
        {
            cout << "N\n";
            continue;
        }
        if (is_prime(a) && is_prime(b))
        {
            cout << "Y\n";
        }
        else
            cout << "N\n";
    }
    return 0;
}