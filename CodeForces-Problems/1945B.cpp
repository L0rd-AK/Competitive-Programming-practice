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
   cin >> t;
   while (t--)
   {
      ll a,b,c;
      cin>>a>>b>>c;
      ll ans=0;
      ans+=(2*c-c)/a;
      ans+=(2*c-c)/b;
      
      cout<<ans+2<<endl;
   }

   return 0;
}