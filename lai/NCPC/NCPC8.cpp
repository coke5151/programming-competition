// 淹水了
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    map<string, set<string>> graph;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        graph[s] = set<string>{};
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        string a, b;
        cin >> a >> b;
        graph[a].insert(b);
        graph[b].insert(a);
    }
    string drown;
    cin >> drown;
    graph[drown].insert(drown);
    vector<string> answer;
    for (string e : graph[drown])
    {
        answer.push_back(e);
    }
    sort(answer.begin(), answer.end());
    for (string e : answer)
    {
        cout << e << "\n";
    }
    return 0;
}