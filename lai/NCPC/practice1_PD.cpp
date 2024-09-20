// 商
#include <bits/stdc++.h>

using namespace std;

bool isValid(int a)
{
    int nums[10] = {0};
    nums[a % 10]++;
    nums[a % 100 / 10]++;
    nums[a % 1000 / 100]++;
    nums[a % 10000 / 1000]++;
    nums[a % 100000 / 10000]++;
    for (int e : nums)
    {
        if (e > 1)
            return false;
    }
    return true;
}

bool isPairValid(pair<int, int> p)
{
    int nums[10] = {0};
    nums[p.first % 10]++;
    nums[p.first % 100 / 10]++;
    nums[p.first % 1000 / 100]++;
    nums[p.first % 10000 / 1000]++;
    nums[p.first % 100000 / 10000]++;
    nums[p.second % 10]++;
    nums[p.second % 100 / 10]++;
    nums[p.second % 1000 / 100]++;
    nums[p.second % 10000 / 1000]++;
    nums[p.second % 100000 / 10000]++;
    for (int e : nums)
    {
        if (e > 1)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        vector<pair<int, int>> valid_pairs;
        if (n == 0)
            return 0;
        for (int i = 0; i < 99999; i++)
        {
            int temp = i * n;
            if (temp > 99999)
                break;
            if (isPairValid(pair<int, int>{temp, i}))
            {
                valid_pairs.push_back(pair<int, int>{temp, i});
            }
        }
        sort(valid_pairs.begin(), valid_pairs.end());
        if (valid_pairs.size() == 0)
        {
            cout << "There are no solutions for " << n << ".\n";
        }
        else
        {
            for (pair<int, int> p : valid_pairs)
            {
                cout << setw(5) << setfill('0') << p.first << " / " << setw(5) << setfill('0') << p.second << " = " << n << "\n";
            }
        }
        cout << "\n";
    }
    return 0;
}