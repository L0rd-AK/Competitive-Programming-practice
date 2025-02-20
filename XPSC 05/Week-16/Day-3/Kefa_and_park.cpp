#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

const int MOD = 998244353;
const int N = 200005;
int n, m;
vi a;
vector<vi> adj;
int ans = 0;

void dfs(int v, int p, int cat, int mx_cat) {
    if (a[v]) cat++;
    else cat = 0;
    mx_cat = max(mx_cat, cat);
    
    int child = 0;
    for (int u : adj[v]) {
        if (u != p) {
            dfs(u, v, cat, mx_cat);
            child++;
        }
    }
    
    if (child == 0 && mx_cat <= m) {
        ans++;
    }
}

void AKG() {
    cin >> n >> m;
    a.resize(n + 1);
    adj.resize(n + 1);

    f(i, 1, n + 1) cin >> a[i];

    f(i, 1, n) {
        int x, y;
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    ans = 0;
    dfs(1, -1, 0, 0);
    pr(ans);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
