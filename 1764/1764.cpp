#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> unHear;
vector<string> unSeen;

int main()
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    unHear.resize(N);
    unSeen.resize(M);

    for (int n = 0; n < N; n++)
        cin >> unHear[n];
    for (int m = 0; m < M; m++)
        cin >> unSeen[m];

    sort(unHear.begin(), unHear.end());
    sort(unSeen.begin(), unSeen.end());

    vector<string> ans;
    int n = 0, m = 0;
    if (!unHear.empty() && !unSeen.empty())
    {
        while (n < N && m < M)
        {
            if (unHear[n].compare(unSeen[m]) == 0)
            {
                ans.push_back(unHear[n]);
                n++;
                m++;
            }
            else if (unHear[n].compare(unSeen[m]) > 0)
            {
                m++;
            }
            else
            {
                n++;
            }
        }
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
