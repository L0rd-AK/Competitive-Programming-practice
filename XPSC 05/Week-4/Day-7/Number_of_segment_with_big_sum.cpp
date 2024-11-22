#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    f(i, 0, n) cin >> v[i];

    ll l = 0, ans = 0, sum = 0;

    for (ll r = 0; r < n; r++) {
        sum += v[r];
        while (sum >= k) {
            ans += (n-r);
            sum -= v[l];
            l++;
        }
    }

    if (ans == 0) {
        prnt(0);
    } else {
        prnt(ans);
    }
}

int main() {
    #ifndef ONLINE_JUDGE
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
