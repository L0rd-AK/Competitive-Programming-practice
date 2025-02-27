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

const int MOD = 998244353;
const int N = 3e5+5;

void AKG() {
    ll n,x, k;cin >> n >> x >> k;
    string s;cin >> s;
    
    ll pos = x,fst_0 = -1;
    for (int i = 1; i <= n; i++) {
        pos += (s[i-1] == 'L' ? -1 : 1);
        if (pos == 0) {
            fst_0 = i;
            break;
        }
    }
    if (fst_0 == -1 || fst_0 > k) {
        pr(0);
        return;
    }
    
    ll tmp = 0, r0 = -1;
    for (int i = 1; i <= n; i++) {
        tmp += (s[i-1] == 'L' ? -1 : 1);
        if (tmp == 0) {
            r0 = i;
            break;
        }
    }
    if (r0 == -1) {
        pr(1);
        return;
    }
    
    ll z = k - fst_0;
    ll ans = z / r0;
    pr(ans+1);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
