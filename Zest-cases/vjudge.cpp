#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()

void AKG() {
    int n, k;
    cin >> n >> k;
    vector<ll> v, p;
    ll x;
    f(i, 0, n - k + 1) {
        cin >> x;
        p.push_back(x);
    }

    // Calculate the differences
    for (int i = 1; i < p.size(); i++) {
        v.push_back(p[i] - p[i - 1]);
    }

    // Check if the differences are sorted
    yn(is_sorted(all(v)));
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
