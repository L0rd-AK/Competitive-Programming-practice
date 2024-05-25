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
   int clock[]={1,2,3,4,5,6,7,8,9,10,11,12,1,2,3,4,5,6,7,8,9,10,11,12};
   while(t--){
      int a,b,c,d;
      cin>>a>>b>>c>>d;
      int mn=min(a,b),mx=max(a,b);
      // cout<<mn<<" "<<mx<<endl;
      int f1=0,f2=0;

      for(int i=mn;i<=mx;i++){
         if(i==c)f1=1;
         if(i==d)f2=1;
      }
      if((f1+f2)==1)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      
   }
   return 0;
}