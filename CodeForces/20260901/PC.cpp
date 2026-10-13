#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    LL n, p, t ,f;
    vector<LL> sp(0, 1000000010);
    
    cin >> n;
    while(n--)
    {
        cin >> p >> t >> f;
        for(LL i = (p+t); i<(p+t+f);i++)
        {
            sp[i]++;
        }
    }
    for(LL i = 0; i < 1000000010;i++)
    {
        if(sp[i]==n){
            cout << i;
            break;
        }
    }
    cout << -1;

    return 0;
}