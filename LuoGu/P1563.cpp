// P1563 [NOIP 2016 提高组] 玩具谜题
// https://www.luogu.com.cn/problem/P1563

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    pair<string, int> people[n]; // {名稱, 方向}
    for (int i = 0; i < n; i++)
    {
        cin >> people[i].second >> people[i].first;
    }

    int current_idx = 0;
    for (int i = 0; i < m; i++)
    {
        int direction, num;
        cin >> direction >> num;
        // 向著圈內向右 → 逆時針 → idx++
        if (people[current_idx].second == 0 && direction == 1)
        {
            current_idx = (current_idx + num + n) % n;
        }
        // 向著圈外向左 → 逆時針 → idx++
        else if (people[current_idx].second == 1 && direction == 0)
        {
            current_idx = (current_idx + num + n) % n;
        }
        // 向著圈內向左 → 順時針 → idx--
        else if (people[current_idx].second == 0 && direction == 0)
        {
            current_idx = (current_idx - num + n) % n;
        }
        // 向著圈外向右 → 順時針 → idx--
        else if (people[current_idx].second == 1 && direction == 1)
        {
            current_idx = (current_idx - num + n) % n;
        }
    }
    cout << people[current_idx].first;

    return 0;
}