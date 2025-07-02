#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (auto &u : s)
        cin >> u;
    int ans = 0;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i][j] == '*')
            ans++;
        if (i + 1 < n && s[i + 1][j] == '*')
            i++;
        else
        {
            if (j + 1 < m)
                j++;
            else
                i++;
        }
    }
    pr(ans);
    return 0;
}