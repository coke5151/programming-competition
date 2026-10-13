// ABC081A - Placing Marbles

#include <bits/stdc++.h>

#define LL long long

using namespace std;

int main()
{
    LL a;
    cin >> a;
    LL cnt = 0;
    for(LL i = 0; i < 3; i++)
    {
        if(a%10 == 1)
            cnt++;
        a /= 10;
    }
    cout << cnt;
    return 0;
}