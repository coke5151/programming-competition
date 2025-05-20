// a058. MOD3
// https://zerojudge.tw/ShowProblem?problemid=a058

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int i;
    cin >> n;

    int sum_3k = 0, sum_3k_1 = 0, sum_3k_2 = 0;
    while (n--)
    {
        cin >> i;
        if (i % 3 == 0)
            sum_3k++;
        else if ((i - 1) % 3 == 0)
            sum_3k_1++;
        else if ((i - 2) % 3 == 0)
            sum_3k_2++;
    }
    cout << sum_3k << " " << sum_3k_1 << " " << sum_3k_2;
    return 0;
}