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
         int x,sum=0,odd=0,even=0;
         f(i,0,n){cin>>x;sum+=x;if(x%2==0)even++;else odd++;}
        
         if(sum%2==1 or odd>0 and even>0)cout<<"YES\n";
         else cout<<"NO\n";
      }
   return 0;
}