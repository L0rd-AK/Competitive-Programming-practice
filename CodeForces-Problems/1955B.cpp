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

   int t;cin>>t;
   while(t--){
      int n,c,d;
      cin>>n>>c>>d;
      int a[n*n],b[n*n];
      f(i,0,n*n)cin>>a[i];
      sort(a,a+(n*n));
      b[0]=a[0];
      for (int i = 1; i < n; i++) {
        b[i]=b[i-1]+c;
      }
      for (int i = 1; i < n; i++) {
         for (int j = 0; j < n; j++) {
            b[i*n+j] = b[(i-1)*n+j]+d;
         }
      }
      sort(b,b+(n*n));
      bool flg=1;
      f(i,0,n*n){
         if(a[i]==b[i])continue;
         else{
            cout<<"NO\n";
            flg=0;
            break;
         }
      }
      if(flg)cout<<"YES\n";
   }
   return 0;
}