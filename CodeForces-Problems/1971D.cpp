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
      string s;
      cin>>s;
      int ok=0;
      int ans=1;
      f(i,0,s.length()-1){
         if(s[i]==s[i+1]) continue;
         else ans++;
         if(s[i]=='0' and s[i+1]=='1')ok=1;
      }
      cout<<ans-ok<<endl;
      
      
   }

   return 0;
}