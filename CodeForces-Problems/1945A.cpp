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
      int a,b,c;
      cin>>a>>b>>c;
      ll ans=0,rem_b=b%3;
      if(rem_b==1 and c<2){cout<<-1<<endl;continue;}
      else if(rem_b==2 and c<1){cout<<-1<<endl;continue;}
      else{
         ans+=a;
         ans+=(b+c)/3;
         if((b+c)%3!=0)ans++;
      }
      cout<<ans<<endl;
   }

   return 0;
}