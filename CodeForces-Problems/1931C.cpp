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
         f(i,0,n)cin>>a[i];
         int a1=0,a2=0;
         for(int i=0;i<n-1;i++){
            if(a[i]==a[0])a1++;
            else break;
         }
         for(int i=n-1;i>=0;i--){
            if(a[i]==a[n-1])a2++;
            else break;
         }
         int x=n-max(a1,a2);
         // cout<<x<<endl;
         // cout<<a1<<" "<<a2<<" "<<<<" "<<n<<endl;
         if(a[0]==a[n-1])cout<<max(0,n-a1-a2)<<'\n';
         else cout<<max(0,x)<<endl;

      }
   
   return 0;
}