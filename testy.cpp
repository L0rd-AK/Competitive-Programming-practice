#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// List of primes < 10
vector<int> primes = {2, 3, 5, 7};

// Inclusion-Exclusion count of numbers ≤ n divisible by any of {2,3,5,7}
ll count_bad(ll n) {
    int sz = primes.size();
    ll cnt = 0;
    for (int mask = 1; mask < (1 << sz); ++mask) {
        ll lcm = 1;
        int bits = 0;
        for (int i = 0; i < sz; ++i) {
            if (mask & (1 << i)) {
                lcm = lcm * primes[i] / __gcd(lcm, (ll)primes[i]);
                bits++;
            }
        }
        if (lcm > n) continue;
        ll term = n / lcm;
        if (bits % 2 == 1) cnt += term;
        else cnt -= term;
    }
    return cnt;
}

ll count_good(ll n) {
    return n - count_bad(n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        cout << count_good(r) - count_good(l - 1) << "\n";
    }

    return 0;
}
