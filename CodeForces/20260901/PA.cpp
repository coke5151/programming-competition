#include <bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    LL D, M, V;
    while (cin >> D >> M >> V)
    {
        if ((D / V) < (60 - M))
            cout << "run\n";
        else
            cout << "late\n";
    }
    return 0;
}