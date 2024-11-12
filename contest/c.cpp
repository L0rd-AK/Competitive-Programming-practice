#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl
   
bool cmp(pair<int,int>& a,pair<int,int>& b){
    return a.first > b.first;
}
void AKG(){ 
   int n,k,l;cin>>n>>k>>l;
   vector<pair<int,int>>vp;
   while(n--){
    int a,b;cin>>a>>b;
    vp.push_back({a,b});
   }
   sort(vp.begin(),vp.end(),cmp);
   ll ans=0,idx=0;
   for(auto i:vp){
    if(idx>=k)break;
    if(i.second==l){
        ans+=i.first;
        idx++;
    }
    //cout<<i.first<<" "<<i.second<<endl;
   }
   if(ans==0 || idx<k)prnt(-1);
   else prnt(ans);
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
