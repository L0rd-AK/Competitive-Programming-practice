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
      string s;cin>>s;
      int a=0,b=0,c=0;
      f(i,0,s.length()){
         if(s[i]=='A')a++;
         else if(s[i]=='B')b++;
         else c++;
      }
      if(a==b and c==0 or b==c and a==0)cout<<"YES\n";
      else if(b==(a+c))cout<<"YES\n";
      else cout<<"NO\n";
   }

   return 0;
}