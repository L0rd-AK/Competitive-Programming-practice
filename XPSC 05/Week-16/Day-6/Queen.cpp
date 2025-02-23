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
const int N = 3e5+5;

void AKG() {
   int n,root;cin>>n;
   vi g[n+1],a(n+1),b(n+1);
   f(i,1,n+1){
       int x,y;cin>>x>>y;
       if(x!=1)g[i].pb(x);
       else root=i;
       if(y==1){
        b[x]++;
        a[i]=1;
       }
   }
   vi ans;
   f(i,1,n+1){
     if(root==i)continue;
     if(g[i].size()==b[i] && a[i]==1){
        ans.pb(i);
     }
   }
   if(ans.size()==0)cout<<-1;
   else{
    for(auto i:ans)cout<<i<<" ";
   }
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--) {
        AKG();
    }

    return 0;
}
