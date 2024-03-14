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
      int a[n],b[m];
      f(i,0,n)cin>>a[i];
      f(i,0,m)cin>>b[i];
      int ans=0;
      f(i,0,n)
         f(j,0,m){
            if(a[i]+b[j]<=k)ans++;
         }
      cout<<ans<<endl;
   }

   return 0;
}