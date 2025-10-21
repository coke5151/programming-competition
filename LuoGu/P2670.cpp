// P2670 [NOIP 2015 普及组] 扫雷游戏
// https://www.luogu.com.cn/problem/P2670

#include <bits/stdc++.h>

using namespace std;

bool in_bound(int i, int j, int m, int n)
{
    return (0 <= i && i < m && 0 <= j && j < n);
}

char count_bomb(string mp[], int i, int j, int m, int n)
{
    int ans = 0;
    int up_i = i - 1;
    int down_i = i + 1;
    int left_j = j - 1;
    int right_j = j + 1;
    // up_left
    if (in_bound(up_i, left_j, m, n))
        if (mp[up_i][left_j] == '*')
            ans++;
    // up
    if (in_bound(up_i, j, m, n))
        if (mp[up_i][j] == '*')
            ans++;
    // up_right
    if (in_bound(up_i, right_j, m, n))
        if (mp[up_i][right_j] == '*')
            ans++;
    // left
    if (in_bound(i, left_j, m, n))
        if (mp[i][left_j] == '*')
            ans++;
    // right
    if (in_bound(i, right_j, m, n))
        if (mp[i][right_j] == '*')
            ans++;
    // down_left
    if (in_bound(down_i, left_j, m, n))
        if (mp[down_i][left_j] == '*')
            ans++;
    // down
    if (in_bound(down_i, j, m, n))
        if (mp[down_i][j] == '*')
            ans++;
    // down_right
    if (in_bound(down_i, right_j, m, n))
        if (mp[down_i][right_j] == '*')
            ans++;
    return (char(ans) + '0');
}

int main()
{
    int m, n;
    cin >> m >> n;
    string mp[m];
    for (int i = 0; i < m; i++)
    {
        string row;
        cin >> row;
        mp[i] = row;
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mp[i][j] == '*') // bomb
                continue;
            mp[i][j] = count_bomb(mp, i, j, m, n);
        }
    }
    for (string row : mp)
    {
        cout << row << "\n";
    }
    return 0;
}