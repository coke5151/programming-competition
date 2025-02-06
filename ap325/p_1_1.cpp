// P-1-1. 合成函數(1)
#include <bits/stdc++.h>

using namespace std;

long long eval()
{
    long long val, x, y;
    string s;
    cin >> s;
    if (s[0] == 'f')
    {
        x = eval();
        return 2 * x - 1;
    }
    else if (s[0] == 'g')
    {
        x = eval();
        y = eval();
        return x + 2 * y - 3;
    }
    else
    {
        val = stoll(s);
        return val;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << eval() << "\n";
    return 0;
}