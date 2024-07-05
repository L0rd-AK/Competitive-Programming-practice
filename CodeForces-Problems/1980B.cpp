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
      int n,f,k;
      cin>>n>>f>>k;
      int a[n];
      f(i,0,n)cin>>a[i];
      int z=a[f-1];
      if(k==n){cout<<"YES\n";continue;}
      
      sort(a,a+n,greater<int>());
      bool flg=1;
      if(a[k]==z and a[k-1]==z and k!=n){cout<<"MAYBE\n";flg=0;}
      if(flg)
      f(i,0,k){
         if(a[i]==z){
            cout<<"YES\n";
            flg=0;
            break;
         }
      }
      
      if(flg)cout<<"NO\n";

      /*
      cout<<z<<endl;
      cout<<a[k]<<endl;
      */
      

   }

    return 0;
}