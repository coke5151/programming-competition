#include <bits/stdc++.h>

using namespace std;

int try_once(int arr[], int size, int split_point)
{
    int left = arr[0];
    // cout << "left hand side: \n"
    //      << arr[0] << " ";
    for (int i = 1; i <= split_point; i++)
    {
        // cout << arr[i] << " ";
        left *= arr[i];
    }
    int right = arr[split_point + 1];
    // cout << "right hand side: \n"
    //      << arr[split_point + 1] << " ";
    for (int i = split_point + 2; i < size; i++)
    {
        // cout << arr[i] << " ";
        right *= arr[i];
    }
    return abs(right - left);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int ans = try_once(arr, n, 0);
    for (int i = 1; i < n - 1; i++)
    {
        ans = min(try_once(arr, n, i), ans);
    }

    int garden = 0;
    int flower = 0;
    int god = 0;
    if (n % 2 == 1)
    {
        for (int i = 0; i < n; i += 2)
        {
            garden += arr[i];
        }
        for (int i = 1; i < n; i += 2)
        {
            flower += arr[i];
        }
        // garden -= arr[n / 2];
        int kk = arr[n / 2];
        ans = min(abs((garden * kk) - flower), ans);
        ans = min(abs(garden - (flower * kk)), ans);
    }
    else
    {
    }
    cout << ans << "\n";

    return 0;
}