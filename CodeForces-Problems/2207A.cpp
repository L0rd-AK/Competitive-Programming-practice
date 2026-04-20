
#include <bits/stdc++.h>
using namespace std;

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

const int MOD = 1e9+7;
ll N = 1e18;

void AKG(){
  int n;cin>>n;
  string s;cin>>s;
  int a1=0,a0=0;
  string s1=s;
  f(i,1,n-1){
	if(s1[i]=='0'&&s1[i-1]=='1'&&s1[i+1]=='1'){
		s1[i]='1';
	}
  }
  f(i,0,n)if(s1[i]=='1')a1++;
  string s0=s1;
  f(i,1,n-1){
	if(s0[i]=='1'&&s0[i-1]=='1'&&s0[i+1]=='1'){
		s0[i]='0';
	}
  }
  f(i,0,n)if(s0[i]=='1')a0++;
  cout<<a0<<" "<<a1<<endl;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while(t--)AKG();
    return 0;
}