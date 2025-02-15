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

void AKG() {
    ll n, c, q;
    cin >> n >> c >> q;
    string s;
    cin >> s;
 
    vector<pair<ll, ll>> a(c), b(c);
    vector<ll> start(c);
    
    ll len = n;
    
    for (ll i = 0; i < c; i++) {
        ll l, r;
        cin >> l >> r;
        a[i] = {l, r};
        b[i] = {len + 1, len + (r - l + 1)};
        start[i] = b[i].first;
        len = b[i].second;
    }
 
    while (q--) {
        ll x;
        cin >> x;
 
        while (x > n) {
            int idx = upper_bound(start.begin(), start.end(), x) - start.begin() - 1;
            if (idx < 0) break;
            x = a[idx].first + (x - b[idx].first);
        }
 
        cout << s[x - 1] << endl;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
