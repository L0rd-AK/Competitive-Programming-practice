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

void AKG() {
    int n;cin>>n;
    vl a(n),b;
    f(i,0,n){
        cin>>a[i];
        if(a[i]==0)b.push_back(i+1);
    }
    if(b.empty()){
	 	cout<<"1\n";
	 	cout<<1<<" "<<n<<"\n";
	 	return ;
	 }
	 if(b.size()==n){
	 	cout<<3<<endl;
	 	cout<<"3 "<<n<<endl;
	 	cout<<"1 2"<<endl;
	 	cout<<"1 2"<<endl;
	 	return ;
	 }
	 if(a[0]!=0){
	 	cout<<2<<endl;
	 	cout<<"2 "<<n<<endl;
	 	cout<<"1 2"<<endl;
	 	return ;
	 }
	 if(a[n-1]!=0){
	 	cout<<2<<endl;
	 	cout<<"1 "<<n-1<<endl;
	 	cout<<"1 2"<<endl;
	 	return ;
	 }
	 cout<<3<<endl;
	 cout<<"3 "<<n<<endl;
	 cout<<"1 2"<<endl;
	 cout<<"1 2"<<endl;

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