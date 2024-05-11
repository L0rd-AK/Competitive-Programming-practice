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
     cin>>n>>x;
     if(n==1 or n==2){cout<<1<<'\n';continue;}
     //else if(n==3 or n==4 or)
     n-=2;
     int ans=(n+x-1)/x;
     cout<<ans+1<<'\n';
     
   }
   
   
    
	return 0;
}