#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    
   int a,b;
   cin>>a>>b;
   if(a==0 and b==0) cout<<"NO\n";
   else if(abs(a-b)<=1)cout<<"YES\n";
   else cout<<"NO\n";

    return 0;
}