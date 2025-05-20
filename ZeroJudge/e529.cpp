// e529. 00482 - Permutation Arrays
// https://zerojudge.tw/ShowProblem?problemid=e529

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();

    stringstream ss;
    string s;

    while (t--)
    {
        int temp_int;
        string temp_string;
        vector<int> index;
        vector<string> data;

        getline(cin, s); // 空行
        getline(cin, s); // index

        ss.clear();
        ss.str(s);
        while (ss >> temp_int)
        {
            index.push_back(temp_int);
        }

        getline(cin, s); // data
        ss.clear();
        ss.str(s);
        while (ss >> temp_string)
        {
            data.push_back(temp_string);
        }

        vector<string> final(data.size());
        for (int i = 0; i < index.size(); i++)
        {
            final[index[i] - 1] = data[i];
        }

        for (string e : final)
        {
            cout << e << "\n";
        }
    }
    return 0;
}