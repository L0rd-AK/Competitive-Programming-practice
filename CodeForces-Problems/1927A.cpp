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
      int n;
      cin>>n;
      string s;
      cin>>s;
      int st=-1,end=-1;
      for(int i=0;i<n;i++){
         if(s[i]=='B' and st==-1)st=i;
         if(s[i]=='B')end=i;
      }
      cout<<(end-st)+1<<'\n';
   }
   return 0;
}