#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()


void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    ll lowerSum = 0, upperSum = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        ll lo = floor(1.0 * a[i] / k);
        ll up = ceil(1.0 * a[i] / k);

        lowerSum += lo;
        upperSum += up;
    }
    yn(lowerSum <= 0 && 0 <= upperSum);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
