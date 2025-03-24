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

bool zzz(int x){
	for(int i=2;i*i<=x;i++)
		if(x%i==0)return 0;
	return 1;
}

void AKG() {
	int n;
	cin>>n;
	vi a;
	int s=n/2;
	while(!zzz(s))s++;
	a.push_back(s);
	for(int i=1;s+i<=n||s-i>=1;i++){
		if(s+i<=n)a.push_back(s+i);
		if(s-i>=1)a.push_back(s-i);
	}
	for(int x:a)
		cout<<x<<' ';
	cout<<endl;
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