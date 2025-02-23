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
vi a[N];
vl ans(N);
string s;
void dfs(int cur){
	if(a[cur][0]!=0){
        if(s[cur-1]!='L'){
            ans[a[cur][0]]=ans[cur]+1;
        }else{
            ans[a[cur][0]]=ans[cur];
        }
        dfs(a[cur][0]);
    }
    if(a[cur][1]!=0){
        if(s[cur-1]!='R'){
            ans[a[cur][1]]=ans[cur]+1;
        }else{
            ans[a[cur][1]]=ans[cur];
        }
        dfs(a[cur][1]);
    }
}

void AKG() {
   int n;cin>>n;
   cin>>s;
   f(i,0,n+1)a[i].clear();
   ans.assign(n+2,0);
   f(i,1,n+1){
    int x,y;cin>>x>>y;
    a[i].pb(x);
    a[i].pb(y);
   }
   dfs(1);
   ll cnt=INT_MAX;
   f(i,1,n+1){
    if(a[i][0]==0 && a[i][1]==0){
        cnt=min(cnt,ans[i]);
    }
   }
   pr(cnt);
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
