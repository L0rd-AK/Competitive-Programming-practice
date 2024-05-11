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

   ll e,m,b;
   cin>>e>>m>>b;
   ll ans=min({e,m,b});
   e-=ans;
   m-=ans;
   b-=ans;
   ll y=min(e/2,b);
   cout<<ans+y<<endl;

   return 0;
}