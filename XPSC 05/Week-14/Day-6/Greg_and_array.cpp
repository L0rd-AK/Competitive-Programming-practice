#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#define LOCAL
#endif
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define pt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define vl vector<ll>
#define vi vector<int>
#define pb push_back
#define pi pair<int, int>

#ifdef LOCAL
#include "D:\VS-Code\Competitive programming practice\Zest-cases\dbg.h"
#else
#define dbg(x...) 
#endif
#define N 100005

void AKG() {
    int n,m,k;cin>>n>>m>>k;
    vector<ll> a(N,0),l(N,0),r(N,0),d(N,0),dx(N,0),ans(N,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++)cin>>l[i]>>r[i]>>d[i];
    f(i,0,k){
        ll x,y;
        cin>>x>>y;
        dx[x]++,dx[y+1]--;
    }
    for(int i=1;i<=m;i++){
        dx[i]+=dx[i-1];
        d[i]*=dx[i];
        ans[l[i]]+=d[i];
        ans[r[i]+1]-=d[i];
    }
    for(int i=1;i<=n;i++){
        ans[i]+=ans[i-1];
        cout<<ans[i]+a[i]<<" ";
    }
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t;
    while (t--){
        AKG();
    }

    return 0;
}
