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
      vector<ll> v(n),p(n,0),mx(n,0);
      ll x=0;
      f(i,0,n){
         cin>>v[i];
         x=max(x,v[i]);
         mx[i]=x;
      }
      p[0]=v[0];
      f(i,1,n)p[i]=v[i]+p[i-1];
      int ans=0;
      for(int i=n-1;i>=0;i--){
            if(p[i]-mx[i]==mx[i])ans++;
      }
      cout<<ans<<"\n";


    }

    return 0;
}