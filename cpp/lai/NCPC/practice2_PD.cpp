// SORT
#include <bits/stdc++.h>

using namespace std;

bool inBound(int a, int bound)
{
    return (a >= 0) && (a < bound);
}

int longest(vector<int> map[], int r, int c, int i, int j)
{
    int ans_left = 1;
    int ans_right = 1;
    int ans_down = 1;
    int ans_up = 1;
    // left
    if (inBound(i - 1, r) && inBound(j, c) && map[i - 1][j] < map[i][j])
    {
        ans_left += longest(map, r, c, i - 1, j);
    }
    // right
    if (inBound(i + 1, r) && inBound(j, c) && map[i + 1][j] < map[i][j])
    {
        ans_right += longest(map, r, c, i + 1, j);
    }
    // down
    if (inBound(i, r) && inBound(j + 1, c) && map[i][j + 1] < map[i][j])
    {
        ans_down += longest(map, r, c, i, j + 1);
    }
    // up
    if (inBound(i, r) && inBound(j - 1, c) && map[i][j - 1] < map[i][j])
    {
        ans_up += longest(map, r, c, i, j - 1);
    }
    return max(max(ans_up, ans_down), max(ans_left, ans_right));
}

int main()
{
    int answer = 0;
    ios::sync_with_stdio(0);
    cin.tie(0);
    int r, c;
    cin >> r >> c;
    vector<int> map[r];
    vector<bool> visited[r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            int temp;
            cin >> temp;
            map[i].push_back(temp);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            visited[i].push_back(false);
        }
    }

    // start from global
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            // cout << map[i][j] << " ";
            answer = max(answer, longest(map, r, c, i, j));
            visited[i][j] = true;
        }
        // cout << endl;
    }
    cout << answer;
}