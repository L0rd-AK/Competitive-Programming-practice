#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) cout << (f ? "YES\n" : "NO\n")
#define pt(x) cout << x << endl
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
// #define N 200005


void AKG() {
    int n, m;
    cin >> n >> m;
    vl a(n);
    f(i, 0, n)cin >> a[i];
    cin >> m;

    ll up = 1e9+7;
    ll low = -up; 
    bool flg = true;
    f(i, 0, n){
        ll tmp1 = up;
        if(a[i] >= low)tmp1 = a[i];
        ll x = low + a[i],tmp2 = up;
        if (m - a[i] >= low) tmp2 = m - a[i];
        ll z_idx = min(tmp1, tmp2);
        if(z_idx == up){
            flg = false;
            break;
        }
        low = z_idx;
    }
    yn(flg);
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
