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
      string s="#abcdefghijklmnopqrstuvwxyz";
      int t;
      cin>>t;
      while(t--){
      int n,k;
      cin>>n>>k;
      if((4*n-2)==k)cout<<n*2<<'\n';
      else if(k%2==1)cout<<(k/2)+1<<'\n';
      else cout<<k/2<<'\n';
      
   }
   
   return 0;
}