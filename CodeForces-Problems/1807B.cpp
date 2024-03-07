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
      
      int t;cin>>t;
      while(t--){
         int n;cin>>n;
         int a[n],e=0,o=0;
         f(i,0,n){cin>>a[i];if(a[i]%2==0)e+=a[i];else o+=a[i];}
         if(e>o)cout<<"YES\n";
         else cout<<"NO\n";
      }
      
   return 0;
}