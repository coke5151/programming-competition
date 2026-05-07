#include <bits/stdc++.h>
#define LL long long

#define MODDER 1000000007

using namespace std;

string grid[1010];
bool visited[1010][1010];
LL paths[1010][1010];
LL n;

LL get_paths(LL x, LL y)
{
    if (x == n - 1 && y == n - 1) // end
        return 1;
    if (x == n || y == n) // out of bound
        return 0;

    if (visited[x][y])
        return paths[x][y];
    else
    {
        visited[x][y] = true;
        paths[x][y] = ((get_paths(x + 1, y) % MODDER) + (get_paths(x, y + 1) % MODDER)) % MODDER;
        return paths[x][y];
    }
}

int main()
{
    cin >> n;

    // INPUT
    for (LL i = 0; i < n; i++)
    {
        cin >> grid[i];
        for (LL j = 0; j < n; j++)
        {
            if (grid[i][j] == '*')
            {
                visited[i][j] = true;
                paths[i][j] = 0;
            }
        }
    }

    // OUTPUT
    cout << get_paths(0, 0);

    return 0;
}
