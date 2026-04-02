#include <bits/stdc++.h>

#define LL long long
#define MODDER 1000000007

using namespace std;

class Matrix
{
private:
public:
    LL leftUp;
    LL rightUp;
    LL leftDown;
    LL rightDown;
    Matrix(LL leftUp, LL rightUp, LL leftDown, LL rightDown)
    {
        this->leftUp = leftUp;
        this->rightUp = rightUp;
        this->leftDown = leftDown;
        this->rightDown = rightDown;
    }
    Matrix()
    {
        this->leftUp = 0;
        this->rightUp = 0;
        this->leftDown = 0;
        this->rightDown = 0;
    }

    Matrix operator*(const Matrix &rightMatrix)
    {
        Matrix result;
        result.leftUp = ((this->leftUp * rightMatrix.leftUp) % MODDER + (this->rightUp * rightMatrix.leftDown) % MODDER) % MODDER;
        result.rightUp = ((this->leftUp * rightMatrix.rightUp) % MODDER + (this->rightUp * rightMatrix.rightDown) % MODDER) % MODDER;
        result.leftDown = ((this->leftDown * rightMatrix.leftUp) % MODDER + (this->rightDown * rightMatrix.leftDown) % MODDER) % MODDER;
        result.rightDown = ((this->leftDown * rightMatrix.rightUp) % MODDER + (this->rightDown * rightMatrix.rightDown) % MODDER) % MODDER;
        return result;
    }
};

Matrix ksm(Matrix a, LL b)
{
    if (b == 1)
    {
        return a * Matrix(1, 0,
                          0, 1);
    }

    Matrix half = ksm(a, b / 2);
    if (b % 2 == 0)
    {
        return half * half;
    }
    else
    {
        return half * half * a;
    }
}

LL getFabb(LL n) // 1, 1, 2, 3, 5, 8, 13...
{
    if (n == 1 || n == 2)
        return 1;

    /*
        [ a_i ] [1  1][a_i-1]
        [     ]=[    ][     ]
        [a_i-1] [1  0][a_i-2]
    */
    Matrix t = ksm(Matrix(
                       1, 1,
                       1, 0),
                   n - 2);
    return t.leftUp * 1 + t.rightUp * 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    LL n;
    while (cin >> n)
    {
        cout << getFabb(n) % MODDER << "\n";
    }

    return 0;
}