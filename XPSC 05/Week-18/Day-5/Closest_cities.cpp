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
const int N = 3e5+5;

ll a[100005],b[100005],c[100005];

void AKG() {
  int n,m;cin>>n;
  for(int i=1;i<=n;++i)cin>>a[i];
  for(int i=1;i<n;++i)b[i+1]=(i==1||a[i]-a[i-1]>a[i+1]-a[i]?1:a[i+1]-a[i])+b[i];
  for(int i=n;i>1;--i)c[i-1]=(i==n||a[i]-a[i-1]<a[i+1]-a[i]?1:a[i]-a[i-1])+c[i];
  cin>>m;
  int x,y;
  while(m--){
    cin>>x>>y;
    if(y>x)pr(b[y]-b[x]);
    else pr(c[y]-c[x]);
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
