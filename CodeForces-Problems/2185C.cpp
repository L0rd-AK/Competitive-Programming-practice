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
    int n,s,c=1,ans=1,arr[3001];
	cin>>n;
	for(s=1;s<=n;s++)cin>>arr[s];
	sort(arr+1,arr+1+n);
	for(s=2;s<=n;s++){
		if(arr[s]-arr[s-1]==1)c++;
		else if(arr[s]-arr[s-1]==0)c=c;
		else c=1;
		ans=max(ans,c);
	}
	cout<<ans<<'\n';
}

int main() {
#ifdef LOCAL
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while(t--)AKG();
    return 0;
}
