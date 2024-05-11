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

   string s;
   cin>>s;
   int c=0,size=s.length();
   // cout<<size<<endl;
   for(int i=0;i<size;i++){
      if(s[i]=='a')c++;
   }
   if(c>(size/2))cout<<size<<endl;
   else cout<<2*c-1<<endl;
   return 0;
}