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

const int MOD = 1e9+7;
ll N = 1e18;

void AKG(){
  ll n;cin>>n;
  if(n==1){
		printf("yoink a\n");
		printf("yoink b\n");
		printf("*slaps a on top of b*\n");
		printf("yeet b\n");
		printf("go touch some grass\n");
	}
	else if(n==2){
		printf("yoink a\n");
		printf("bruh b is lowkey just 0\n");
		printf("rip this b fell off by a\n");
		printf("vibe check a ratios b\n");
		printf("simp for 7\n");
		printf("bruh a is lowkey just b\n");
		printf("yeet a\n");
		printf("go touch some grass\n");
	}
	else if(n==3){
		printf("yoink n\n");
		printf("yoink a\n");
		printf("bruh m is lowkey just a[0]\n");
		printf("bruh i is lowkey just 1\n");
		printf("vibe check n ratios i\n");
		printf("simp for 9\n");
		printf("yeet m\n");
		printf("go touch some grass\n");
		printf("vibe check a[i] ratios m\n");
		printf("bruh m is lowkey just a[i]\n");
		printf("*slaps 1 on top of i*\n");
		printf("simp for 5\n");
	}
	else{
		printf("yoink n\n");
		printf("yoink a\n");
		printf("yoink k\n");
		printf("bruh i is lowkey just 0\n");
		printf("bruh c is lowkey just 1\n");
		printf("bruh j is lowkey just 0\n");
		printf("vibe check n ratios j\n");
		printf("simp for 17\n");
		printf("vibe check k ratios c\n");
		printf("simp for 15\n");
		printf("vibe check c ratios k\n");
		printf("simp for 15\n");
		printf("yeet a[i]\n");
		printf("go touch some grass\n");
		printf("*slaps 1 on top of i*\n");
		printf("simp for 5\n");
		printf("vibe check a[j] ratios a[i]\n");
		printf("*slaps 1 on top of c*\n");
		printf("*slaps 1 on top of j*\n");
		printf("simp for 7\n");
	}
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    // cin >> t; 
    while (t--)AKG();
    return 0;
}
