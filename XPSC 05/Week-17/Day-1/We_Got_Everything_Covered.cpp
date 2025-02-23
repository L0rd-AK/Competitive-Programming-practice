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
      int n,k;
      cin>>n>>k;
      for(int i=0;i<n;i++){int j=1;
         for(char c='a';j<=k;c++){cout<<c;j++;}
      }
      cout<<'\n';
   }
    
	return 0;
}