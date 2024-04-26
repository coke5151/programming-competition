// B - Power Socket
// https://atcoder.jp/contests/abc139/tasks/abc139_b

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int total_plug = 0;
    int total_socket = 1;
    while (total_socket < b)
    {
        total_plug++;
        total_socket = total_socket + a - 1;
    }
    cout << total_plug;
}