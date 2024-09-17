#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    map<int, int> who_is_my_father;
    for (int i = 0; i <= 2000; i++)
    {
        who_is_my_father[i] = i;
    }

    for (int i = 0; i < n; i++)
    {
        long long fa, son;
        cin >> fa >> son;
        who_is_my_father[son] = fa;
    }

    int ask;
    cin >> ask;
    for (int i = 0; i < ask; i++)
    {
        int question;
        cin >> question;
        int answer;
        while (true)
        {
            answer = who_is_my_father[question];
            if (answer == question)
                break;
            question = answer;
        }

        cout << answer << endl;
    }
    return 0;
}