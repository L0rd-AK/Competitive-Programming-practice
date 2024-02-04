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
   int t;
   cin>>t;
   while(t--){
      string s;
      cin>>s;
      int size=s.length();
      if(size%2==1)cout<<"NO\n";
      else{
         int flag=1;
         for(int i=0;i<(size/2);i++){
            if(s[i]==s[(size/2)+i])continue;
            else{
               flag=0;
               cout<<"NO\n";
               break;
            }
         }
         if(flag)cout<<"YES\n";
      }
   }
   
   
    
	return 0;
}