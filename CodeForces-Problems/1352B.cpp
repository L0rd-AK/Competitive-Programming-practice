#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

void AKG() {
        ll n;
        int k;
        cin >> n >> k;
        if (n >= k && (n % 2) == (k % 2)) {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++) {
                cout << 1 << ' ';
            }
            cout << (n - (k - 1)) << '\n';
        }else if (n >= 2LL * k && (n % 2) == 0) {
            cout << "YES\n";
          
            for (int i = 0; i < k - 1; i++) {
                cout << 2 << ' ';
            }
            cout << (n - 2LL * (k - 1)) << '\n';
        }else {
            cout << "NO\n";
        }
}

int main() {
#ifdef LOCAL
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
