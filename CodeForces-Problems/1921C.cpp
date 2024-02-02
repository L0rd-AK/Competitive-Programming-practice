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
   int t;
   cin>>t;
   while(t--){
      ll n,ful,a,b;
      cin>>n>>ful>>a>>b;
      ll arr[n+1];
      arr[0]=0;
      f(i,1,n+1)cin>>arr[i];
      f(i,1,n+1){
         if((arr[i]-arr[i-1])*a<=b)ful-=(arr[i]-arr[i-1])*a;
         else ful-=b;
      }

      if(ful>0)cout<<"YES\n";
      else cout<<"NO\n";

   }
   

    
	return 0;
}