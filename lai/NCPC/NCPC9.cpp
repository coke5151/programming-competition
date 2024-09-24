// 星球檢測
// not passed
#include <bits/stdc++.h>

using namespace std;

bool inBound(int n, int m, int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m;
}

int check(vector<int> map[], int n, int m, int i, int j, int target)
{
    if (!inBound(n, m, i, j) || map[i][j] == 0 || target == 0 || map[i][j] != target)
        return 0;

    int ret = 1;
    map[i][j] = 0;

    ret += check(map, n, m, i - 1, j, target); // left
    ret += check(map, n, m, i + 1, j, target); // right
    ret += check(map, n, m, i, j - 1, target); // up
    ret += check(map, n, m, i, j + 1, target); // down
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<int> map[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin >> temp;
            map[i].push_back(temp);
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout << map[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (check(map, n, m, i, j, map[i][j]) > 0)
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}