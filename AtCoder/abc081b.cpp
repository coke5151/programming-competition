// ABC081B - Shift only

#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    LL n;
    cin >> n;
    vector<LL> v(n);
    for(LL i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    LL cnt = 0;
    bool can_continue = true;
    while(can_continue)
    {
        for(LL i = 0; i < n; i++)
        {
            if(v[i] %2 != 0)
            {
                can_continue = false;
                break;
            }
            v[i] /= 2;
        }
        if(can_continue)
            cnt++;
    }
    cout << cnt;
    return 0;
}