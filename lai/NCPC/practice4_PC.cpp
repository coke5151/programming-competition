// 火車
#include <bits/stdc++.h>

using namespace std;

bool inBound(int end, int ele)
{
    return ele >= 0 && ele < end;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    int car[n];
    map<int, int> position;
    for (int i = 0; i < n; i++)
    {
        int code;
        cin >> code;
        car[i] = code;
        position[code] = i;
    }
    while (q--)
    {
        int operation;
        cin >> operation;
        if (operation == 1)
        {
            int a, b;
            cin >> a >> b;
            int temp;
            temp = car[position[b]];
            car[position[a]] = car[position[b]];
            car[position[b]] = temp;
            // swap(car[position[a]], car[position[b]]);
            temp = position[b];
            position[b] = position[a];
            position[a] = temp;
        }
        else // operation == 2
        {
            int a;
            cin >> a;
            int front = inBound(n, position[a] - 1) ? car[position[a] - 1] : -1;
            int back = inBound(n, position[a] + 1) ? car[position[a] + 1] : -1;
            cout << front << " " << back << "\n";
        }
    }
    return 0;
}