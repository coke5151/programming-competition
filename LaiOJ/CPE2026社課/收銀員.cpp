// 收銀員

#include <bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n;
    cin >> n;
    cout << n / 50 + (n % 50) / 10 + (n % 10) / 5 + (n % 5);
    return 0;
}