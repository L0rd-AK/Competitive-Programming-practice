#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
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
const int N  = 2e5+10;
void AKG() {
    int n, m;
    cin >> n >> m;
    vector<vi> a(n + 1);
    while (m--) {
        int x, y;
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
    }
    for (int i = 1; i <= n; i++) {
        set<int> st;
        for (auto to : a[i]) st.insert(a[to].size());
        if (st.size() == 1) {
            int u = a[i].size(), v = *st.begin() - 1;
            if (u > 1 && v > 1) {
                cout << u << " " << v << endl;
                return;
            }
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
