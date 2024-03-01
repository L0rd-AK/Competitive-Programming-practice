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
      
      int n;cin>>n;
      int a[n];
      f(i,0,n)cin>>a[i];
      int ans=1,c=1;
      f(i,1,n){
         if(a[i-1]<a[i])c++;
         else {ans=max(ans,c);c=1;}
      }
      cout<<max(ans,c)<<endl;
   return 0;
}