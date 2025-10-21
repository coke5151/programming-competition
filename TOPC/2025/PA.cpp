#include <iostream>

using namespace std;

int main()
{
    long long x, d;
    cin >> x >> d;
    if (x * 2 <= d)
        cout << "double it\n";
    else
        cout << "take it\n";
    return 0;
}