// c007. 00272 - TeX Quotes
// https://zerojudge.tw/ShowProblem?problemid=c007

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    bool flip = false;
    while (getline(cin, s))
    {
        for (char c : s)
        {
            if (c == '"')
            {
                if (!flip)
                {
                    cout << "``";
                    flip = !flip;
                }
                else
                {
                    cout << "''";
                    flip = !flip;
                }
            }
            else
            {
                cout << c;
            }
        }
        cout << "\n";
    }

    return 0;
}