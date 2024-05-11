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
     int n,x;
     cin>>x>>n;

     int ans=1;
     for(int i=1;i*i<=x;i++){
         if(x%i==0){
            if(n<=x/i)
               ans=max(ans,i);
            if(n<=i)
               ans=max(ans,x/i);
         }
     }
     cout<<ans<<'\n';
   }
   
   
    
	return 0;
}