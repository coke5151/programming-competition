// P-1-3. 棍子中點切割
#include <bits/stdc++.h>

using namespace std;

long long p[50000];

long long cut(long long left, long long right)
{
    if (right - left <= 1)
        return 0;
    long long len = p[right] - p[left], k = (p[right] + p[left]) / 2;
    long long m = left;
    while (p[m] < k)
        m++;
    if (p[m - 1] - p[left] >= p[right] - p[m])
        m--;
    return len + cut(left, m) + cut(m, right);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, l;
    cin >> n >> l;
    p[0] = 0;
    p[n + 1] = l;
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i];
    }
    cout << cut(0, n + 1) << "\n";
    return 0;
}