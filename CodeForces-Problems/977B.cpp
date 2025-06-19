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
	string s, s1, a;
	int n, count = 0;
	map<string, int> m;
	cin >> n>> s;
	for (int i = 0; i < n - 1; i++) {
		m[s.substr(i, 2)] ++;
	}
	for (auto i : m) {
		if (i.second > count) {
			count = i.second;
			a = i.first;
		}
	}
	pr(a);
}

int main(){
#ifdef LOCAL
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
//   cin >> t;
  while (t--){
    AKG();
  }

  return 0;
}
