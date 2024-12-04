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
    vector<ll> a(n), b(n);
    ll sum = 0;

    f(i, 0, n) cin >> a[i];
    f(i, 0, n) cin >> b[i];

    vector<pair<ll, ll>> products(n);

    f(i, 0, n) {
        products[i] = {a[i] * b[i], i};
        sum += a[i] * b[i];
    }

    if (sum < k) {
        prnt(-1);
        return;
    }

    sort(all(products), greater<pair<ll, ll>>());

    int cnt = 0;
    ll currentSum = 0;
    for (int i = 0; i < n && currentSum < k; i++) {
        currentSum += products[i].first;
        cnt++;
    }

    if (currentSum >= k) {
        prnt(cnt);
    } else {
        prnt(-1);
    }
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
        AKG();
    }

    return 0;
}
