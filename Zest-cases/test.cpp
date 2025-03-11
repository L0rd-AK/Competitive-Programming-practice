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
	int n, M;cin >> n >> M;

	vi x(n), r(n);
	f(i,0,n)cin >> x[i];
	f(i,0,n)cin >> r[i];

	int mn = INT_MAX, mx = INT_MIN;
	f(i,0,n){
		mn=min(mn,x[i]-r[i]);
		mx=max(mx,x[i]+r[i]);
	}

	int ans = 0;
	for(int j = mn; j <= mx; j++){
		int cnt = -1;
		f(i,0,n){
			int dis = abs(j - x[i]);
			if(dis <= r[i]){
				int radius = (r[i] * r[i]);
				int x_dis = dis * dis;
				int y_dis = radius - x_dis;
				int c = sqrt(y_dis);
				if(c > cnt) cnt = c;
			}
		}
		if(cnt >= 0) ans += (2LL * cnt + 1LL);
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
