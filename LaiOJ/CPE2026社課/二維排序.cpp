// 二維排序
#include <bits/stdc++.h>

#define LL long long

using namespace std;

struct student
{
    string name;
    LL score;
};

bool cmp(student a, student b)
{
    if (a.score == b.score)
    {
        return a.name < b.name;
    }
    else
    {
        return a.score < b.score;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n;
    while (cin >> n)
    {
        student all[n];
        for (LL i = 0; i < n; i++)
        {
            student p;
            cin >> p.score >> p.name;
            all[i] = p;
        }
        sort(all, all + n, cmp);
        for (student e : all)
        {
            cout << e.score << " " << e.name << "\n";
        }
    }
    return 0;
}