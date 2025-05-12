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
const int N = 1e6+5;
void AKG() {
    ll n,x,y;cin>>n>>x>>y;
    vi a(n);
    ll sum=0;
    f(i,0,n)cin>>a[i],sum+=a[i];
    sort(all(a));
    ll ans = 0;
    f(i,0,n) {
        int l=lower_bound(all(a),sum-a[i]-y)-a.begin();
		int r=upper_bound(all(a),sum-a[i]-x)-a.begin()-1;
        l = max(l, i+1);
        ans += max(0, r-l+1);
    }
    pr(ans);
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