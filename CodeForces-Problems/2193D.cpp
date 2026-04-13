#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define pr(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define vi vector<int>

void AKG(){
  int n;cin>>n;
  vi a(n),b(n);
  vector<ll> prefx(n);
  
  f(i,0,n)cin>>a[i];
  f(i,0,n)cin>>b[i];
  prefx[0]=b[0];
  f(i,1,n){
    prefx[i]=prefx[i-1]+b[i];
  }

  sort(all(a));

  ll ans = 0;

  f(i,0,n){
    int x = a[i];
    auto it = lower_bound(all(a), x);
    int swords = a.end() - it;

    int k = upper_bound(all(prefx), swords) - prefx.begin();

    ans = max(ans, 1LL * x * k);
  }

  pr(ans);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; 
    while(t--) AKG();
    return 0;
}