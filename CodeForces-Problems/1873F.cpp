#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    f(i, 0, n) cin >> a[i];
    f(i, 0, n) cin >> b[i];
    
    ll l = 0, ans = 0;
    ll sum = 0;
    
    for (ll r = 0; r < n; r++) {
        sum += a[r];
        
        while (l < r && (b[r - 1] % b[r] != 0 || sum > k)) {
            sum -= a[l];
            l++;
        }

        if (sum <= k) {
            ans = max(ans, r - l + 1);
        }
    }
    
    prnt(ans);
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
        solve();
    }

    return 0;
}
