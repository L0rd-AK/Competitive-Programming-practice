#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
bool cmp(pair<ll,int>& a,pair<ll,int>& b){

    return a.first+a.second < b.first+b.second;

}
void AKG() {
   ll n,k;cin>>n>>k;
   vector<pair<ll,int>> vp;
   f(i,0,n){
    int x;cin>>x;
    vp.push_back({x,i+1});
   }
   sort(vp.begin(),vp.end(),cmp);
   ll ans=0;
   f(i,0,n){
     if((vp[i].first+vp[i].second)<=k){
        ans++;
        k-=(vp[i].first+vp[i].second);
     }
   }
   prnt(ans);
}

int main() {
    #ifndef ONLINE_JUDGE
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