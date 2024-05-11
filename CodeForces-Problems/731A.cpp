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
      
   string s,str="a";
   cin>>s;
   str+=s;
   int sum=0;
   for(int i=1;i<str.length();i++){
      int diff=abs(str[i]-str[i-1]);
      sum+=min(diff,26-diff);
   }
   cout<<sum<<endl;
   
   return 0;
}