#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
   #endif

   int n;
   cin>>n;cin.ignore();
   while(n--){
      string s;
      cin>>s;
      int ans;
      if(s[0]=='1'){
         int x=s.length();
         if(x==1)cout<<1<<'\n';
         else if(x==2)cout<<3<<'\n';
         else if(x==3)cout<<6<<'\n';
         else if(x==4)cout<<10<<'\n';
      }else if(s[0]=='2'){
         ans=10;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='3'){
         ans=20;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='4'){
         ans=30;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='5'){
         ans=40;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='6'){
         ans=50;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='6'){
         ans=50;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='7'){
         ans=60;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='8'){
         ans=70;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }else if(s[0]=='9'){
         ans=80;
         int x=s.length();
         if(x==1)cout<<ans+1<<'\n';
         else if(x==2)cout<<ans+3<<'\n';
         else if(x==3)cout<<ans+6<<'\n';
         else if(x==4)cout<<ans+10<<'\n';
      }
   }
    
	return 0;
}