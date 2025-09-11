#include <cfenv>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int rt, rj, st, sj;
    double st_d, sj_d;
    cin >> rt >> rj >> st_d >> sj_d;

    st_d = st_d * 100;
    sj_d = sj_d * 100;

    sj = (int)nearbyint(sj_d);
    st = (int)nearbyint(st_d);

    long long int anst = (rt - 1) * sj;
    long long int ansj = (rj - 1) * st;

    if (anst > ansj)
        cout << "JAKARTA" << endl;
    else if (anst < ansj)
        cout << "TAOYUAN" << endl;
    else
        cout << "SAME" << endl;
    return 0;
}