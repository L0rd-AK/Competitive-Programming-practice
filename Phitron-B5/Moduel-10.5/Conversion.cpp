#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

   string s;
   cin>>s;
   f(i,0,s.length()){
    if(s[i]==',')s[i]=' ';
    else if(islower(s[i]))s[i]=toupper(s[i]);
    else s[i]=tolower(s[i]);
   }
   cout<<s<<endl;


   return 0;
}