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
         int a[n];
         f(i,0,n)cin>>a[i];
         sort(a,a+n);
         bool flag=1;
         for(int i=0;i<n-2;i++){
            if(a[i]==a[i+2]){
               cout<<a[i]<<'\n';flag=0;
               break;
            }
         }
         if(flag)cout<<-1<<'\n';
      }
      
   return 0;
}