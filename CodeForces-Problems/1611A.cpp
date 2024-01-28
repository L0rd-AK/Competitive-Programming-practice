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
      string s;
      cin>>s;
      int idx=-1,size=s.length();
      if(s[size-1]=='2' or s[size-1]=='4' or s[size-1]=='6' or s[size-1]=='8'){
         cout<<0<<'\n';
         continue;
      }
      for(int i=0;i<size;i++){
         if(s[i]=='2' or s[i]=='4' or s[i]=='8' or s[i]=='6'){idx=i+1;break;}
      }
      if(idx==-1)cout<<idx<<'\n';
      else if(s[0]=='2' or s[0]=='4' or s[0]=='8' or s[0]=='6')cout<<1<<'\n';
      else cout<<2<<'\n';
   }
    
	return 0;
}