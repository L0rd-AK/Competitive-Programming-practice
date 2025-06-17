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
    int n, m;
    cin >> n >> m;
    vector<vi> a(n, vi(m));
    int mx = 0;
    vi r_mx(n, 0),c_mx(m, 0);
    map<int, int> mp;

    f(i,0,n){
        f(j,0,m) {
            cin >> a[i][j];
            mx = max(mx, a[i][j]);
            r_mx[i] = max(r_mx[i], a[i][j]);
            c_mx[j] = max(c_mx[j], a[i][j]);
            mp[a[i][j]]++;
        }
    }

    int mx2 = 0;
    for (auto i : mp) {
        if (i.first != mx)mx2 = max(mx2, i.first);
    }

    vi r_mx_cnt(n, 0),c_mx_cnt(m, 0);
    if (mx > 0) {
        f(i,0,n){
            f(j,0,m) {
                if (a[i][j] == mx) {
                    r_mx_cnt[i]++;
                    c_mx_cnt[j]++;
                }
            }
        }
    }

    int ans = INT_MAX;
    f(r,0,n){
        f(c,0,m){
            int mx_rc = max(r_mx[r], c_mx[c]);
            int tmp = 0;
            if (mx > 0 && mp.count(mx)) {
                 tmp = r_mx_cnt[r] + c_mx_cnt[c];
                 if (a[r][c] == mx)tmp--;
            }

            int curr;
            bool ok = (mx > 0 && mp.count(mx) && tmp == mp[mx]);
            if (mx==0) ok=true;
            if(ok)curr = max(mx2, mx_rc - 1);
            else curr = mx;
            ans = min(ans, curr);
        }
    }
    pr(ans);
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t; 
    while (t--) {
        AKG();
    }

    return 0;
}
