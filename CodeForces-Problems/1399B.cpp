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
         int n;cin>>n;
         int a[n],b[n];
         f(i,0,n)cin>>a[i];
         f(i,0,n)cin>>b[i];
         int min_a=a[0],min_b=b[0];
         f(i,1,n){
            min_a=min(min_a,a[i]);
            min_b=min(min_b,b[i]);
         }
         ll ans=0;
         f(i,0,n){
            ans+=max(a[i]-min_a,b[i]-min_b);
         }
         cout<<ans<<endl;


      }
   
   return 0;
}