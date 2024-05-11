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
      int a[n];
      f(i,0,n)cin>>a[i];
      if(n==1){cout<<1<<endl;continue;}
      else if(n==2){
        if(a[0]!=a[1])cout<<1<<endl;
        else cout<<2<<endl;
        continue;
      }
      sort(a,a+n);
      int mean=a[(n - 1) / 2 ];
      int ans=0;
      f(i,0,n){
        if(a[i]>mean)ans++;
      }
      cout<<((n/2)+1)-ans<<endl;
   }


   return 0;
}