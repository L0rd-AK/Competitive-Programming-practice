#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
int minCoin(int n){
   int coin=0;
      coin+=n/15;
      n%=15;
      coin+=n/6;
      n%=6;
      coin+=n/3;
      n%=3;
   return coin+n;
}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

   int t;
   cin>>t;
   while(t--){
      int n;cin>>n;
      if(n<10){
            cout<<minCoin(n)<<endl;
        }else if(n<20){
            cout<<min(minCoin(n),minCoin(n-10)+1)<<endl;
        }else{
            cout<<min({minCoin(n),minCoin(n-10)+1,minCoin(n-20)+2})<<endl;
        }
   }


   return 0;
}