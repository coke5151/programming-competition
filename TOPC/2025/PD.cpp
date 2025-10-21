#include <bits/stdc++.h>

using namespace std;

bool isPali(string s, int *cnt)
{
    bool ret = true;
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        if (s[i] != s[size - i])
        {
            *cnt++;
            ret = false;
        }
    }
    return ret;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int mn = 0;
        string s;
        int cnt = 0;
        cin >> s;
        if (isPali(s, &cnt))
        {
            cout << "0\n";
        }
        else if (cnt == 1)
        {
            cout << "1\n";
        }
        else
        {
            cnt = 1;
            string s_erase = s;
            s_erase.erase(0);
        }
    }

    return 0;
}