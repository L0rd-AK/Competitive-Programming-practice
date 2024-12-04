#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    ll totalSum = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        totalSum += a[i];
    }

    // If total sum is not divisible by K, it's impossible
    if (totalSum % k != 0) {
        cout << "NO\n";
        return;
    }

    // Modular distribution
    ll positiveRemainder = 0, negativeRemainder = 0;
    for (ll i = 0; i < n; i++) {
        ll mod = ((a[i] % k) + k) % k; // Normalize the remainder to be positive
        positiveRemainder += mod;
        negativeRemainder += (k - mod) % k;
    }

    // Check if remainders balance out
    if (positiveRemainder % k == 0 && negativeRemainder % k == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
