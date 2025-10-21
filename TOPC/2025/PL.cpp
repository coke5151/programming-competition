#include <bits/stdc++.h>

using namespace std;

struct Point
{
    int x;
    int y;
};

struct Segment
{
    Point a;
    Point b;
};

struct Square
{
    Point minPoint;
    Point maxPoint;
};

bool inSquare(Point a, Square sq)
{
    return (a.x > sq.minPoint.x) && (a.x < sq.maxPoint.x) && (a.y > sq.minPoint.y) && (a.y < sq.maxPoint.y);
}

bool intersection(Segment p, Segment boundary)
{
}

int main()
{
    int t;
    cin >> t;
    Square sq;
    Segment p;
    while (t--)
    {
        cin >> sq.minPoint.x >> sq.minPoint.y >> sq.maxPoint.x >> sq.maxPoint.y;
        cin >> p.a.x >> p.a.y >> p.b.x >> p.b.y;
    }
    Segment buttom = {{sq.minPoint.x, sq.minPoint.y}, {sq.maxPoint.x, sq.minPoint.y}};
    Segment left = {{sq.minPoint.x, sq.minPoint.y}, {sq.minPoint.x, sq.maxPoint.y}};
    Segment top = {{sq.minPoint.x, sq.maxPoint.y}, {sq.maxPoint.x, sq.maxPoint.y}};
    Segment right = {{sq.maxPoint.x, sq.minPoint.y}, {sq.maxPoint.x, sq.maxPoint.y}};

    if (inSquare(p.a, sq) || inSquare(p.b, sq))
    {
        cout << "OK\n";
    }
    else if (intersection(p, buttom) || intersection(p, left) || intersection(p, top) || intersection(p, right))
    {
        cout << "OK\n";
    }
    else
    {
        cout << "STOP\n";
    }

    return 0;
}