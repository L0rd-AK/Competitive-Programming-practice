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
      int n;
      cin>>n;
      vector<ll> v(n,0);
      ll sum=0;
      f(i,0,n) {cin>>v[i];sum+=v[i];}

      ll lcm=v[0],coin=0;
      for (int i=1;i<n;i++) lcm=lcm*v[i]/__gcd(lcm, v[i]);
       bool ok=1;
       f(i,0,n){
         coin+=lcm/v[i];
         if(v[i]*(lcm/v[i])>sum)continue;
         else ok=0;
       }
       if(coin<lcm){
         f(i,0,n)cout<<lcm/v[i]<<" ";
         cout<<"\n";
       }else cout<<"-1\n";

   }

    return 0;
}