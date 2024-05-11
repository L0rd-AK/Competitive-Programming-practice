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
   int n=s.length();bool flg=1;
   for(int i=0;i<=n/2;i++){
    if(s[i]==s[n-1-i])continue;
    else{
        cout<<"NO\n";
        flg=0;
        break;
    }
   }
   if(flg)cout<<"YES\n";
   return 0;
}