// c082. 00118 - Mutant Flatworld Expolrers
// https://zerojudge.tw/ShowProblem?problemid=c082

#include <bits/stdc++.h>

using namespace std;

char left(char origin_direction)
{
    if (origin_direction == 'N')
        return 'W';
    else if (origin_direction == 'E')
        return 'N';
    else if (origin_direction == 'W')
        return 'S';
    else
        return 'E';
}

char right(char origin_direction)
{
    if (origin_direction == 'N')
        return 'E';
    else if (origin_direction == 'E')
        return 'S';
    else if (origin_direction == 'W')
        return 'N';
    else
        return 'W';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int bound_x, bound_y;
    cin >> bound_x >> bound_y;
    int x, y;
    char direction;

    set<pair<int, int>> danger;

    while (cin >> x >> y >> direction)
    {
        string commands;
        cin >> commands;
        bool die = false;

        for (char command : commands)
        {
            if (command == 'L')
                direction = left(direction);
            else if (command == 'R')
                direction = right(direction);
            else if (command == 'F')
            {
                if (direction == 'N')
                {
                    if ((y + 1) > bound_y)
                    {
                        if (danger.find(pair<int, int>(x, y)) != danger.end())
                            continue; // 有別人掉過，乎略
                        die = true;
                        danger.insert(pair<int, int>(x, y));
                        break;
                    }
                    y++;
                }
                else if (direction == 'E')
                {
                    if ((x + 1) > bound_x)
                    {
                        if (danger.find(pair<int, int>(x, y)) != danger.end())
                            continue; // 有別人掉過，乎略
                        die = true;
                        danger.insert(pair<int, int>(x, y));
                        break;
                    }
                    x++;
                }
                else if (direction == 'W')
                {
                    if ((x - 1) < 0)
                    {
                        if (danger.find(pair<int, int>(x, y)) != danger.end())
                            continue; // 有別人掉過，乎略
                        die = true;
                        danger.insert(pair<int, int>(x, y));
                        break;
                    }
                    x--;
                }
                if (direction == 'S')
                {
                    if ((y - 1) < 0)
                    {
                        if (danger.find(pair<int, int>(x, y)) != danger.end())
                            continue; // 有別人掉過，乎略
                        die = true;
                        danger.insert(pair<int, int>(x, y));
                        break;
                    }
                    y--;
                }
            }
        }
        cout << x << " " << y << " " << direction;
        if (die)
            cout << " LOST";
        cout << "\n";
    }

    return 0;
}