#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   

void AKG() { 
   int n,m,h;cin>>n>>m>>h;
   vector<ll> v(n);
   f(i,0,n)cin>>v[i];
   vector<ll> p(m);
   f(i,0,m)cin>>p[i];
   sort(v.begin(),v.end(),greater<ll>());
   sort(p.begin(),p.end(),greater<ll>());
   ll ans=0;
   for(int i=0;i<min(n,m);i++){
    ans+=min(v[i],p[i]*h);
   }
   prnt(ans);
}

int main() {
    #ifndef ONLINE_JUDGE
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
