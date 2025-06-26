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
bool cmp(pair<ll, ll>& a,pair<ll, ll>& b){
    return a.first+a.second<b.first+b.second;
}
void AKG() {
    int n;cin>>n;
    vl a(n),b(n);
    f(i,0,n)cin>>a[i];
    f(i,0,n)cin>>b[i];
    ll sum=0,mx=INT_MIN;
    f(i,0,n){
        sum+=max(a[i],b[i]);
        mx=max(mx,min(a[i],b[i]));
    }
    pr(sum+mx);
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
