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

   int t;cin>>t;
   while(t--){
      int n;cin>>n;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      bool flag=1;
      for(int i=0;i<n-2;i++){
         if(a[i]<0){cout<<"NO\n";flag=0;break;}
         int x=a[i];
         a[i]=0;
         a[i+1]-=2*x;
         a[i+2]-=x;
      }
      if(flag){
         if(a[n-1]!=0 or a[n-2]!=0)cout<<"NO\n";
         else cout<<"YES\n";
      }
      
   }

   return 0;
}