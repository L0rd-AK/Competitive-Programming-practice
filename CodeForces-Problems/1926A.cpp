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
      int A=0,B=0;
      f(i,0,s.length()){
         if(s[i]=='A')A++;
         else B++;
      }
      if(A>B)cout<<"A\n";
      else cout<<"B\n";
   }
   
   return 0;
}