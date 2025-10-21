// P1601 A+B Problem（高精）
// https://www.luogu.com.cn/problem/P1601

#include <iostream> // 建議使用標準標頭檔
#include <string>
#include <algorithm> // reverse 會用到，但此解法不需要

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    int carry = 0;
    int idx_a = a.size() - 1;
    int idx_b = b.size() - 1;
    string ans = "";

    // 使用單一迴圈處理所有情況
    // 只要還有位數 (idx_a >= 0 或 idx_b >= 0)
    // 或者 還有進位 (carry != 0)
    // 迴圈就繼續
    while (idx_a >= 0 || idx_b >= 0 || carry)
    {
        int sum = carry; // 1. 先加上一次的進位

        if (idx_a >= 0) // 2. 如果 a 還有位數
        {
            sum += (a[idx_a] - '0'); // 加上 a 的當前位數
            idx_a--;                 // a 的索引往前
        }

        if (idx_b >= 0) // 3. 如果 b 還有位數
        {
            sum += (b[idx_b] - '0'); // 加上 b 的當前位數
            idx_b--;                 // b 的索引往前
        }

        // 4. 處理當前的和
        ans += char((sum % 10) + '0'); // 將個位數轉成 char 存入 ans
        carry = sum / 10;              // 計算新的進位
    }

    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];

    return 0; // 養成好習慣
}