#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while (cin >> s)
    {
        // 雖然題目說 input 都已排序好，但加了 sort 才 AC。
        sort(s.begin(), s.end());
        do
        {
            cout << s << "\n";
        } while (next_permutation(s.begin(), s.end()));
    }
    return 0;
}