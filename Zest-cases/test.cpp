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
const int N = 1e6+5;

void AKG() {
    string s;
    cin >> s;
    int n = s.length();
    vi a(n, 0), b(n, 0);

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            a[i] = 1;
        }
    }

    b[0] = a[0];
    for (int i = 1; i < n; i++) {
        b[i] = b[i - 1] + a[i];
    }

    dbg(a, b);

    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--;  
        if (x == 0)
            pr(b[y]);
        else
            pr(b[y] - b[x]);
    }
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
