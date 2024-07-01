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
      int n;cin>>n;
      int x[n],mn=INT_MAX;
      f(i,0,n){
         cin>>x[i];
         if(x[i]<mn)mn=x[i];
      }
      int ans=INT_MAX;
      // if(x[0]==mn)ans=x[1];
      f(i,0,n-1){
            int temp=max(x[i],x[i+1]);
            ans=min(ans,temp);
      }
      // if(x[n-1]==mn)ans=min(ans,x[n-2]);
      cout<<ans-1<<endl;
   }

   return 0;
}