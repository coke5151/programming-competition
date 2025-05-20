// e155.10935 - Throwing cards away I
// https://zerojudge.tw/ShowProblem?problemid=e155

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            q.push(i + 1);
        }

        cout << "Discarded cards: ";
        bool first_print = true;
        while (q.size() >= 2)
        {
            if (!first_print)
                cout << ", " << q.front();
            else
            {
                cout << q.front();
                first_print = false;
            }
            q.pop(); // 丟掉這張牌

            // 把目前的排丟到最下面
            q.push(q.front());
            q.pop();
        }
        cout << "\nRemaining card: " << q.front() << "\n";
    }

    return 0;
}