// abc324: A - 3.14:
// https://atcoder.jp/contests/abc314/tasks/abc314_a

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    cin >> n;
    n += 2;
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }
    return 0;
}