#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif

   int x,y;
   cin>>x>>y;
   int ans=0;
   for(int i=x+1;i<=50;i++){
      int c=0;
      for(int j=2;j*j<=i;j++){
         if(i%j==0)c++;
         if(c>2){break;}
      }
      if(c==0){
         ans=i;
         break;
      }
   }
   if(ans==y)cout<<"YES\n";
   else cout<<"NO\n";
    
	return 0;
}