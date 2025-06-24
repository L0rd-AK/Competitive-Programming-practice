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

void AKG() {
    int k, a, b, x, y;cin >> k >> a >> b >> x >> y;
    int tmp = k;
    int a1 = 0;
    a1 += max(0, (k-a+x) / x);
    tmp -= max(0, (k-a+x) / x) * x;
    a1 += max(0, (tmp-b+y) / y);
    int a2 = 0;
    tmp = k;
    a2 += max(0, (k-b+y) / y);
    tmp -= max(0, (k-b+y) / y) * y;
    a2 += max(0, (tmp-a+x) / x);
    pr(max(a1, a2));
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
