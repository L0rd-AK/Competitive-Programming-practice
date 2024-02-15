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
      string s="#abcdefghijklmnopqrstuvwxyz";
      int t;
      cin>>t;
      while(t--){
      int n;
      cin>>n;
      if(n<=27){
         cout<<"aa"<<s[n-2]<<'\n';
      }else if(n>26 and n<=52){
         cout<<"a"<<s[n-27]<<"z\n";
      }else{
         cout<<s[n-52]<<"zz\n";
      }
   }
   
   return 0;
}