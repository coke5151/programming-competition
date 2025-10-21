// P1042 [NOIP 2003 普及组] 乒乓球
// https://www.luogu.com.cn/problem/P1042

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    bool keep_while = true;

    vector<pair<int, int>> all_11_games;
    vector<pair<int, int>> all_21_games;
    pair<int, int> current_11_game = {0, 0};
    pair<int, int> current_21_game = {0, 0};

    while (keep_while && cin >> s)
    {
        for (char c : s)
        {
            if (c == 'W')
            {
                current_11_game.first++;
                current_21_game.first++;
            }
            else if (c == 'L')
            {
                current_11_game.second++;
                current_21_game.second++;
            }

            // if reach 11
            if (current_11_game.first >= 11 || current_11_game.second >= 11)
            {
                if (abs(current_11_game.first - current_11_game.second) >= 2)
                {
                    all_11_games.push_back(current_11_game);
                    current_11_game.first = 0;
                    current_11_game.second = 0;
                }
            }

            // if reach 21
            if (current_21_game.first >= 21 || current_21_game.second >= 21)
            {
                if (abs(current_21_game.first - current_21_game.second) >= 2)
                {
                    all_21_games.push_back(current_21_game);
                    current_21_game.first = 0;
                    current_21_game.second = 0;
                }
            }

            if (c == 'E')
            {
                all_11_games.push_back(current_11_game);
                all_21_games.push_back(current_21_game);
                keep_while = false;
                break;
            }
        }
    }
    for (pair<int, int> p : all_11_games)
    {
        cout << p.first << ":" << p.second << "\n";
    }
    cout << "\n";
    for (pair<int, int> p : all_21_games)
    {
        cout << p.first << ":" << p.second << "\n";
    }
    return 0;
}