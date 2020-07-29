#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

typedef pair<string, int> info_pair;

int N, M;
vector<info_pair> poke;

bool compare(info_pair p1, info_pair p2)
{
    return p1.first < p2.first;
}

int findIndex(string name)
{
    int start = 0;
    int end = N - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (poke[mid].first.compare(name) == 0)
            return poke[mid].second;
        else if (poke[mid].first.compare(name) < 0)
            start = mid + 1;
        else
            end = mid - 1;
    }
}

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> N >> M;
    for (int n = 0; n < N; n++)
    {
        string name;
        cin >> name;
        poke.push_back(make_pair(name, n + 1));
    }

    vector<info_pair> poke_index(poke);
    sort(poke.begin(), poke.end(), compare);

    for (int m = 0; m <= M; m++)
    {
        string cmd;
        cin >> cmd;
        if (cmd.front() >= 'A' && cmd.front() <= 'Z')
        {
            cout << findIndex(cmd) << "\n";
        }
        else
        {
            cout << poke_index[atoi(cmd.c_str()) - 1].first << "\n";
        }
    }

    return 0;
}