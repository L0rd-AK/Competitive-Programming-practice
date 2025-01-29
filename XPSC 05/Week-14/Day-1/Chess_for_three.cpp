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

   int t;
   cin>>t;
   while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      int ans=0;
      while(a>0 and c>0){
         ans++;
         a--;
         c--;
      }
      if((a+b+c)%2==1)cout<<"-1\n";
      else{
         while(b>0 and c>0){
            ans++;
            b--;
            c--;
         }
         cout<<ans+(b/2)<<endl;
      }
     
   }

   return 0;
}