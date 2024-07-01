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
      int n,m;
      cin>>n>>m;
      string s;
      cin>>s;
      int a=0,b=0,c=0,d=0,e=0,f=0,g=0;
      for(int i=0;i<n;i++){
         if(s[i]=='A')a++;
         if(s[i]=='B')b++;
         if(s[i]=='C')c++;
         if(s[i]=='D')d++;
         if(s[i]=='E')e++;
         if(s[i]=='F')f++;
         if(s[i]=='G')g++;
      }
      int ans=0;
      if(a<m)ans+=m-a;
      if(b<m)ans+=m-b;
      if(c<m)ans+=m-c;
      if(d<m)ans+=m-d;
      if(e<m)ans+=m-e;
      if(f<m)ans+=m-f;
      if(g<m)ans+=m-g;

      cout<<ans<<endl;
   }

   return 0;
}