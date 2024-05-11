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
      for(int i=1;i<=n;i++)a[i-1]=i;
      if(n%2==1)cout<<"-1\n";
      else{
         for(int i=0;i<n-1;i+=2)swap(a[i],a[i+1]);
         for(int i=0;i<n;i++)cout<<a[i]<<" ";
      }
      
   return 0;
}