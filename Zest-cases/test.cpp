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
         int n;cin>>n;
         string a,b;cin>>a>>b;
         bool flag=1;
         f(i,0,n){
            if(a[i]==b[i])continue;
            else if(a[i]=='G' and b[i]=='B' or a[i]=='B' and b[i]=='G') continue;
            else{
               flag=0;
               cout<<"NO\n";
               break;
            }
         }
         if(flag)cout<<"YES\n";
      }
   
   return 0;
}