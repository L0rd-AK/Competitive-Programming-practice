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

void AKG() {
    ll n;
    cin >> n;
    vi a(2 * n + 1, -1);

    f(i, 1, n + 1) {
        int x;
        cin >> x;
        a[x] = i; 
    }

    int ans = 0;
    for (int i = 1; i <= 2 * n; i++) {
        if (a[i] == -1) continue;
        for (int j = i + 1; j <= 2 * n; j++) {
            if (a[j] == -1) continue;
            if (i + j == a[i] * a[j]) ans++;
        }
    }

    pr(ans);
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