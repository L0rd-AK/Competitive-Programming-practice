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

   string a,b;cin>>a>>b;
   int ans=0;
   f(i,0,b.length()){
      if(a[ans]==b[i])ans++;
   }
   cout<<ans<<endl;
   return 0;
}