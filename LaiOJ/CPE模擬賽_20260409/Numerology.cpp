#include <bits/stdc++.h>
#define LL long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int sum1 = 0, sum2 = 0;
    while (cin >> s)
    {
        sum1 = 0;
        for (char e : s)
        {
            // cout << e << " ";
            if (e == '/')
                continue;
            sum1 += (e - '0');
        }
        // cout << "sum=" << sum1 << "\n";
        do
        {
            sum2 = 0;
            while (sum1 > 0)
            {
                sum2 += sum1 % 10;
                sum1 /= 10;
            }
            sum1 = sum2;
            // cout << "sum=" << sum1 << "\n";
        } while (sum1 >= 10);
        switch (sum1)
        {
        case 1:
            cout << "Pioneer\n";
            break;
        case 2:
            cout << "Collaborator\n";
            break;
        case 3:
            cout << "Expresser\n";
            break;
        case 4:
            cout << "Stable\n";
            break;
        case 5:
            cout << "Free_Spirit\n";
            break;
        case 6:
            cout << "Dedicated\n";
            break;
        case 7:
            cout << "Seeker\n";
            break;
        case 8:
            cout << "Practitioner\n";
            break;
        case 9:
            cout << "Dreamer\n";
            break;
        default:
            break;
        }
    }
    return 0;
}