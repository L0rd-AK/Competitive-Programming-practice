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

   int n,ans=0,count=0;
   cin>>n;
   string s,x;cin>>s;
   for(int i=0;i<n;i++){
      x+=s[i];
      if(x.length()>=3){
         for(int i=0;i<x.length();i++){
            if(x[i]=='x' and x[i+1]=='x' and x[i+2]=='x'){
               ans++;
               x.pop_back();
            }
         }
      }
   }
   cout<<ans<<endl;

   return 0;
}