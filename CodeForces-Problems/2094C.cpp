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

const int MOD = 1e9+7;
const int N = 5e8+4;

void AKG() {
    int n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    f(i,0,n) {
        f(j,0,n) {
            cin >> a[i][j];
        }
    }
 
    vi b(2 * n + 1, 0);
    f(i,0,n) {
        f(j,0,n) {
            int s = i + j + 2;
            if (!b[s]) b[s] = a[i][j];
        }
    }
 
    vector<bool> c(2 * n + 1, false);
    for (int i = 2; i <= 2 * n; i++) {
        c[b[i]] = true;
    }
 
    int mising = 0;
    for (int i = 1; i <= 2 * n; i++) {
        if (!c[i]) {
            mising = i;
            break;
        }
    }
 
    b[1] = mising;
    for (int i = 1; i <= 2 * n; i++) {
        cout << b[i] << " ";
    }cout << endl;
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
