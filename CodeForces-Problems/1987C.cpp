#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      int a[n];
      f(i,0,n)cin>>a[i];
      int ans=a[n-1];
      for(int i=n-2;i>=0;i--)ans=max(ans+1,a[i]);
      cout<<ans<<endl;

   }

    return 0;
}