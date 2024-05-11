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
      int a[n*n],forward=1,back=n*n;
      f(i,0,(n*n)){
         if(i%2==0){a[i]=forward;forward++;}
         else {a[i]=back;back--;}
      }
      if(n%2==0)swap(a[0],a[(n*n)-1]);
      else swap(a[0],a[(n*n)-2]);
      
      if(n==1)cout<<1<<'\n';
      else if(n==2)cout<<-1<<'\n';
      else{
         int c=0;
         f(i,0,n*n){//cout<<a[i]<<' ';
            if(c==n-1){cout<<a[i]<<'\n';c=0;}
            else {cout<<a[i]<<" ";c++;}
         }
      }
      
   }
   return 0;
}