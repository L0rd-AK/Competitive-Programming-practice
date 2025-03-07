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
    int n,k;
    cin>>n>>k;
    map<int,int> c;int x;
	for(int i=1;i<=n;++i)cin>>x,++c[x];
	int l=-1,r=-1,L=-1,R=-2;
	for(auto &[s,t]:c){
		if(t>=k){
			if(r<s-1)l=r=s;
			else r=s;
			if(R-L+1<r-l+1)L=l,R=r;
		}
	}
	if(L==-1)cout<<-1<<'\n';
	else cout<<L<<' '<<R<<'\n';
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