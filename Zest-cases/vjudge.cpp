
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
         map<int, int> mp;
         f(i,0,n){
            int x;cin>>x;
            mp[x]++;
         }
         ll ans=0,idx=0;
         for(auto i:mp){
            ll x=i.second;
            if(x>=3){
               ll z=(x*(x-1)*(x-2))/6;
               ans+=z;
            }
            if(x>=2){
               ll z=(x*(x-1))/2;
               ans+=(z*idx);
            }
            idx+=x;
         }
         // cout<<'\n'<<ans<<'\n';
         cout<<ans<<'\n';
         

      }
   
   return 0;
}
