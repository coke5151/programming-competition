// SORT
#include <bits/stdc++.h>

using namespace std;

struct point
{
    long long a;
    long long b;
    long long c;
};

bool cmp(const point &p1, const point &p2)
{
    if ((p1.a * p1.b) != (p2.a * p2.b))
    {
        return (p1.a * p1.b) > (p2.a * p2.b) ? true : false;
    }
    else if ((p1.b + p1.c) != (p2.b + p2.c))
    {
        return (p1.b + p1.c) < (p2.b + p2.c) ? true : false;
    }
    else if (p1.a != p2.a)
    {
        return p1.a > p2.a ? true : false;
    }
    else if (p1.b != p2.b)
    {
        return p1.b > p2.b ? true : false;
    }
    else if (p1.c != p2.c)
    {
        return p1.c < p2.c ? true : false;
    }
    else
    {
        return true;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n;
    cin >> n;
    vector<point> all_points;
    long long size = n;
    while (n--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        all_points.push_back(point{a, b, c});
    }
    sort(all_points.begin(), all_points.end(), cmp);

    for (point e : all_points)
    {
        cout << e.a << " " << e.b << " " << e.c << endl;
    }
}