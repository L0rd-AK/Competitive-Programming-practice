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
      int n;
      cin>>n;
      if(n%3==0)cout<<n/3<<" "<<n/3<<'\n';
      else if(n%3==1) cout<<(n/3)+1<<" "<<(n/3)<<'\n';
      else cout<<n/3<<" "<<(n/3)+1<<'\n';
      
   }
   return 0;
}