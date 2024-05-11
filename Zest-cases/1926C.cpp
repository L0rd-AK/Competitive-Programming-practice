#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(int x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(int x1=y1;x1<=z1;x1++)
int sz=1000000;
int temp[1000000];
int num_sum(int n){
   ll sum=0;
   while(n!=0){
      sum+=(n%10);
      n/=10;
   }
   return sum;
}
int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif
      
      f(i,1,sz+1){
        temp[i]=temp[i-1]+num_sum(i);
      }
      int t;
      cin>>t;
      while(t--){
      int n;
      cin>>n;
      cout<<temp[n]<<endl;

   }
   
   return 0;
}