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

const int MOD = 998244353;
const int N = 2e5 + 5;
int i,j,k,n,m,t,sz[N+50],res;
void AKG() {
    cin>>n;
    map<pair<int,int>,int > mp; res=0;
    vector<pair<int,int> > q;
    for(i=1;i<n;i++){
        cin>>j>>k; sz[j]++; sz[k]++;
        mp[{j,k}]=mp[{k,j}]=1;
    }
    for(i=1;i<=n;i++)q.push_back({sz[i],i});
    sort(q.rbegin(),q.rend());
    if(n>=4)q.resize(4);
    for(auto [a,b]:q)for(int d=1;d<=n;d++)if(b!=d){
        res=max(res,a+sz[d]-1-!!mp.count({b,d}));
    }
    cout<<res<<'\n';
    for(i=1;i<=n;i++)sz[i]=0;
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