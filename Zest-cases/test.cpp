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
      ll n;cin>>n;
      int x=n%10;
      if(x>8){cout<<"NO\n";continue;}
      else{
         n/=10;
         int ok=1;
         while(n>9){
            x=n%10;
            if(x==0){
               cout<<"NO\n";
               ok=0;
               break;
            }
            n/=10;
         }
         if(ok){
            cout<<(n==1?"YES\n":"NO\n");
         }
      }
      
      
   }

   return 0;
}