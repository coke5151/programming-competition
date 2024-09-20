#include <bits/stdc++.h>

using namespace std;

int main()
{
    int nodes_num;
    cin >> nodes_num;
    vector<string> graph[nodes_num];
    map<string, int> names;
    for (int i = 0; i < nodes_num; i++)
    {
        string name;
        cin >> name;
        names[name] = i;
    }

    int branches_num;
    cin >> branches_num;
    string from, to;
    for (int i = 0; i < branches_num; i++)
    {
        cin >> from >> to;
        graph[names[from]].push_back(to);
        graph[names[to]].push_back(from);
    }

    string typh;
    cin >> typh;
    vector<string> city = graph[names[typh]];
    map<string, string> results_dict;
    int size = city.size();
    set<string> ordered;
    string typh_lower = typh;
    for (int i = 0; i < typh.size(); i++)
    {
        typh_lower[i] = tolower(typh_lower[i]);
    }
    ordered.insert(typh_lower);
    results_dict[typh_lower] = typh;
    for (auto i = 0; i < size; i++)
    {
        string value = city[i];
        for (int j = 0; j < city[i].size(); j++)
        {
            city[i][j] = tolower(city[i][j]);
        }
        string key = city[i];
        results_dict[key] = value;
        ordered.insert(key);
    }

    for (string e : ordered)
    {
        cout << results_dict[e] << endl;
    }

    return 0;
}