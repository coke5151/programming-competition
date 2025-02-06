// Q-1-2. 合成函數(2) (APCS201902)
#include <bits/stdc++.h>

using namespace std;

long long eval()
{
    long long x, y, z, val;
    string s;
    cin >> s;
    if (s[0] == 'f')
    {
        x = eval();
        return 2 * x - 3;
    }
    else if (s[0] == 'g')
    {
        x = eval();
        y = eval();
        return 2 * x + y - 7;
    }
    else if (s[0] == 'h')
    {
        x = eval();
        y = eval();
        z = eval();
        return 3 * x - 2 * y + z;
    }
    else
    {
        return stoll(s);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << eval() << "\n";
    return 0;
}