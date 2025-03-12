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
bool f[N];

void AKG(){	
	int n;cin>>n;
	for(int i=1;i<=n;++i)f[i]=0;
	for(int i=1;i<=n;++i){
		int x;cin>>x;
		if(!f[x]){
			f[x]=1;
			cout<<x<<' ';
		}
	}
	for(int i=1;i<=n;++i){
		if(!f[i])cout<<i<<' ';
	}
	cout<<endl;
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
