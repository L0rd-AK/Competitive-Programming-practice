#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pr(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif

void AKG() {
    int n, m;
    cin >> n >> m;
    
    vl a(n), b(m), B(m);
    f(i, 0, n) cin >> a[i];

    ll mn = LLONG_MAX;
    int mn_idx = 0;
    f(i, 0, m) {
        cin >> b[i];
        if (b[i] < mn) {
            mn = b[i];
            mn_idx = i;
        }
    }

    f(i, 0, m) {
        B[i] = b[(mn_idx + i) % m];
    }

    for (int i = 0; i <= n - m; ++i) {
        bool ok = 0;
        
        for (int j = 0; j < m; ++j) {
            if (a[i + j] < B[j]) break;
            else if (a[i + j] > B[j]) {
                ok = 1;
                break;
            }
        }
        
        if (ok) {
            for (int j = 0; j < m; ++j) {
                a[i + j] = B[j];
            }
            i += m - 1;
        }
    }

    for (int i : a) cout << i << " ";
    cout << endl;
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
