#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define prnt(x) cout << x << endl

void AKG() {
    int n, m;
    cin >> n >> m;
    
    map<ll, ll> a, b;

    f(i, 0, n) {
        int x; cin >> x;
        a[x]++;
    }
    f(i, 0, m) {
        int x; cin >> x;
        b[x]++;
    }

    ll ans = 0;
    for (auto &it : b) {
        int value = it.first;
        if (a.find(value) != a.end()) {
            ans += a[value] * b[value];
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
    // cin >> t;  // Use this if there are multiple test cases
    while (t--) {
        AKG();
    }

    return 0;
}
