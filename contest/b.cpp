#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    if (!(cin >> t)) return 0;
    const long long primes[] = {
        2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53
    };
    while (t--) {
        int n;
        cin >> n;
        unsigned long long G = 0;
        for (int i = 0; i < n; ++i) {
            unsigned long long x;
            cin >> x;
            G = __gcd(G, x);
        }
        long long ans = -1;
        for (long long p : primes) {
            if (G % p != 0ULL) { ans = p; break; }
        }
        cout << ans << "\n";
    }
    return 0;
}
