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
      int a,b;
      cin>>a>>b;
      int ans=min(max(2*a,b),max(2*b,a));
      cout<<ans*ans<<endl;
   }
   

    
	return 0;
}