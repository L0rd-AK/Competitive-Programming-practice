#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

   ll n,x,ans=0;
   cin>>n>>x;
   while(n--){
      string s;cin>>s;
      int z; cin>>z;
      if(s=="+"){
         x+=z;
      }else{
         if(x<z){
            ans++;
         }else x-=z;
      }
   }
   cout<<x<<" "<<ans<<endl;

   return 0;
}