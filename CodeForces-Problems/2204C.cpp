
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

ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return (a / __gcd(a, b)) * b; 
}

void AKG(){
  ll a,b,c,m;cin>>a>>b>>c>>m;
  ll a1=m/a,b1=m/b,c1=m/c;
  ll ab=lcm(a,b);
  ll bc=lcm(b,c);
  ll ca=lcm(c,a);
  ll abc=lcm(ab,c);
  ll ans1=a1*6-3*(ab>m?0:m/ab)-3*(ca>m?0:m/ca)+2*(abc>m?0:m/abc);
  ll ans2=b1*6-3*(ab>m?0:m/ab)-3*(bc>m?0:m/bc)+2*(abc>m?0:m/abc);
  ll ans3=c1*6-3*(bc>m?0:m/bc)-3*(ca>m?0:m/ca)+2*(abc>m?0:m/abc);
  cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t=1;
    cin >> t; 
    while(t--)AKG();
    return 0;
}