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
      ll a[n],b[n];
      vector<ll> dif;
      f(i,0,n){cin>>a[i];b[i]=a[i];}
      f(i,1,n){
         if(b[i]<b[i-1]){
            b[i]=b[i-1];
         }
      }
      f(i,0,n){
         int x=b[i]-a[i];
         if(x)dif.push_back(x);
      }
      int size=dif.size();
      sort(dif.begin(),dif.end());

      ll ans=0,z=0,zom=0;
      f(i,0,size){
         z+=dif[i];
         zom=dif[i];
         ans+=(zom*(size+1-i));
         if(i != size-1)dif[i+1]=(dif[i+1]-z);
      }
      cout << ans << endl;
   }

    return 0;
}