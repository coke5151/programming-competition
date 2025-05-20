// e561. 00299 - Train Swapping
// https://zerojudge.tw/ShowProblem?problemid=e561

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--)
    {
        int l;
        cin >> l;
        int train[l];
        for (int i = 0; i < l; i++)
        {
            cin >> train[i];
        }
        int ans = 0;
        for (int i = l - 1; i >= 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                if (train[j] > train[j + 1])
                {
                    swap(train[j], train[j + 1]);
                    ans++;
                }
            }
        }
        cout << "Optimal train swapping takes " << ans << " swaps.\n";
    }
    return 0;
}