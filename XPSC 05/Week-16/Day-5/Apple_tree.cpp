#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif

#define ll long long
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

const int MOD = 998244353;
const int N = 1e6+5;
vi a[N];
vl ans(N);
void dfs(int curr,int par){
	bool hasChild=false;
	for(auto i:a[curr]){
		if(i==par)continue;
		hasChild=true;
		dfs(i,curr);
		ans[curr]+=ans[i];
	}
	if(!hasChild){
		ans[curr]=1;
	}
}

void AKG() {
   int n;cin>>n;
   f(i,0,n+1)a[i].clear();
   ans.assign(n+2,0);
   f(i,0,n){
    int x,y;cin>>x>>y;
    a[x].pb(y);
    a[y].pb(x);
   }
   dfs(1,-1);
   int q;cin>>q;
   while(q--){
    int x,y;cin>>x>>y;
    pr(ans[x]*ans[y]);
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
