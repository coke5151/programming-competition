#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = 0;
    for (int i = 3; i < s.size(); i++)
    {
        if (s[i - 3] == 'k' && s[i - 2] == 'i' && s[i - 1] == 'c' && s[i] == 'k')
            count++;
    }
    cout << count;
    return 0;
}