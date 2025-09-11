#include <iostream>

// 為方便起見，使用 ull 作為 unsigned long long 的別名
using ull = unsigned long long;

// 定義 2x2 矩陣的結構
struct Matrix
{
    ull m[2][2];
};

// 模乘法函數，使用 unsigned __int128 防止溢位
// 將 a 和 b 轉換為 128 位元整數後相乘，再取模
ull safe_mul(ull a, ull b, ull mod)
{
    return (static_cast<unsigned __int128>(a) * b) % mod;
}

// 矩陣乘法函數 (A * B) % mod
Matrix multiply(Matrix A, Matrix B, ull mod)
{
    Matrix C;
    C.m[0][0] = (safe_mul(A.m[0][0], B.m[0][0], mod) + safe_mul(A.m[0][1], B.m[1][0], mod)) % mod;
    C.m[0][1] = (safe_mul(A.m[0][0], B.m[0][1], mod) + safe_mul(A.m[0][1], B.m[1][1], mod)) % mod;
    C.m[1][0] = (safe_mul(A.m[1][0], B.m[0][0], mod) + safe_mul(A.m[1][1], B.m[1][0], mod)) % mod;
    C.m[1][1] = (safe_mul(A.m[1][0], B.m[0][1], mod) + safe_mul(A.m[1][1], B.m[1][1], mod)) % mod;
    return C;
}

// 矩陣快速冪函數 (A^p) % mod
Matrix power(Matrix A, ull p, ull mod)
{
    Matrix res;
    // 初始化 res 為單位矩陣
    res.m[0][0] = 1;
    res.m[1][1] = 1;
    res.m[0][1] = 0;
    res.m[1][0] = 0;

    // 二分冪演算法
    while (p > 0)
    {
        if (p & 1)
        { // 如果 p 是奇數
            res = multiply(res, A, mod);
        }
        A = multiply(A, A, mod);
        p >>= 1; // p = p / 2
    }
    return res;
}

int main()
{
    // 加速 C++ I/O
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    ull alpha, beta, m;
    std::cin >> alpha >> beta >> m;

    // 特殊情況：如果模數為 1，結果永遠是 0
    if (m == 1)
    {
        std::cout << 0 << std::endl;
        return 0;
    }

    // 處理 beta 的基本情況
    // 雖然題目說 beta 是正整數，但處理 beta=0 是個好習慣
    if (beta == 0)
    {
        std::cout << 2 % m << std::endl;
        return 0;
    }
    if (beta == 1)
    {
        std::cout << alpha % m << std::endl;
        return 0;
    }

    // 建立轉換矩陣 T
    // | alpha  -1 |
    // | 1       0 |
    Matrix T;
    T.m[0][0] = alpha % m;
    T.m[0][1] = m - 1; // -1 在模 m 的意義下等於 m-1
    T.m[1][0] = 1;
    T.m[1][1] = 0;

    // 計算 T 的 (beta-1) 次方
    Matrix T_pow = power(T, beta - 1, m);

    // 初始向量為 | S_1 | = | alpha |
    //           | S_0 |   | 2     |
    ull s1 = alpha % m;
    ull s0 = 2 % m;

    // 最終結果 S_beta = T_pow[0][0] * S_1 + T_pow[0][1] * S_0
    ull ans = (safe_mul(T_pow.m[0][0], s1, m) + safe_mul(T_pow.m[0][1], s0, m)) % m;

    std::cout << ans << std::endl;

    return 0;
}