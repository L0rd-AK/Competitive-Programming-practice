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
         string s;cin>>s;
         int size=s.length();
         int ans=1;
         f(i,0,size){
           ans=max(ans,(s[i]-'a')+1);
         }cout<<ans<<endl;
      }
   return 0;
}