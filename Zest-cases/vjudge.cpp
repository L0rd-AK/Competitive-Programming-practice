#include<bits/stdc++.h>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;
   cin>>t;
   while(t--){
      int n,ans=0;
      string s;
      cin>>n>>s;
      for(int i=0;i<n;i++)if(s[i]=='U')ans++;
      if(ans%2==1)cout<<"YES\n";
      else cout<<"NO\n";
   }
   
   return 0;
}