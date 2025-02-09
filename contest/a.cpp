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
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...) 
#endif
// #define N 200005

bool cmp(const pi &a, const pi &b){
    return a.first > b.first;
}

void AKG() {
    int n, m;
    cin >> n >> m;
    vector<pi> a(n);
    ll total = 0; 
    for (int i = 0; i < n; i++){
        ll sum = 0,val_row = 0,sum2 = 0;
        for (int j = 0; j < m; j++){
            int x;cin >> x;
            sum += x;
            sum2 += x;
            val_row += sum2;
        }
        dbg(sum,sum2,val_row);
        a[i].first = sum;
        a[i].second = val_row;
        total += val_row;
        dbg(total);
    }
    sort(all(a),cmp);

    ll xtra = 0;
    for (int i = 0; i < n; i++){
        xtra += (ll)(n-1-i) * a[i].first;
    }

    ll ans = total+(m * xtra);
    pt(ans);
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
