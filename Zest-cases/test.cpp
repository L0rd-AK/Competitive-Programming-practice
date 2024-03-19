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
      int n,m,k;cin>>n>>m>>k;
      set<int> a,b,ans;
      f(i,0,n){int x;
         cin>>x;
         a.insert(x);
      }
      f(i,0,m){int x;
         cin>>x;
         b.insert(x);
      }
      int x=0,y=0;
      for(auto i:a) if(i<=k){ans.insert(i);x++;}
      for(auto i:b) if(i<=k){ans.insert(i);y++;}
      if(ans.size()==k and x>=k/2 and y>=k/2)cout<<"YES\n";
      else cout<<"NO\n";
   }

   return 0;
}