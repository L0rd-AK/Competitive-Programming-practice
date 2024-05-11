#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)
int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif
      string s="#abcdefghijklmnopqrstuvwxyz";
      int t;
      cin>>t;
      while(t--){
      int n;
      cin>>n;
      
      ll a[n],sum=0;
      f(i,0,n){cin>>a[i];sum+=a[i];}
      int min_water=sum/n;
      bool flag=1;
      f(i,0,n-1){
         if(a[i]<min_water){cout<<"NO\n";flag=0;break;}
         a[i+1]+=a[i]-min_water;
         a[i]=min_water;
      }if(flag)cout<<"YES\n";
   }
   
   return 0;
}