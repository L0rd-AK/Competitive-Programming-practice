#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    int n;
    cin >> n;
    vector<ll> v(n), p(n, 0);

    f(i, 0, n) {
        cin >> v[i];
    }
    p[0] = v[0];
    f(i, 1, n) {
        p[i] = v[i] + p[i - 1];
    }

    int ans = 0;
    ll sum = p[n - 1];
    f(i, 1, n - 1) {  
        if (v[i] == 0) {
            ll l = p[i - 1];
            ll r = sum - p[i];

            if (l == r) {
                ans += 2;
            } else if (abs(l - r) == 1) {
                ans++;
            }
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

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
