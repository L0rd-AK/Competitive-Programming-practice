#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)
int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      if(n==1)cout<<k<<'\n';
      else if(n==k)cout<<1<<'\n';
      else if(k>n){
         int x=k/n;
         int y=k%n;
         if(y!=0)x++;
         cout<<x<<'\n';
      }else{
         int x=(n+k-1)/k;
         ll y=((1LL*x*k)+n-1)/n;
         cout<<y<<'\n';
      }

   }
   

    
	return 0;
}