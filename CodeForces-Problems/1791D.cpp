#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
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

const int MOD = 1e9+7;
ll N = 1e18;

void AKG(){
    int n; cin >> n;
    string s; cin >> s;

    vi pre(n + 1, 0);
    int mask = 0;
    pre[0] = 0;

    f(i, 0, n) {
        mask |= (1 << (s[i] - 'a'));
        pre[i + 1] = __builtin_popcount(mask);
    }

    vi suff(n + 1, 0);
    mask = 0;
    suff[n] = 0;

    for (int i = n - 1; i >= 0; i--) {
        mask |= (1 << (s[i] - 'a'));
        suff[i] = __builtin_popcount(mask);
    }

    int mx = 0;
    f(i, 1, n) {
        mx = max(mx, pre[i] + suff[i]);
    }

    pr(mx);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while (t--)AKG();
    return 0;
}
