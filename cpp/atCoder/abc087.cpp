// abc087:　C - Candies
// https://atcoder.jp/contests/abc087/tasks/arc090_a

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int map[3][n + 1]; // using from index 1 (not 0)
    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> map[i][j];
        }
    }

    bool move[n + 1];
    // true: down; false: right
    move[1] = true;
    for (int i = 2; i <= n + 1; i++)
    {
        move[i] = false;
    }

    int max_candies = 0;
    for (int i = 1; i <= n; i++)
    {
        int current_i = 1;
        int current_j = 1;
        int current_candies = 0;
        for (int j = 1; j <= n + 1; j++)
        {
            current_candies += map[current_i][current_j];
            if (move[j])
            {
                current_i++;
            }
            else
            {
                current_j++;
            }
        }
        max_candies = max(current_candies, max_candies);
        swap(move[i], move[i + 1]);
    }

    cout << max_candies;
    return 0;
}