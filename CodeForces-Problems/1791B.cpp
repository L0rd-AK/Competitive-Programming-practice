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
      
      int t;cin>>t;
      while(t--){
         int n;cin>>n;
         string s;cin>>s;
         int x=0,y=0;
         bool flag=true;
         f(i,0,s.length()){
            if(s[i]=='U')y++;
            else if(s[i]=='D')y--;
            else if(s[i]=='L')x--;
            else if(s[i]=='R')x++;

            if(x==1 and y==1){
               cout<<"YES\n";
               flag=false;
               break;
            }
         }
         
         if(flag)cout<<"NO\n";
      }
   return 0;
}