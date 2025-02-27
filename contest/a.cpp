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
const int N = 3e5+5;

void AKG() {
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    vector<ll> prefix(n + 1, 0LL);
    for(int i = 1; i <= (int)n; i++) {
        prefix[i] = prefix[i - 1] + (s[i - 1] == 'L' ? -1LL : 1LL);
    }

    ll fst_0 = -1;
    for(int i = 1; i <= (int)n; i++) {
        if(x + prefix[i] == 0) {
            fst_0 = i;
            break;
        }
    }

    if(fst_0 == -1 || fst_0 > k) {
        cout << 0 << "\n";
        return;
    }

    ll resets   = 1;
    ll timeUsed = fst_0;

    ll t0 = -1;
    for(int j = 1; j <= (int)n; j++) {
        if(prefix[j] == 0) {
            t0 = j;
            break;
        }
    }

    if(t0 == -1) {
        cout << resets << "\n";
        return;
    }

    ll remainingTime = k - timeUsed;
    ll additionalCycles = remainingTime / t0;
    resets += additionalCycles;

    cout << resets << "\n";
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
