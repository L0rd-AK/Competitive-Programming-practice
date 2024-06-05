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
      int n;cin>>n;
      string s;
      cin>>s;
      bool f=1;
      f(i,0,n-1){
         if(s[i]>='a' and s[i]<='z' and s[i]<=s[i+1] or s[i]>='0' and s[i]<='9' and s[i]<=s[i+1])continue;
         else{
            cout<<"NO\n";
            f=0;
            break;
         }
      }
      if(f)cout<<"YES\n";
     
   }

   return 0;
}