#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)
int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif
      int t;
      cin>>t;
      while(t--){
      int n;
      cin>>n;
      int a[n];
      int mn=INT_MAX;
      for(int i=0;i<n;i++){
         cin>>a[i];
         mn=min(mn,a[i]);
      }
      ll ans=0;
      for(int i=0;i<n;i++){
         ans+=a[i]-mn;
      }
      cout<<ans<<'\n';
   }
   
   return 0;
}