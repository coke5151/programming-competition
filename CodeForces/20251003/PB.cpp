#include <bits/stdc++.h>

using namespace std;

struct coord
{
    long long r;
    long long c;
    char ch;
};

bool in_bound(coord cord, long long mp_size)
{
    if (cord.r < 1 || cord.r > mp_size || cord.c < 1 || cord.c > mp_size)
        return false;
    return true;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n; // map size

        char mp[n + 1][n + 1];
        for (long long i = 1; i <= n; i++)
        {
            for (long long j = 1; j <= n; j++)
            {
                mp[i][j] = '*';
            }
        }
        long long rk, ck, rd, cd;
        cin >> rk >> ck >> rd >> cd;
        mp[rk][ck] = 'k';
        mp[rd][cd] = 'd';

        long long cnt = 0;
        long long k_cnt = 1;
        queue<coord> que;
        que.push({rk, ck, 'k'}); // first k
        que.push({rd, cd, 'd'}); // first d

        while (k_cnt > 0 && !que.empty())
        {
            coord now = que.front();
            que.pop();

            coord up, down, left, right, upleft, upright, downleft, downright;
            up.r = now.r - 1;
            up.c = now.c;
            up.ch = now.ch;

            down.r = now.r + 1;
            down.c = now.c;
            down.ch = now.ch;

            left.r = now.r;
            left.c = now.c - 1;
            left.ch = now.ch;

            right.r = now.r;
            right.c = now.c + 1;
            right.ch = now.ch;

            upleft.r = now.r - 1;
            upleft.c = now.c - 1;
            upleft.ch = now.ch;

            upright.r = now.r - 1;
            upright.c = now.c + 1;
            upright.ch = now.ch;

            downleft.r = now.r + 1;
            downleft.c = now.c - 1;
            downleft.ch = now.ch;

            downright.r = now.r + 1;
            downright.c = now.c + 1;
            downright.ch = now.ch;

            if (now.ch == 'k')
            {
                if (mp[now.r][now.c] == '*')
                {
                    mp[now.r][now.c] = 'k';
                    k_cnt++;
                }
                if (in_bound(up, n))
                    que.push(up);
            }
            else if (now.ch == 'd')
            {
            }
        }
    }
    return 0;
}