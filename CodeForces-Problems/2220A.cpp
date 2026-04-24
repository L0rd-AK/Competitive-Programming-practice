
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
  set<int> st;
  f(i,0,n){
	int x;cin>>x;
	st.insert(x);
  }
  if(st.size()==n){
	for (auto it = st.rbegin(); it != st.rend(); ++it) {
		cout << *it << " ";
	}
	cout<<endl;
  }else pr(-1);
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while(t--)AKG();
    return 0;
}