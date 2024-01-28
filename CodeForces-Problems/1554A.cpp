#include <bits/stdc++.h>
using namespace std;
#define ll long long int

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
      ll a[n],mx=INT_MIN,idx=-1;
      for(int i=0;i<n;i++) cin>>a[i];
      ll ans=INT_MIN;
      for(int i=1;i<n;i++){
         if(ans<a[i]*a[i-1])ans=a[i]*a[i-1];
      }
      cout<<ans<<endl;
      
      
   }
    
	return 0;
}