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

void AKG(){
    ll n,k;cin>>n>>k;
    vl v(n);
    f(i,0,n)cin>>v[i];
    if(k==1){
      ll mxval=v[0]+v[n-1];
      for(ll i=1;i<n-1;i++){
         mxval = max(mxval,v[i]+max(v[0],v[n-1]));
      }
      cout<<mxval<<endl;
    }
    else{
     sort(v.rbegin(),v.rend());
     ll sum=0;
     for(ll i=0;i<=k;i++){
        sum+=v[i];
     }
     pr(sum);
    } 
}

int main(){
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        AKG();
    }

    return 0;
}
