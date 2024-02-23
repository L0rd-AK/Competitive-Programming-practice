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
         int n,m; cin>>n>>m;
         int a[n],b[m];
         f(i,0,n)cin>>a[i];
         f(i,0,m)cin>>b[i];
         sort(a,a+n);
         sort(b,b+m,greater<int>());
         ll sum=0;
         if(n==1){
            cout<<abs(a[0]-b[0])<<endl;
            continue;
         }
         if(n%2==1){
            for(int i=0;i<(n+1)/2;i++) sum+=abs(a[i]-b[i]);
            for(int i=n-1,j=m-1;i>=(n+1)/2;i--,j--) sum+=abs(a[i]-b[j]);
         }else{
            for(int i=0;i<n/2;i++) sum+=abs(a[i]-b[i]);
            for(int i=n-1,j=m-1;i>=n/2;i--,j--) sum+=abs(a[i]-b[j]);
         }
         cout<<sum<<endl;
      }
   
   return 0;
}