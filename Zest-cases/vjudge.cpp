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
const int N = 1e5 + 5;

void AKG(){
	ll n, M;cin >> n >> M;

	vector<ll> x(n), r(n);
	f(i,0,n)cin >> x[i];
	f(i,0,n)cin >> r[i];

	ll mn = INT_MAX, mx = INT_MIN;
	for(int i = 0; i < n; i++){
		ll a  = x[i] - r[i];
		ll b = x[i] + r[i];
		if(a  < mn) mn = a;
		if(b > mx) mx = b;
	}

	ll ans = 0;
	for(ll X = mn; X <= mx; X++){
		ll maxCross = -1;
		for(int i = 0; i < n; i++){
			ll distX = llabs(X - x[i]);
			if(distX <= r[i]){
				ll radius_sq = r[i] * r[i];
				ll horizontal_sq = distX * distX;
				ll vertical_sq = radius_sq - horizontal_sq;
				ll cross = (ll) floorl( sqrtl((long double)vertical_sq) );
				if(cross > maxCross) maxCross = cross;
			}
		}
		if(maxCross >= 0) ans += (2LL * maxCross + 1LL);
	}

	pr(ans);
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
