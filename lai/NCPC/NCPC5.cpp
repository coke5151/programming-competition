// yo battle!!!!!!!
#include <bits/stdc++.h>

using namespace std;

bool inBound(int bound, int i, int j)
{
    return i >= 0 && i < bound && j >= 0 && j < bound;
}

int check(vector<char> map[], int size, int check_i, int check_j)
{
    if (!inBound(size, check_i, check_j) || map[check_i][check_j] == '.')
        return 0;

    int validXNum = 0;
    if (map[check_i][check_j] == 'x')
    {
        map[check_i][check_j] = '.';
        validXNum++;
    }
    validXNum += check(map, size, check_i - 1, check_j); // left
    validXNum += check(map, size, check_i + 1, check_j); // right
    validXNum += check(map, size, check_i, check_j + 1); // down
    validXNum += check(map, size, check_i, check_j - 1); // up
    return validXNum;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<char> map[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char c;
            cin >> c;
            map[i].push_back(c);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (check(map, n, i, j) > 0)
                ans++;
        }
    }
    cout << ans;
    return 0;
}