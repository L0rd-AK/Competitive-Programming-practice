#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;
   cin>>t;
   while(t--){
      int n,m,k,H; cin >> n >> m >> k >> H;
      int ans = 0;
      for(int i=0;i<n;i++){
         int x; cin >> x;
         ans += (H != x) && abs(H - x) % k == 0 && abs(H-x) <= (m-1) * k;
      }
      cout<<ans<<endl;
   }
   
    return 0;
}