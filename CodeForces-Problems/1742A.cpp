#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif

   int n;
   cin>>n;
   while(n--){
      int a,b,c;
      cin>>a>>b>>c;
      if(a==b+c or b==a+c or c==b+a)cout<<"YES\n";
      else cout<<"No\n";
   }
    
	return 0;
}