#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define debug(p) for(auto i:p)cout<<i<<" ";cout<<endl;

void AKG() {
    int n;
      cin>>n;
      vector<ll> v(n),p(n,0),mx(n,0);
      ll x=0;
      f(i,0,n){
         cin>>v[i];
         x=max(x,v[i]);
         mx[i]=x;
      }
      p[0]=v[0];
      f(i,1,n)p[i]=v[i]+p[i-1];
      int ans=0;
      for(int i=n-1;i>=0;i--){
            if(p[i]-mx[i]==mx[i])ans++;
      }
      cout<<ans<<"\n";
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
