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

ll flor(ll x, ll k) {
	if(k >= 63) return 0;
	return x >> k;
  }
  
  ll ceilll(ll x, ll k) {
	if(k >= 63) return (x > 0 ? 1 : 0);
	return (x + ((ll)1 << k) - 1) >> k;
  }

void AKG(){	
	ll x, n, m;
  cin >> x >> n >> m;
  
  ll zz;
  if(n >= 63) zz = 0;
  else {
    ll tmp = x >> n;
    zz = ceilll(tmp, m);
  }
  
  ll tmp = flor(ceilll(x, m), n);
  
  ll mx = max(zz, tmp);
  ll mn = min(zz, tmp);
  
  cout << mn<< " " << mx << "\n";
	
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
