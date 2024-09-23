// 54088
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    long long relation[1000005] = {0};
    for (long long i = 0; i < n; i++)
    {
        long long father, son;
        cin >> father >> son;
        if (relation[father] == 0)
            relation[son] = father;
        else
        {
            long long find = father;
            while (relation[find] != 0)
            {
                find = relation[find];
            }
            relation[son] = find;
        }
    }
    long long m;
    cin >> m;
    while (m--)
    {
        long long k;
        cin >> k;
        if (relation[k] == 0)
            cout << k << "\n";
        else
            cout << relation[k] << "\n";
    }

    return 0;
}