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
      int a,b,c;
      cin>>a>>b>>c;
      if(a+b>=10 or b+c>=10 or c+a>=10)cout<<"YES\n";
      else cout<<"NO\n";
   }
   

    
	return 0;
}