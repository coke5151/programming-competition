// codefestival_2016_qualB_b: B - Qualification simulator
// https://atcoder.jp/contests/code-festival-2016-qualb/tasks/codefestival_2016_qualB_b

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    int passed = 0;
    int current_oversea_student = 0;
    for (char ch : s)
    {
        if (ch == 'c')
        {
            cout << "No\n";
        }
        else if (ch == 'a')
        {
            // japanese student
            if (passed < (a + b))
            {
                passed++;
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
        else if (ch == 'b')
        {
            // oversea student
            if (passed < (a + b) && current_oversea_student < b)
            {
                passed++;
                current_oversea_student++;
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}