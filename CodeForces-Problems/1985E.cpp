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
      ll a,b,c,k;
      cin>>a>>b>>c>>k;
      ll ans=0,mx;
      f1(i,1,a){
         f1(j,1,b){
            if(k%i==0 and k%j==0){
               ll x=k/(i*j);
               if(x<=c and i*j*x==k){
                  mx=(a-i+1)*(b-j+1)*(c-x+1);
                  ans=max(ans,mx);
               }
            }
         }
      }
      if(ans)cout<<ans<<"\n";
      else cout<<"0\n";

    }

    return 0;
}