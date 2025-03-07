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

void AKG() {
  int n,d,k;cin>>n>>d>>k;
	int a[n+2]={0};
	for(int i=1;i<=k;i++){
    int x,y;cin>>x>>y;
	  a[max(1,x-d+1)]++;
	  a[y+1]--;
	}
  int x=1,y=1;
	for(int i=1;i<=n-d+1;i++){
		a[i]+=a[i-1];
		if(a[i]>a[x])x=i;
		if(a[i]<a[y])y=i;
	}
	cout<<x<<" "<<y<<endl;
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