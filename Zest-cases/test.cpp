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
      int n,m;
      cin>>n>>m;
      if(n == 1 ){
            cout<<0<<endl;
            continue;
        }
        if(n == 2){
            cout<<m<<endl;
            continue;
        }
        if(n>2){
            cout<<m*2<<endl;
        }
   }


   return 0;
}