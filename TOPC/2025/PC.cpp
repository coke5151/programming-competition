#include <bits/stdc++.h>

using namespace std;

struct tunnel
{
    int x;
    int y;
    int v;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        tunnel tl[m];

        set<int> start;

        for (int i = 0; i < m; i++)
        {
            int x, y, v;
            cin >> x >> y >> v;
            x--;
            y--;
            tl[i] = {x, y, v};

            start.insert(x);
            start.insert(y);
        }

        int ans = 0;
        for (const auto &e : start) // start
        {
            int now = 0;
            int depth = 0;
            int pos = e;
            while (depth < m)
            {
                if (tl[depth].x == pos)
                {
                    now += tl[depth].v;
                    pos = tl[depth].y;
                }
                else if (tl[depth].y == pos)
                {
                    now += tl[depth].v;
                    pos = tl[depth].x;
                }
                depth++;
            }
            ans = max(ans, now);
        }
        cout << ans << endl;
    }

    return 0;
}