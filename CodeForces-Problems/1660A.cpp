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
      int a,b;cin>>a>>b;
      if(a>0 and b>0){
         cout<<(a+(b*2))+1<<endl;
      }else{
         if(a==0 and b==0)cout<<1<<endl;
         else if(a==0){
            cout<<1<<endl;
         }else{
            cout<<a+1<<endl;
         }
      }
   }

   return 0;
}