#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1,y1,z1) for(ll x1=y1;x1<z1;x1++)
#define f1(x1,y1,z1) for(ll x1=y1;x1<=z1;x1++)
int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif
   int t;
   cin>>t;
   while(t--){
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)cin>>a[i];
      sort(a,a+n);
      int max_len=-1,len=0;
      for(int i=0;i<n-1;i++){
         if(a[i+1]-a[i]>k)max_len=max(max_len,len),len=0;
         else len++;
      }
      max_len=max(max_len,len);
      cout<<n-(max_len+1)<<endl;

   }
   

    
	return 0;
}