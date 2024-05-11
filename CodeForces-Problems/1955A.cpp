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

   int t;cin>>t;
   while(t--){
      int n,a,b;
      cin>>n>>a>>b;
      int x,y;
      x=n*a;
      if(n%2==0){
        y=(n/2)*b;
      }else{
        y=(n/2)*b+a;
      }
      cout<<min(x,y)<<endl;
   }
   return 0;
}