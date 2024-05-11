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
         int a[n+10]={0};
         f(i,0,n){
            int x;cin>>x;
            a[x]++;
         }
         // f(i,0,n+1)cout<<a[i]<<" ";
         // sort(a,a+n);
         ll ans=0,idx=0;
         f(i,0,n+2){
            if(a[i]>=3){
               ll x=(a[i]*(a[i]-1)*(a[i]-2))/6;
               ans+=x;
            }
            if(a[i]>=2){
               ll x=(a[i]*(a[i]-1))/2;
               ans+=(x*idx);
            }
            idx+=a[i];
         }
         // cout<<'\n'<<ans<<'\n';
         cout<<ans<<'\n';
         

      }
   
   return 0;
}