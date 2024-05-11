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

   int n;
   cin>>n;
   int c=0,ans=0;
   while(c<=n){
      ans++;
      c+=(ans*(ans+1))/2;
   }
   cout<<ans-1<<endl;
   
   return 0;
}