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
      int a[n];
      
      int mn=INT_MAX;
      f(i,0,n) cin>>a[i];
      sort(a,a+n);
      f(i,0,n){
         if(a[i+1]-a[i]<mn)mn=a[i+1]-a[i];
      }
      cout<<mn<<'\n';
   }
   return 0;
}