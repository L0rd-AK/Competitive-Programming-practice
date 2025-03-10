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
int t,n,m,q,c[N],s[N],a[N],l[N],r[N];
void AKG(){
  cin>>n>>m;
		for(int i=1; i<=m; i++) cin>>l[i]>>r[i];
		cin>>q;
		for(int i=1; i<=q; i++) cin>>a[i];
		int L=1,R=q,mid;
		while(L<=R){
			int f=0;
			mid=(L+R)/2;
			for(int i=1; i<=n; i++) s[i]=0;
			for(int i=1; i<=mid; i++) ++s[a[i]];
			for(int i=1; i<=n; i++) s[i]+=s[i-1];
			for(int i=1; i<=m; i++) if(2*(s[r[i]]-s[l[i]-1])>r[i]-l[i]+1) R=mid-1,f++;
			if(!f) L=mid+1;
		}
		pr((L==q+1?-1:R+1));
}

int main()
{
#ifdef LOCAL
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--)
  {
    AKG();
  }

  return 0;
}
