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
#define pi pair<ll, ll>

#ifdef LOCAL
#include "D:\\VS-Code\\Competitive programming practice\\Zest-cases\\dbg.h"
#else
#define dbg(x...)
#endif
const int N  = 2e5+10;
vector<pair<int, int>> vp{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
void AKG() {
    int n, m;
    cin >> n >> m;
    vector<vi> a(n,vi(m));
    map<int, int> mp;
    
    f(i,0,n){
        f(j,0,m){
            cin >> a[i][j];
            mp[a[i][j]] = 1;
        }
    }
    dbg(mp);
    f(i,0,n){
        f(j,0,m){
            int tmp = a[i][j];
            for (auto p : vp) {
                int dx = i+p.first, dy = j+p.second;
                if (dx >= 0 && dx < n && dy >= 0 && dy < m) {
                    if(a[dx][dy]==tmp)mp[tmp] = 2;
                    dbg(mp);
                }
            }
        }
    }
    
    int sum = 0, mx = 0;
    for (auto& i : mp) {
        sum += i.second;
        mx = max(mx, i.second);
    }
    pr(sum-mx);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
