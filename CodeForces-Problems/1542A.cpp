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
      int n;
      cin>>n;
      int a[2*n];
      int c=0,cc=0;
      f(i,0,2*n){
         cin>>a[i];
         if(a[i]%2==1)c++;
         else cc++;
      }
      if(c==cc)cout<<"Yes\n";
      else cout<<"No\n";

   }
   return 0;
}