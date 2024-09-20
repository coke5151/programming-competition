// 幫幫可憐的賴庭岳
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string fomula;
    cin >> fomula;
    int size = fomula.size();
    vector<int> final_fomula;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        if (fomula[i] == '+')
        {
            final_fomula.push_back(temp);
            final_fomula.push_back(-1); // +
        }
        else if (fomula[i] == '-')
        {
            final_fomula.push_back(temp);
            final_fomula.push_back(-2); // -
        }
        else if (fomula[i] == '*')
        {
            i++;
            temp *= (fomula[i] - '0');
        }
        else if (fomula[i] == '/')
        {
            i++;
            temp /= (fomula[i] - '0');
        }
        else
        { // number
            temp = (fomula[i] - '0');
        }
    }
    final_fomula.push_back(temp);
    size = final_fomula.size();
    int answer = final_fomula[0];
    for (int i = 2; i < size; i += 2)
    {
        if (final_fomula[i - 1] == -1)
        {
            answer += final_fomula[i];
        }
        else if (final_fomula[i - 1] == -2)
        {
            answer -= final_fomula[i];
        }
    }
    cout << answer;
    return 0;
}