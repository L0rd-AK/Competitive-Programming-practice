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
         for(int i=0;i<n/2;i++){
            cout<<a[i]<<" "<<a[n-1-i]<<" ";
         }
         if(n%2==1)cout<<a[n/2]<<endl;
         else cout<<endl;
      }
      
   return 0;
}