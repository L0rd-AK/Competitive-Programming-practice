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
    vector<int> v(n);
    ll ans = 0;
    f(i, 0, n) {
        cin >> v[i];
        ans += v[i];
    }
    ll x = 50 * (n + 1) - ans;
    if (x > 100) prnt(-1);
    else if (x <= 0) prnt(0);
    else prnt(x);
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
