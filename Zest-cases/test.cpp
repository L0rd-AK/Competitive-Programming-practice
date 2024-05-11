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
      int n;
      cin>>n;
      int a[n],b[n];
      f(i,0,n)cin>>a[i];
      f(i,0,n)cin>>b[i];
      int ans=0,c=0;
      for(int i=0;i<n;i++){
         if(a[i-c]>b[i])ans++,c++;
      }
      cout<<ans<<endl;
   }
   
   return 0;
}