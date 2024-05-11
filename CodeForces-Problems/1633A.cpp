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
      if(n%7==0) cout<<n<<endl;
      else{
         int x=n/10;
         x*=10;
         f(i,1,11)if((x+i)%7==0){cout<<x+i<<endl;break;}
      }
      
   }
   return 0;
}