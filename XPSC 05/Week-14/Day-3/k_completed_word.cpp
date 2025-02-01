#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()

#ifdef LOCAL
#include "D:\VS-Code\Competitive programming practice\Zest-cases\dbg.h"
#else
#define dbg(x...)
#endif

const int maxn = 200007;
int n, k, ans = 0;
int cnt[maxn][26];
string s;

int func(int u, int v)
{
    int ret = 0, mx = 0;
    for (int j = 0; j < 26; ++j)
    {
        ret += cnt[u][j] + cnt[v][j];
        mx = max(mx, cnt[u][j] + cnt[v][j]);
    }
    return ret - mx;
}

void AKG()
{
    cin >> n >> k >> s;
    for (int i = 0; i < k; ++i)
    {
        for (int j = 0; j < 26; ++j)
        {
            cnt[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cnt[i % k][s[i] - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < k; ++i)
    {
        ans += func(i, k - 1 - i);
    }
    pt(ans / 2);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        AKG();
    }

    return 0;
}
