// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//     long long n;
//     cin >> n;
//     vector<vector<int>> ord;
//     ord.push_back(vector<int>());
//     ord.push_back(vector<int>());
//     for (long long i = 0; i < n; i++)
//     {
//         int x, y;
//         cin >> x >> y;
//         ord[0].push_back(x);
//         ord[1].push_back(y);
//     }
//     sort(ord[0].begin(), ord[0].end());
//     sort(ord[1].begin(), ord[1].end());
//     return 0;
// }
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    int y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    sort(x, x + n);
    sort(y, y + n);
    if (n % 2 == 0)
    {
        cout << x[n / 2 - 1] << " " << y[n / 2 - 1] << endl;
    }
    else
    {
        cout << x[n / 2] << " " << y[n / 2] << endl;
    }

    return 0;
}
