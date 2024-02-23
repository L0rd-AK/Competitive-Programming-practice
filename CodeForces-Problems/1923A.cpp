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
         int n; cin>>n;
         int a[n];
         f(i,0,n)cin>>a[i];
         int first=0,s_idx=0,e_idx=0;
         f(i,0,n){
            if(a[i]==1 and first==0){s_idx=i;first=1;}
            if(a[i]==1)e_idx=i;
         }
         int ans=0;
         // cout<<s_idx<<" "<<e_idx<<endl;
         for(int i=s_idx;i<=e_idx;i++){
            if(a[i]==0)ans++;
         }
         cout<<ans<<endl;
      }
   
   return 0;
}